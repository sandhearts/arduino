#include <Servo.h>

int posicao1 = 0;

Servo servoMotor;
void setup() {
  servoMotor.attach(2);

}

void loop() {
  servoMotor.write(posicao1);
delay(1000);
servoMotor.write(360);
delay(1000);
}




