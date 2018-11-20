int in_1 = 3;
int in_2 = 4;

void setup()
{
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
}

void motor (int direction) {
  if (direction == 1) {
    digitalWrite(in_1, HIGH);
    digitalWrite(in_2, LOW);
  }
  else {
    digitalWrite(in_1, LOW);
    digitalWrite(in_2, HIGH);
  }
}

void loop() {
  motor (1);
  delay(3000);
  motor (2);
  delay(3000); 
}

