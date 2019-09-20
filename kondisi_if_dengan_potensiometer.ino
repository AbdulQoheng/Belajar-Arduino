int led = 3; // deklarasi pin 3
int analog = A1;  // deklarasi pin A1
int input;  // deklarasi variabel input

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Untuk koneksi dengan serial monitor
  pinMode(led, OUTPUT); // Memberi mode led menjadi Output
  pinMode(analog, INPUT); // Memberi mode analog menjadi Input

}

void loop() {
  // put your main code here, to run repeatedly:
  input = analogRead(analog);

  if(input < 500){
    digitalWrite(led, LOW);
  }else if(input > 500 && input < 1000) {
    digitalWrite(led, HIGH);
  }else if(input >= 1000){
    digitalWrite(led, LOW);
  }

  Serial.println(input);  // untuk melihat nilai2 di serial monitor

}
