//Declare constant value
//Button
const int buttonTest = 4;

//7-segment LED
const int LED[7] = {7, 8, 9, 10, 11, 12, 13};
const bool number[4][7] = {
  	{true, true, true, true, true, true, false}, 
    {false, true, true, false, false, false, false},
    {true, true, false, true, true, false, true},
    {true, true, true, true, false, false, true}
};
const long delayLED = 1000;

//Buzzer
const int buzzer = 2;
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0
const int lightMelody[3][108] = {
  {
  	NOTE_E4,2, NOTE_G4,4,
    NOTE_D4,2, NOTE_C4,8, NOTE_D4,8, 
    NOTE_E4,2, NOTE_G4,4,
    NOTE_D4,-2,
    NOTE_E4,2, NOTE_G4,4,
    NOTE_D5,2, NOTE_C5,4,
    NOTE_G4,2, NOTE_F4,8, NOTE_E4,8, 
    NOTE_D4,-2,
    NOTE_E4,2, NOTE_G4,4,
    NOTE_D4,2, NOTE_C4,8, NOTE_D4,8, 
    NOTE_E4,2, NOTE_G4,4,
    NOTE_D4,-2,
    NOTE_E4,2, NOTE_G4,4,

    NOTE_D5,2, NOTE_C5,4,
    NOTE_G4,2, NOTE_F4,8, NOTE_E4,8, 
    NOTE_F4,8, NOTE_E4,8, NOTE_C4,2,
    NOTE_F4,2, NOTE_E4,8, NOTE_D4,8, 
    NOTE_E4,8, NOTE_D4,8, NOTE_A3,2,
    NOTE_G4,2, NOTE_F4,8, NOTE_E4,8, 
    NOTE_F4,8, NOTE_E4,8, NOTE_C4,4, NOTE_F4,4,
    NOTE_C5,-2
  },
  {
  	NOTE_G4, 4, NOTE_G4, 4, //1
    NOTE_AS4, -4, NOTE_G4, 8, NOTE_G4, 4,
    NOTE_AS4, 4, REST, 4, NOTE_G4, 8, NOTE_AS4, 8,
    NOTE_DS5, 4, NOTE_D5, -4, NOTE_C5, 8,
    NOTE_C5, 4, NOTE_AS4, 4, NOTE_F4, 8, NOTE_G4, 8,
    NOTE_GS4, 4, NOTE_F4, 4, NOTE_F4, 8, NOTE_G4, 8,
    NOTE_GS4, 4, REST, 4, NOTE_F4, 8, NOTE_GS4, 8,
    NOTE_D5, 8, NOTE_C5, 8, NOTE_AS4, 4, NOTE_D5, 4,

    NOTE_DS5, 4, REST, 4, NOTE_DS4, 8, NOTE_DS4, 8, //8
    NOTE_DS5, 2, NOTE_C5, 8, NOTE_GS4, 8,
    NOTE_AS4, 2, NOTE_G4, 8, NOTE_DS4, 8,
    NOTE_GS4, 4, NOTE_AS4, 4, NOTE_C5, 4,
    NOTE_AS4, 2, NOTE_DS4, 8, NOTE_DS4, 8,
    NOTE_DS5, 2, NOTE_C5, 8, NOTE_GS4, 8,
    NOTE_AS4, 2, NOTE_G4, 8, NOTE_DS4, 8,
    NOTE_AS4, 4, NOTE_G4, 4, NOTE_DS4, 4,
    NOTE_DS4, 2
  },
  {
  	NOTE_D5,-4, NOTE_A5,8, NOTE_FS5,8, NOTE_D5,8,
    NOTE_E5,-4, NOTE_FS5,8, NOTE_G5,4,
    NOTE_FS5,-4, NOTE_E5,8, NOTE_FS5,4,
    NOTE_D5,-2,
    NOTE_D5,-4, NOTE_A5,8, NOTE_FS5,8, NOTE_D5,8,
    NOTE_E5,-4, NOTE_FS5,8, NOTE_G5,4,
    NOTE_FS5,-1,
    NOTE_D5,-4, NOTE_A5,8, NOTE_FS5,8, NOTE_D5,8,
    NOTE_E5,-4, NOTE_FS5,8, NOTE_G5,4,

    NOTE_FS5,-4, NOTE_E5,8, NOTE_FS5,4,
    NOTE_D5,-2,
    NOTE_D5,-4, NOTE_A5,8, NOTE_FS5,8, NOTE_D5,8,
    NOTE_E5,-4, NOTE_FS5,8, NOTE_G5,4,
    NOTE_FS5,-1
  }
};
const int lightNotes[3] = {48, 54, 38};
const int lightTempo[3] = {108, 76, 85};
const int cheerfulMelody[4][120] = {
  {
  	REST,1,
    REST,1,
    NOTE_C4,4, NOTE_E4,4, NOTE_G4,4, NOTE_E4,4, 
    NOTE_C4,4, NOTE_E4,8, NOTE_G4,-4, NOTE_E4,4,
    NOTE_A3,4, NOTE_C4,4, NOTE_E4,4, NOTE_C4,4,
    NOTE_A3,4, NOTE_C4,8, NOTE_E4,-4, NOTE_C4,4,
    NOTE_G3,4, NOTE_B3,4, NOTE_D4,4, NOTE_B3,4,
    NOTE_G3,4, NOTE_B3,8, NOTE_D4,-4, NOTE_B3,4,

    NOTE_G3,4, NOTE_G3,8, NOTE_G3,-4, NOTE_G3,8, NOTE_G3,4, 
    NOTE_G3,4, NOTE_G3,4, NOTE_G3,8, NOTE_G3,4,
    NOTE_C4,4, NOTE_E4,4, NOTE_G4,4, NOTE_E4,4, 
    NOTE_C4,4, NOTE_E4,8, NOTE_G4,-4, NOTE_E4,4,
    NOTE_A3,4, NOTE_C4,4, NOTE_E4,4, NOTE_C4,4,
    NOTE_A3,4, NOTE_C4,8, NOTE_E4,-4, NOTE_C4,4,
    NOTE_G3,4, NOTE_B3,4, NOTE_D4,4, NOTE_B3,4,
    NOTE_G3,4, NOTE_B3,8, NOTE_D4,-4, NOTE_B3,4,

    NOTE_G3,-1
  },
  {
    NOTE_C4,4, NOTE_C4,8, 
    NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4,
    NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8, 
    NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4,
    NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8,

    NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4, 
    NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8,
    NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4,
    NOTE_F4,-2
  },
  {
  	NOTE_B4, 16, NOTE_B5, 16, NOTE_FS5, 16, NOTE_DS5, 16, //1
    NOTE_B5, 32, NOTE_FS5, -16, NOTE_DS5, 8, NOTE_C5, 16,
    NOTE_C6, 16, NOTE_G6, 16, NOTE_E6, 16, NOTE_C6, 32, NOTE_G6, -16, NOTE_E6, 8,

    NOTE_B4, 16,  NOTE_B5, 16,  NOTE_FS5, 16,   NOTE_DS5, 16,  NOTE_B5, 32,  //2
    NOTE_FS5, -16, NOTE_DS5, 8,  NOTE_DS5, 32, NOTE_E5, 32,  NOTE_F5, 32,
    NOTE_F5, 32,  NOTE_FS5, 32,  NOTE_G5, 32,  NOTE_G5, 32, NOTE_GS5, 32,  NOTE_A5, 16, NOTE_B5, 8
  },
  {
  	NOTE_E5, 8, NOTE_D5, 8, NOTE_FS4, 4, NOTE_GS4, 4, 
    NOTE_CS5, 8, NOTE_B4, 8, NOTE_D4, 4, NOTE_E4, 4, 
    NOTE_B4, 8, NOTE_A4, 8, NOTE_CS4, 4, NOTE_E4, 4,
    NOTE_A4, 2
  }
};
const int cheerfulNotes[4] = {60, 25, 31, 13};
const int cheerfulTempo[4] = {160, 140, 105, 180};

