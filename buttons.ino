
void setup() {
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode (5, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(8) == LOW)
 {
  digitalWrite(5, HIGH);

 }
 if(digitalRead(9) == LOW)
 {
 digitalWrite(5, LOW);
 }

 
  // put your main code here, to run repeatedly:

}
