int analog = A3; // Deklarasi analog pin A3
int led = 13; // Deklarasi led pin 13
int input; // Deklarasi input
int kecepatan; // Deklarasi kecepatan

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // Memberikan mode OUTPUT pada led

}

void loop() {
  // put your main code here, to run repeatedly:

  input = analogRead(analog); // inisialisasi input dengan nilai yang di baca analog
  kecepatan = map(input,0,1023,0,1500); // inisialisasi kecepatan dengan maping input
                                        // dimana input 0 = 0
                                        // dimana input 1023 = 1500
                                        
  digitalWrite(led,HIGH); // menghidupkan led secara digital
  delay(kecepatan); // memberikan delay dengan nilai kecepatan (ms)
  digitalWrite(led,LOW); // mematikan led
  delay(kecepatan); // memberikan delay dengan nilai kecepatan (ms)

}
