int PIN_2 = 2;  // Deklarasi pin 2 dengan nama PIN_2
int PIN_13 = 13;  // Deklarasi pin 13 dengan nama PIN_13

void setup() {
  // put your setup code here, to run once:

   pinMode (PIN_2, INPUT); // Memberikan mode PIN_2 (pin 2) menjadi input
   pinMode (PIN_13, OUTPUT); // Memberikan mode PIN_13 (pin 13) menjadi output 
}

void loop() {
  // put your main code here, to run repeatedly:

  int Button = digitalRead(PIN_2); // deklarasi button dengan nilai membaca (digitalread) pada PIN_2 (pin 2)
  if (Button == HIGH){  //kondisi if
    digitalWrite(PIN_13, HIGH); // akan menjalankan perintah jika if benar
  }else{
    digitalWrite(PIN_13, LOW);  // akan menjalankan perintah jika if salah
    delay (1000); // Memberikan waktu dengan satuan millisecond
  }

}
