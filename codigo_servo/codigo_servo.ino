#include <Servo.h>

int posicao1 = 0;

Servo servoMotor;
void setup() {
  servoMotor.attach(2);

}

void loop() {
  
          servoMotor.write(posicao1);
          Serial.print("aberto");
          delay(5000);
          servoMotor.write(180);
          delay(5000);

         
}




