#include <GuaraTeca_Demo.h>//incluimos a biblioteca

SensorUltrassonico objct(12, 13);//Declaramos um objeto e definimos em qual pino esta conectado
                      //Tp, Ep
void setup() {
  Serial.begin(9600);//inicia o monitor serial na frequencia de 9600  
}

void loop() {
  Serial.print("Distancia: ");
  Serial.print(objct.leitura());//imprimimos no monitor serial a leitura do sensor
  Serial.println("cm");
}
