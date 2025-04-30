//m1 L-,7,M1,D1
//m2 L+,2,M1,D0

//m3 R-,10,M2,D3
//m4 R+,15,M2,D2

//int m1 = 1; 
//int m2 = 2; 
//int m3 = 3; 
//int m4 = 4; 

//void setup() {
//  pinMode(m1, OUTPUT);
//  pinMode(m2, OUTPUT);
//  pinMode(m3, OUTPUT);
//  pinMode(m4, OUTPUT);
//}

void Forward() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  //Serial.println("Forward");
}
void Backward() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  //Serial.println("Backward");
}
void Left() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  //Serial.println("Right");
}
void Right() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  //Serial.println("Left");
}
void Stop() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
  Serial.println("Stop");
}
