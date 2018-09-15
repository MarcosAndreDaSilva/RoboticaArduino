void setup() {
  pinMode(5,OUTPUT)
  pinMode(6,OUTPUT)
  pinMode(9,OUTPUT)
  pinMode(10,OUTPUT)
}
void loop() {
  circulo1();
  delay(800);
  Parar();
  delay(1000);
  circulo2();
  delay(800);
  parar();
  delay(1000);
}
void  circulo1(){
  analogWrite(5,80);
  digitalWrite(6,HIGH);
  analogWrite(9,80);
  digitalWrite(10,LOW);
}
void parar(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
void circulo2(){
  analogWrite(5,80);
  digitalWrite(6,LOW);
  analogWrite(9,80);
  digitalWrite(10,HIGH);
  
}

  
