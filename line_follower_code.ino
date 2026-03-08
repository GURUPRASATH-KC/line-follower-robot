// Motor control pins
int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;
int ENA = 9;
int ENB = 10;

// IR sensors
int LSP = A1;
int RSP = A0;

void setup() {

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(LSP, INPUT);
  pinMode(RSP, INPUT);

  analogWrite(ENA, 200);
  analogWrite(ENB, 200);
}

void loop() {

  int LSD = digitalRead(LSP);
  int RSD = digitalRead(RSP);

  if (LSD == 0 && RSD == 0) {
    moveForward();
  }

  else if (LSD == 1 && RSD == 0) {
    turnLeft();
  }

  else if (LSD == 0 && RSD == 1) {
    turnRight();
  }

  else if (LSD == 1 && RSD == 1) {
    stopMotors();
  }
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnLeft() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
