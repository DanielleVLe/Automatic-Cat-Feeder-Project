#define FORWARD 0
#define BACKWARDS 1
#define STOP 2

int directionPin = 4; 
int drivePin = 5; 


void setup() {
    pinMode(directionPin,OUTPUT); 
    pinMode(drivePin,OUTPUT);
}

void moveMotor (int direction) {
    if (direction == FORWARD) {
        digitalWrite(directionPin,HIGH);
        digitalWrite(drivePin,HIGH); 
        delay(1000); 
    } 
    else if (direction == STOP) {
        digitalWrite(drivePin,LOW);
        digitalWrite(directionPin,LOW);
        
    } 
    else if (direction == BACKWARDS) {
        digitalWrite(directionPin,LOW);
        digitalWrite(drivePin,HIGH); 
        delay(1000); 
    }
}

void loop() {
    moveMotor(FORWARD);
    delay (5000);
    moveMotor(BACKWARDS);
    delay(5000); 
    moveMotor(STOP);
    delay(5000); 
    
}

 
