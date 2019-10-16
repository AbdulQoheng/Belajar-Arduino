int led1 = 13; // Deklarasi pin 13 dengan nama led1
int led2 = 12; // Deklarasi pin 12 dengan nama led2
int led3 = 11; // Deklarasi pin 11 dengan nama led3
int led4 = 10; //Deklarasi pin 10 dengan nama led4

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT); // memberi mode led1 menjadi output
  pinMode(led2, OUTPUT); // memberi mode led2 menjadi output
  pinMode(led3, OUTPUT); // memberi mode led3 menjadi output
  pinMode(led4, OUTPUT); // memberi mode led4 menjadi output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH); // led1 akan menyala
  digitalWrite(led2, LOW);  // led2 akan mati
  digitalWrite(led3, HIGH); // led3 akan menyala
  digitalWrite(led4, LOW);  // led4 akan mati
  delay(300); // waktu 300 ms
  digitalWrite(led1, LOW);  // led1 mati
  digitalWrite(led2, HIGH); // led2 menyala
  digitalWrite(led3, LOW);  // led3 akan mati
  digitalWrite(led4, HIGH); // led4 akan menyala
  delay(300); // waktu 300 ms
  

}
