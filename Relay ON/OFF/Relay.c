// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  Serial.begin(9600);
  digitalWrite(11, 1);
  Serial.println("Relay ON");
  delay(1000);
  digitalWrite(11,0);
  Serial.println("Relay OFF");
  delay(1000);
}
