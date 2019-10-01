#define PinLed 13 // Deklarasi pin 13 (terdapat led pada pin 13) 

void setup() {
  // put your setup code here, to run once:
  pinMode(PinLed, OUTPUT); // Memberikan mode ouput pada pin 13 (PinLed)

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(PinLed, HIGH); // Memberi nilai HIGH atau 1 pada pin 13
  delay(200); // Memberikan waktu dengan satuan milisecond
  digitalWrite(PinLed, LOW); // Memberi nilai LOW atau 0 pada pin 13
  delay(300); // Memberikan waktu

}
