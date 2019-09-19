int input;
int ledpin5 = 5;
int ledpin6 = 6;
int ledpin9 = 9;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledpin5, OUTPUT);
  pinMode(ledpin6, OUTPUT);
  pinMode(ledpin9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  input = analogRead(0);
// kondisi while akan di ulang terus selama kondisi benar
  while(input<200){
    digitalWrite(ledpin5, HIGH);
    digitalWrite(ledpin6, HIGH);
    digitalWrite(ledpin9, HIGH);
    delay(500);
    digitalWrite(ledpin5, LOW);
    digitalWrite(ledpin6, LOW);
    digitalWrite(ledpin9, LOW);
    delay(500);

    input = analogRead(0); // untuk mengupdate nilai expression
    
  }
}
