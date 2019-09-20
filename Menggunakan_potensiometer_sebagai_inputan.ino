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

  int kecerahan = map(input,0,1023,0,255); // fungsi maping dimana nilai input = 0 setara dengan 0 dan nilai = 1023 setara dengan 255
  analogWrite(led, kecerahan); // nilai yang keluar ke led sama dengan nilai kecerahan
  Serial.println(kecerahan); // untuk melihat nilai2 di serial monitor

  delay(2);

}