//Led RGB
const int LED_red = 3;
const int LED_blue = 5;
const int LED_green = 6;

//Photoresistor
const int photoresistorTest = A3;
const long threshold = 400;

//------------------------------------------

//Code C++
//Button
bool pressedButton = false;
int lastButtonTest = LOW;
//Photoresistor
bool light = true;
bool lastLight = true;

//Step 1
bool step1 = true;
long start_Step1 = 0;
int index = 3;

//Step 2
bool step2 = true;
bool randomedSong = false;
//Things for display notes of a song
int indexSong = 0;
int notes = 0;
int wholenote = 0;
int divider = 0;
int noteDuration = 0;
int thisNote = 0;

void setup()
{
  	Serial.begin(9600);
  
  	//pinMode for testing button
  	pinMode(buttonTest, INPUT);
  
  	//pinMode 7-segment LED
  	for (int i = 0; i < 7; ++i)
      	pinMode(LED[i], OUTPUT);
  	
  	//pinMode Led RGB
  	pinMode(LED_red, OUTPUT);
  	pinMode(LED_blue, OUTPUT);
  	pinMode(LED_green, OUTPUT);
  	
  	//pinMode for testing photoresistor
  	pinMode(photoresistorTest, INPUT);
  
  	// Initialize the random number generator
 	randomSeed(analogRead(0));
}

void pressButton ()
{
  	//Read the value of testing button
  	int value = digitalRead(buttonTest);
  	
  	//Pressing button only affects when congratulating actions finished
  	if (value == LOW && lastButtonTest == HIGH && !pressedButton)
    	pressedButton = true;
  	
  	//Update new value of testing button
  	lastButtonTest = value;
}
void readValuePhotoresistor ()
{
  	//Read the value of testing photoresistor
  	int value = analogRead(photoresistorTest);
  	
  	//The environment is dark if value is lower than threshold, otherwise, it's light.
  	if (value < threshold)
      	light = false;
  	else
      	light = true;
}

