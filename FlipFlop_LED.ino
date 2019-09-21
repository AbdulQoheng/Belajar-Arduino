int led1 = 13; // Deklarasi pin 13 dengan nama led1
int led2 = 12; // Deklarasi pin 12 dengan nama led2

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT); // memberi mode led1 menjadi output
  pinMode(led2, OUTPUT); // memberi mode led2 menjadi output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH); // led1 akan menyala
  digitalWrite(led2, LOW);  // led2 akan mati
  delay(200); // waktu 200 ms
  digitalWrite(led1, LOW); // led1 mati
  digitalWrite(led2, HIGH); // led2 menyala
  delay(200); // waktu 200 ms

}
