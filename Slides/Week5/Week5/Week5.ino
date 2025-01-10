//PIR Motion Sensor
// const int PIR_out = 2;


// void setup() {
//   // put your setup code here, to run once:
//   pinMode(PIR_out, INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   int value = digitalRead(PIR_out);
//   Serial.println(value);
// }

//Đoạn code xử lý nhiễu trên PIR
//https://dandelion-croissant-ad4.notion.site/PIR-debounce-aa04fe8d8e2742ebb46b682d7d70eb40
// #define PIR_PIN 2
// #define LED_PIN 13

// // Thời gian debounce
// const int debounceTime = 50;  // milliseconds
// // Ngưỡng phát hiện
// const int motionThreshold = 5;  // số lần đọc liên tiếp

// bool motionDetected = false;
// int motionCount = 0;
// unsigned long lastDebounceTime = 0;

// void setup() {
//   pinMode(PIR_PIN, INPUT);
//   pinMode(LED_PIN, OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   int sensorValue = digitalRead(PIR_PIN);
  
//   // Xử lý debounce
//   if (sensorValue == HIGH) {
//     if (millis() - lastDebounceTime > debounceTime) {
//       motionCount++;
//       lastDebounceTime = millis();
//     }
//   } else {
//     motionCount = 0;
//   }
  
//   if (motionCount >= motionThreshold) {
//     if (!motionDetected) {
//       motionDetected = true;
//       Serial.println("Motion detected!");
//       digitalWrite(LED_PIN, HIGH);
//     }
//   } else {
//     if (motionDetected) {
//       motionDetected = false;
//       Serial.println("No motion.");
//       digitalWrite(LED_PIN, LOW);
//     }
//   }
// }

//LCD_I2C
//Include the library code
// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>
// LiquidCrystal_I2C lcd(0x27, 16, 2); //0x27 or 0x3F

// void setup ()
// {
//     lcd.init();
//     lcd.setCursor(0,0);
//     lcd.print("Hello world");
//     lcd.setCursor(0,1);
//     lcd.print("Isekai");
// }

// void loop ()
// {
//     lcd.backlight();
//     delay(1000);
//     lcd.noBacklight();
//     delay(1000);
// }

//LCD_I2C use to print humidity and temperature
// #include "DHT.h"
// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>
// LiquidCrystal_I2C lcd(0x27, 16, 2); //0x27 or 0x3F
// const int dht_pin = 2;
// DHT dht(dht_pin, DHT11);

// void setup ()
// {
//     lcd.init();
//     dht.begin(); //Compulsory if using DHT11
// }

// void loop ()
// {
//     float h = dht.readHumidity();
//     float t = dht.readTemperature(); //Read temp as Celcius

//     lcd.backlight();
//     lcd.setCursor(0,0);
//     lcd.print(h);
//     lcd.print(" %");
//     lcd.setCursor(0,1);
//     lcd.print(t);
//     lcd.print(" oC");
//     delay(1000);
//     lcd.noBacklight();
//     delay(1000);
// }

//Trong Tinkercad gõ LCD, chọn mạch có sẵn của họ để nhận được thư viện có sẵn

//Relay 5VDC
