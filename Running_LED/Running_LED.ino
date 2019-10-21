int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int button = 2;
int potensio = A1;
int kecepatan;
int input1;
int input2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(button, INPUT);
  input2 = 1;
}

void loop() {
  // put your main code here, to run repeatedly:

  while(true){
    input1 = analogRead(potensio);
    kecepatan = map(input1, 0,1023,10,900);
    input2 += digitalRead(button);
    delay(100);
    if(input2 > 1){
      input2 = 0;
    }
    
    if(input2 == 0){
      Serial.println(kecepatan);
      Serial.println(input2);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      
    }else if(input2 == 1){
      
      Serial.println(kecepatan);
      Serial.println(input2);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      delay(kecepatan);
        
      input1 = analogRead(potensio);
      kecepatan = map(input1, 0,1023,10,900);
      input2 += digitalRead(button);
      delay(100);
      if(input2 > 1){
        input2 = 0;
        loop();
      }
      Serial.println(kecepatan);
      Serial.println(input2);
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      delay(kecepatan);
    
      
      input1 = analogRead(potensio);
      kecepatan = map(input1, 0,1023,10,900);
      input2 += digitalRead(button);
      delay(100);
      if(input2 > 1){
        input2 = 0;
        loop();
      }
      Serial.println(kecepatan);
      Serial.println(input2);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      delay(kecepatan);
    
      input1 = analogRead(potensio);
      kecepatan = map(input1, 0,1023,10,900);
      input2 += digitalRead(button);
      delay(100);
      if(input2 > 1){
        input2 = 0;
        loop();
      }
      Serial.println(kecepatan);
      Serial.println(input2);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      delay(kecepatan);
    
      input1 = analogRead(potensio);
      kecepatan = map(input1, 0,1023,10,900);
      input2 += digitalRead(button);
      delay(100);
      if(input2 > 1){
        input2 = 0;
        loop();
      }
      Serial.println(kecepatan);
      Serial.println(input2);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      delay(kecepatan);  
    }  
  }
  
}
