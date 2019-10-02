int input = 2;
int output = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(input, INPUT);
  pinMode(output, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int val = digitalRead(input);
  digitalWrite(output,val);
  delay(200);
}
