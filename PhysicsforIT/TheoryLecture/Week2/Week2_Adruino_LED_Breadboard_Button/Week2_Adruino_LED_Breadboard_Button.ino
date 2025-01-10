// int a = 30;

// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(9600); // start Serial communication, Transmission speed is 9600, this is a compulsory line to start Serial Monitor

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   Serial.println(a);
//   Serial.println("Hello World");
//   delay(1000);
// }

//The traffic light
// #define REDLED 7
// #define YELLOWLED 8
// #define GREENLED 9

// void setup () {
//   pinMode(REDLED, OUTPUT); //set pin 7 as OUTPUT mode
//   pinMode(YELLOWLED, OUTPUT); //set pin 8 as OUTPUT mode
//   pinMode(GREENLED, OUTPUT); //set pin 9 as OUTPUT mode
// }

// void loop () {
//   int color[3] = {REDLED, YELLOWLED, GREENLED};
//   int delayTime[3] = {5000, 2000, 3000};

//   for (int i = 0; i < 3; ++i)
//   {
//     digitalWrite(color[i], HIGH); //set HIGH digital at pin 7
//     delay(delayTime[i]);
//     digitalWrite(color[i], LOW); //set LOW digital at pin 7
//   }
// }

//Button and LED (Nhấn: Tắt đèn, Thả: Bật đèn)
// int buttonTest = 12;
// int REDLED = 7;

// void setup () {
//   pinMode(buttonTest, INPUT);
//   pinMode(REDLED, OUTPUT);
//   Serial.begin(9600);
// }

// void loop () {
//   int buttonState = digitalRead(buttonTest);
//   if (buttonState == HIGH)
//   {
//     Serial.println("Pressed");
//     digitalWrite(REDLED, LOW);
//     delay(1000);
//   }
//   else
//   {
//     Serial.println("Released");
//     digitalWrite(REDLED, HIGH);
//     delay(1000);
//   }
// }

// int buttonTest = 12;
// int LED = 7;
// bool state = true;

// void setup () {
//   pinMode(buttonTest, INPUT);
//   pinMode(LED, OUTPUT);
// }

// void loop () {
//   int buttonState = digitalRead(buttonTest);

//   if (buttonState == HIGH)
//   {
//     if (state == true)
//     {
//       state = false;
//       delay(300);
//     }
//     else
//     {
//       state = true;
//       delay(300);
//     }
//   }

//   if (state)
//   {
//     digitalWrite(LED, HIGH);
//   }
//   else
//   {
//     digitalWrite(LED, LOW);
//   }
// }

const int LED = 3;

void setup ()
{
  pinMode(LED, OUTPUT);
}

void loop ()
{
  for (int i = 0; i < 256; ++i)
  {
    analogWrite(LED, i);
    delay(10);
  }
  for (int i = 255; i > -1; --i)
  {
    analogWrite(LED, i);
    delay(10);
  }
}
