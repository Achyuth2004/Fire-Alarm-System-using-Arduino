const int buzzerPin = 8;
const int fireSensorPin = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
}
void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  if(fireValue == 0)
  {
    digitalWrite(buzzerPin, HIGH);
    delay(3000);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}
