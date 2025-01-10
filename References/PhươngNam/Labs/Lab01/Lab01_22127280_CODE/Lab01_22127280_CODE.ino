const unsigned int LED[6] = {5, 6, 7, 8, 9, 10};
const unsigned int buttonTest = 11;
const unsigned long timeDelay = 1000;
const unsigned long timeMode = 5000;

unsigned long pressedStartTime = 0; //used for measuring the period time of pressing the button
unsigned int lastButtonState = LOW; //used for
unsigned long LEDLastTime = 0; //Used in mode 2, for checking the delay time for switching among LEDs
unsigned int curLED = 0; //Save the current LED in mode 2

unsigned int mode = 1; //When the USB was plugged in, the state of mode 1 will be run first

void setup()
{
  	//Start Serial communication, Transmission speed is 9600
  	Serial.begin(9600);
  	
  	//Set all LED pins as OUTPUT
	for (int i = 0; i < 6; ++i)
     	pinMode(LED[i], OUTPUT);
  	
  	//Set the button pin as INPUT
  	pinMode(buttonTest, INPUT);
}

void turnAllLEDs ()
{
  	//Turn off all LEDs by setting their pins to LOW
  	for (int i = 0; i < 6; ++i)
      digitalWrite(LED[i], LOW);
}
void mode1()
{
  	//In Mode 1, all LEDs will be turned on
  	//Turn on all LEDs by setting their pins to HIGH
	for (int i = 0; i < 6; ++i)
      digitalWrite(LED[i], HIGH);
}
void mode2()
{
  	unsigned long LEDCurTime = millis(); // Get the current time in milliseconds since the program started
	
  	// Check if the time delay has passed to switch to the next LED
  	if (LEDCurTime - LEDLastTime >= timeDelay)
    {
      	LEDLastTime = LEDCurTime; // Update the last time the LED was switched
      	digitalWrite(LED[curLED], LOW); // Turn off the current LED
      	curLED = (curLED + 1) % 6; // Move to the next LED, wrapping around after the last LED
    }
  	else
    	digitalWrite(LED[curLED], HIGH); // Keep the current LED on
}
void testButtonForChangeMode ()
{
  	unsigned int curButtonState = digitalRead(buttonTest); // Read the current state of the button
  
  	// Check if the button was released (transition from HIGH to LOW)
  	if (curButtonState == LOW && lastButtonState == HIGH)
    {
      	Serial.println("Released button!");
     	
        unsigned long pressedDuration = millis() - pressedStartTime; // Calculate the duration the button was pressed
        // Check if the button was pressed long enough to change from mode 1 to mode 2
        if (pressedDuration >= timeMode && mode == 1)
        {
          	turnAllLEDs(); // Turn off all LEDs before switching modes
          	LEDLastTime = millis(); // Reset the last LED switch time
         	mode = 2; // Switch to mode 2
        }
        // Check if the button was pressed for a shorter duration to change from mode 2 to mode 1
        else if (pressedDuration < timeMode && mode == 2)
        {
         	mode = 1; // Switch to mode 1
          	curLED = 0; // Reset the current LED index
        }
      	
      	Serial.print("Press duration: ");
      	Serial.print(pressedDuration);
      	Serial.println("ms");
      	Serial.println("");
    }
  	// Check if the button was pressed (transition from LOW to HIGH)
  	else if (curButtonState == HIGH && lastButtonState == LOW)
    {
      	Serial.println("Pressed button!");
      	pressedStartTime = millis(); // Record the start time when the button is pressed
    }
  
  	lastButtonState = curButtonState; // Update the last button state
}

void loop()
{ 
  	testButtonForChangeMode(); // Check if the button was pressed to change modes
  
  	// Run the corresponding mode function based on the current mode
  	if (mode == 1)
      	mode1();
  	else
      	mode2();
}