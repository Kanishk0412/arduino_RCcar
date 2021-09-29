void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	if (Serial.available())
    {
      String val = Serial.readString();
      if (val == "Forward")
      {
		digitalWrite(2,1); // Left Motor
  		digitalWrite(3,0); // Left Motor
        digitalWrite(4,1); // Right Motor
  		digitalWrite(5,0); // Right Motor
      }
       else if (val == "Backward")
      {
		digitalWrite(2,0);
  		digitalWrite(3,1);
        digitalWrite(4,0);
  		digitalWrite(5,1);
      }
       else if (val == "Right")
      {
		digitalWrite(2,1);
  		digitalWrite(3,0);
        digitalWrite(4,0);
  		digitalWrite(5,0);
      }
      else if (val == "Left")
      {
		digitalWrite(2,0);
  		digitalWrite(3,0);
        digitalWrite(4,1);
  		digitalWrite(5,0);
      }
      else if (val == "Stop")
      {
		digitalWrite(2,0);
  		digitalWrite(3,0);
        digitalWrite(4,0);
  		digitalWrite(5,0);
      }
    }
    

}