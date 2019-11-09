#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include "DHT.h"
#define DHTPIN A2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  lcd.begin(20, 4);
  lcd.backlight();
  delay(250);
  
  lcd.setCursor(0, 0);
  lcd.print("ALAT PENDETEKSI SUHU");
  delay(2000);
  lcd.setCursor(1, 2);
  lcd.print("OLEH : CANDRANI S.M");
  delay(2000);
  

}

void loop() {
  double celcius = dht.readTemperature();
  double kelvin = celcius + 273.15;
  double farenheit = ((celcius * 9 / 5) + 32);
  double reamur = celcius * 4 / 5;
  Serial.print(celcius);
  Serial.println("'C");
  Serial.print(kelvin);
  Serial.println("'K");
  Serial.print(farenheit);
  Serial.println("'F");
  Serial.print(reamur);
  Serial.println("'R");


  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("CELCIUS   : ");
  lcd.print(celcius);
  lcd.print("'C");
  lcd.setCursor(0, 1);
  lcd.print("KELVIN    : ");
  lcd.print(kelvin);
  lcd.print("'K");
  lcd.setCursor(0, 2);
  lcd.print("FAHRENHEIT: ");
  lcd.print(farenheit);
  lcd.print("'F");
  lcd.setCursor(0, 3);
  lcd.print("REAMUR    : ");
  lcd.print(reamur);
  lcd.print("'R");
  delay(500);

}
