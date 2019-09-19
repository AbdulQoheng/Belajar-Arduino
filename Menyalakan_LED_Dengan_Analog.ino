int ledPin = 9; // deklarasi pin 9 dengan nama ledPin
int analogPin = 0; // deklarasi pin 0 atau pin A0
int Val = 0; // 

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT); // Menjadi ouput
  pinMode(analogPin, INPUT); // menjadi input

}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(analogPin); // membaca input analog
  analogWrite(ledPin, val/4); // menuliskan padaledPin
                              // dari 0 sampai 255

}
