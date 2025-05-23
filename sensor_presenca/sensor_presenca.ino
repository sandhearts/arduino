  byte SensorPin = 3;
  byte indicator = 11;
  int LedPin = 8;

  void setup()
  {
  pinMode(sensorPin,INPUT);
  pinMode(indicator,OUTPUT);
  Serial.begin(9600);
  pinMode(led_Pin,OUTPUT);
  }

  void loop()
  {
  bytestatus = digitalRed(sensorPin);
  digitalWrite(indicator,state);



  if(status == 1){

    digitalWritel(led_Pin,HIGH);
  }

  else if(status == 0){

    digitalWrite(ledPin,LOW);
  }

  delay(500);
}
