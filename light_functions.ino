//int frontled = 6;
//int backled = 12;
//int rightled = 11;
//int leftled = 10;

//void setup() {
//  pinMode(frontled, OUTPUT);
//  pinMode(backled, OUTPUT);
//  pinMode(rightled, OUTPUT);
//  pinMode(leftled, OUTPUT);
//}

void allon() {
  digitalWrite(frontled, HIGH);
  digitalWrite(backled, HIGH);
  digitalWrite(rightled, HIGH);
  digitalWrite(leftled, HIGH);
}
void alloff() {
  digitalWrite(frontled, LOW);
  digitalWrite(backled, LOW);
  digitalWrite(rightled, LOW);
  digitalWrite(leftled, LOW);
}
/////////////////////////////////
void allblink() {
    digitalWrite(frontled, HIGH);
    digitalWrite(backled, HIGH);
    digitalWrite(rightled, HIGH);
    digitalWrite(leftled, HIGH);
    delay(500);
    digitalWrite(frontled, LOW);
    digitalWrite(backled, LOW);
    digitalWrite(rightled, LOW);
    digitalWrite(leftled, LOW);
    delay(500);
}
void siren() {
  digitalWrite(rightled, HIGH);
  digitalWrite(leftled, LOW);
  delay(500);
  digitalWrite(rightled, LOW);
  digitalWrite(leftled, HIGH);
  delay(500);
}
void disco() {
  digitalWrite(frontled, HIGH);
  digitalWrite(backled, LOW);
  digitalWrite(rightled, LOW);
  digitalWrite(leftled, LOW);
  delay(500);
  digitalWrite(frontled, LOW);
  digitalWrite(backled, LOW);
  digitalWrite(rightled, HIGH);
  digitalWrite(leftled, LOW);
  delay(500);
  digitalWrite(frontled, LOW);
  digitalWrite(backled, HIGH);
  digitalWrite(rightled, LOW);
  digitalWrite(leftled, LOW);
  delay(500);
  digitalWrite(frontled, LOW);
  digitalWrite(backled, LOW);
  digitalWrite(rightled, LOW);
  digitalWrite(leftled, HIGH);
  delay(500);
}
/////////////////////////////////
void HEADlightON() {
  digitalWrite(frontled, HIGH);
}
void HEADlightOFF() {
  digitalWrite(frontled, LOW);
}
////////////////////////////////
void BACKlightON() {
  digitalWrite(backled, HIGH);
}
void BACKlightOFF() {
  digitalWrite(backled, LOW);
}
////////////////////////////////
void deeperOFF() {
  digitalWrite(rightled, LOW);
  digitalWrite(leftled, LOW);
}
void Rightdeeper() {
  digitalWrite(rightled, HIGH);
}
void LEFTdeeper() {
  digitalWrite(leftled, HIGH);
}
////////////////////////////////
