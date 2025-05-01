int frontled = 3;
int backled = 13;
int rightled = 2;
int leftled = 4;

int m1 = 9;
int m2 = 8;

int m3 = 11;
int m4 = 10;

//int buzzer = 10;
char a;

void setup() {
  Serial.begin(9600);
  Serial.println("Welcom to Bluetooth System");
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);

  pinMode(frontled, OUTPUT);
  pinMode(backled, OUTPUT);
  pinMode(rightled, OUTPUT);
  pinMode(leftled, OUTPUT);

  //  pinMode(buzzer, OUTPUT);
  //  digitalWrite(buzzer, HIGH);
}
void loop() {
  if (Serial.available() > 0) {
    a = Serial.read();
    if (a == 'F') {
      Forward();
      //      Serial.println("Forward");
      //      delay(1000);
    }
    if (a == 'B') {
      Backward();
      //      Serial.println("Backward");
      //      delay(1000);
    }
    if (a == 'L') {
      Left();
      //      Serial.println("Left");
      //      delay(1000);
    }
    if (a == 'R') {
      Right();
      //      Serial.println("Right");
      //      delay(1000);
    }
    if (a == '0') {
      Stop();
      //      Serial.println("Stop");
      //      delay(1000);
    }
    //////////////////////////////////////////
    if (a == 'd') {
      HEADlightON();
    }
    if (a == 'M') {
      HEADlightOFF();
    }
    if (a == 'r') {
      Rightdeeper();
    }
    if (a == 'l') {
      LEFTdeeper();
    }
    if (a == 'b') {
      BACKlightON();
    }
    if (a == 'o') {
      BACKlightOFF();
      deeperOFF();
      //      digitalWrite(buzzer, HIGH);
    }
    if (a == 't') {
      allon();
    }
    if (a == 'N') {
      alloff();
    }
    if (a == 'f') {
      //      digitalWrite(buzzer, LOW);
    }
  }
}
