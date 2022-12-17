int flexpin = A0;
int flexval;
void setup(){
  Serial.begin(9600);
}

void loop(){
  flexval = analogRead(flexpin);
  Serial.print("Sensor : ");
  Serial.println(flexval);
  delay(500);
}