void getRandomSong ()
{ 
	if (light)
    {
      	indexSong = random(0, 4);
      	notes = cheerfulNotes[indexSong];
        wholenote = (60000 * 4) / cheerfulTempo[indexSong];
        divider = 0;
        noteDuration = 0;
        thisNote = 0;
    }
  	else
    {
      	indexSong = random(0, 3);
    	notes = lightNotes[indexSong];
        wholenote = (60000 * 4) / lightTempo[indexSong];
        divider = 0;
        noteDuration = 0;
        thisNote = 0;
    }
}

void Step1 ()
{
  	long end_Step1 = millis();
  	if (start_Step1 == 0)
      	start_Step1 = end_Step1;	
      
    if (end_Step1 - start_Step1 >= delayLED)
    {
        start_Step1 = end_Step1;
        index--;

        if (index == -1)
        {
          	step1 = false;
          	for (int i = 0; i < 7; ++i)
            	digitalWrite(LED[i], LOW);
        }
    }
    else
    {
      	for (int i = 0; i < 7; ++i)
        {
          	if (number[index][i])
        		digitalWrite(LED[i], HIGH);
          	else
              	digitalWrite(LED[i], LOW);
        }
    }
}

void Step2 ()
{  
  	if (light)
    {
      	if (thisNote < notes * 2)
        {
          	// calculates the duration of each note
            divider = cheerfulMelody[indexSong][thisNote + 1];
            if (divider > 0) 
            {
                // regular note, just proceed
                noteDuration = (wholenote) / divider;
            } 
          	else if (divider < 0) 
            {
                // dotted notes are represented with negative durations!!
                noteDuration = (wholenote) / abs(divider);
                noteDuration *= 1.5; // increases the duration in half for dotted notes
            }

            // we play the note for its duration
            tone(buzzer, cheerfulMelody[indexSong][thisNote], noteDuration * 0.9);
			
            // Wait for the specief duration before playing the next note.
            delay(noteDuration);

            // stop the waveform generation before the next note.
            noTone(buzzer);
          	
          	//Increase thisNote by 2
          	thisNote = thisNote + 2;
          
          	//Turn off the Led RGB
          	analogWrite(LED_red, 0);
          	analogWrite(LED_blue, 0);
          	analogWrite(LED_green, 0);
        }
      	else
        	step2 = false;
    }
  	else
    {
      	//Play any light song and change the color of Led RGB simutaneously
      	if (thisNote < notes * 2)
        {
          	// calculates the duration of each note
            divider = lightMelody[indexSong][thisNote + 1];
            if (divider > 0) 
            {
                // regular note, just proceed
                noteDuration = (wholenote) / divider;
            } 
          	else if (divider < 0) 
            {
                // dotted notes are represented with negative durations!!
                noteDuration = (wholenote) / abs(divider);
                noteDuration *= 1.5; // increases the duration in half for dotted notes
            }

            // we only play the note for 90% of the duration, leaving 10% as a pause
            tone(buzzer, lightMelody[indexSong][thisNote], noteDuration * 0.9);

            // Wait for the specief duration before playing the next note.
            delay(noteDuration);

            // stop the waveform generation before the next note.
            noTone(buzzer);
          	
          	//Increase thisNote by 2
          	thisNote = thisNote + 2;
          
          	//change the color of Led RGB
          	int red = random(0, 256);
          	int blue = random(0, 256);
          	int green = random(0, 256);
          	analogWrite(LED_red, red);
          	analogWrite(LED_blue, blue);
          	analogWrite(LED_green, green);
        }
      	else
        {
        	step2 = false;
          	analogWrite(LED_red, 0);
          	analogWrite(LED_blue, 0);
          	analogWrite(LED_green, 0);
        }
    }
}

void loop()
{
  	//Press button
  	pressButton();
  	//Identify the environment is light or dark
  	readValuePhotoresistor();
  	if ((light && !lastLight) || (!light && lastLight))
    	randomedSong = false;
  
  	if (pressedButton)
    {	
      	if (step1) //Take Step 1
          	Step1();
        else if (step2) //Take Step 2
        {
          	//If the environment is changed from light to dark or vice versa, we random a new song
        	if (!randomedSong)
            {
              	getRandomSong();
              	randomedSong = true;
            }
          
          	//Take step 2
          	Step2();
        }
        else //Restart initial state
        {
          	//Button
          	pressedButton = false;
			lastButtonTest = LOW;
          	
          	//Step 1
            step1 = true;
           	start_Step1 = 0;
            index = 3;

            //Step 2
            step2 = true;
          	randomedSong = false;
        }
    }
  
  	lastLight = light;
}