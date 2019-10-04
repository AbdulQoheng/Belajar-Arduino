#define PIR 2 // deklarasi pin 2 dengan nama PIR
#define led 13 // deklarasi pin 13 dengan nama led

void setup() {
  // put your setup code here, to run once:
  pinMode(PIR, INPUT); // jadikan PIR sebagai input
  pinMode(led, OUTPUT); // jadikan led sebagai output
  
}

void loop() {
  // put your main code here, to run repeatedly:
 int onpir = digitalRead(PIR); // menampung nilai dari PIR
 if(onpir == HIGH){ // jika onpir bernilai HIGH
  digitalWrite(led, HIGH); // maka led menyala
 }else{
  digitalWrite(led, LOW); // maka led mati
 }

 delay(500); // delay 500 ms
}
