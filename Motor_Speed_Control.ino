int in_1 = 3;
int in_2 = 4;

void setup() {
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
}

void motor (int direction) {
  if (if direction ==1) {
    digitalWrite(in_1, HIGH);
    digitalWrite(in_2, LOW);
  }
  else {
    digitalWrite(in_1, LOW);
    digitalWrite(in_2, HIGH);
  }
}

void motor_speed(int speed_value) {
  analogWrite(3, speed_value);
  digitalWrite(4, direction);
  
  
}

void loop() {
  motor (1);
  delay(3000);
}
