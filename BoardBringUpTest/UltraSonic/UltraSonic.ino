int UltraSonicPin = A0;    // select the input pin for the potentiometer
int SonicValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
}

void loop() { 
  SonicValue = analogRead(UltraSonicPin);
  Serial.println(SonicValue,DEC);
  
}
