void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(11, map(analogRead(A0), 0, 1023, 0, 255));
}
