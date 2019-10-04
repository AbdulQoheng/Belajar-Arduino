#define echoPin 11  // deklarasi pin 11 dengan nama echoPin (untuk pin echo
#define trigPin 12  // deklarasi pin 12 dengan nama trigPin (untuk pin trig)
#define led 13  // deklrasi pin 13 dengan nama led (untuk led)


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); // menjadikan output
  pinMode(echoPin, INPUT); // menjadikan input
  pinMode(led, OUTPUT); // menjadikan output

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, HIGH); // menyalakan trigPin
  delay(10); // dengan waktu 10 ms
  digitalWrite(trigPin, LOW); // mematikan trigPin
  double data = pulseIn(echoPin, HIGH); // menginisialisasi dengan data yang di baca dari echo
  double jarak = 0.0343 * (data/2); // membuat jarak dari data

  if(jarak > 10){ // jika jarak lebih dari 10 cm
    digitalWrite(led, LOW); // maka led mati
  }else{
    digitalWrite(led, HIGH); // maka led menyala
  }
  delay(500); // memberikan delay 500 ms
  
}
