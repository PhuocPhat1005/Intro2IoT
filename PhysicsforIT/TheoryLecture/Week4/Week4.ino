// Photoresistor and analog
// const int photoresistor = A0;

// void setup() {
//   pinMode(photoresistor, INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   int value = analogRead(photoresistor);
//   Serial.println(value);
// }

// //Get the average of the value range, if value <= average, LED is turned off, else, turned on
// const int photoresistor = A0;
// const int LED = 7;
// const int avg = 50;

// void setup() {
//   pinMode(photoresistor, INPUT);
//   pinMode(LED, OUTPUT);
// }

// void loop() {
//   int value = analogRead(photoresistor);
  
//   if (value <= avg)
//     digitalWrite(LED, HIGH);
//   else
//     digitalWrite(LED, LOW);
// }

//Servo
// #include <Servo.h>
// Servo myServo;
// const int outputAnalog = 9;

// void setup ()
// {
//     myServo.attach(outputAnalog);
// }
// void loop ()
// {
//     myServo.write(0);
//     delay(1000);

//     for (int i = 0; i <= 180; ++i)
//     {
//       myServo.write(i); //Bánh răng của Servo sẽ quay đến góc 90 độ được định sẵn (ko phải xoay thêm 90 độ)
//       delay(10)
//     }
// }

//Servo and potentiometer
// #include <Servo.h>
// Servo myServo;
// const int outputAnalog = 9;
// const int potentiometer = A0;

// void setup ()
// { 
//     pinMode(potentiometer, INPUT);
//     myServo.attach(outputAnalog);
//     Serial.begin(9600);
// }
// void loop ()
// {
//     int value = analogRead(potentiometer);
//     int servo_value = map(value, 0, 1023, 0, 180);
//     Serial.println(servo_value);

//     myServo.write(servo_value);
// }

//Dinasour game
// #include <Servo.h>
// Servo myServo;
// const int servo_output = 9;
// const int photoresistor = A1;

// bool space = false;

// void setup ()
// { 
//     pinMode(photoresistor, INPUT);
//     myServo.attach(servo_output);
//     Serial.begin(9600);
// }
// void loop ()
// {
//     int photoresistor_value = analogRead(photoresistor);
//     Serial.println(photoresistor_value);

//     if (photoresistor_value >= 300)
//     {
//         if (space)
//         {
//           myServo.write(0);
//           delay(100);
//           space = false;
//         }
//         else
//         {
//           myServo.write(60);
//         }
//     }
//     else
//     {
//       myServo.write(60);
//     }
// }

//7-Segment Display common Cathode, đếm từ 0 đến 9
// const int LED[7] = {3, 4, 5, 6, 7, 8, 9};
// const int number[10][7] = {{3, 4, 5, 6, 7, 8}, {4, 5}, {3, 4, 6, 7, 9}, {3, 4, 5, 6, 9}, {4, 5, 8, 9}, {3, 5, 6, 8, 9}, {3, 5, 6, 7, 8, 9}, {3, 4, 5}, {3, 4, 5, 6, 7, 8, 9}, {3, 4, 5, 6, 8, 9}};
// const int length[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

// long start = 0;
// int index = 0;

// void setup ()
// {
//     for (int i = 0; i < 7; ++i)
//         pinMode(LED[i], OUTPUT);
// }

// void loop ()
// {
//     long end = millis();
//     if (end - start > 500)
//     {
//         for (int i = 0; i < length[index]; ++i)
//             digitalWrite(number[index][i], LOW);

//         start = millis();
//         index = (index + 1) % 10;
//     }
//     else
//     {
//         for (int i = 0; i < length[index]; ++i)
//             digitalWrite(number[index][i], HIGH);
//     }
// }

//Temp & Humidity sensor
//Download library: https://www.arduinolibraries.info/libraries/dht-sensor-library
//Library in Arduino IDE: Adafruit Unified Sensor, thao tác: Sketch > Include Library > Manage Libraries
//Trên Tinkercad không có thiết bị DHT11
#include "DHT.h"
const int dht_pin = 4;
DHT dht(dht_pin, DHT11);

void setup ()
{
    Serial.begin(9600);
    dht.begin(); //Compulsory if using DHT11
}

void loop ()
{
    float h = dht.readHumidity();
    float t = dht.readTemperature(); //Read temp as Celcius
    float f = dht.readTemperature(true); //Read temp as Fahrenheit

    Serial.print("Humidity: ");
    Serial.println(h);
    Serial.print("Temperature (C): ");
    Serial.println(t);
    Serial.print("Temperature (F): ");
    Serial.println(f);

    delay(1000);
}