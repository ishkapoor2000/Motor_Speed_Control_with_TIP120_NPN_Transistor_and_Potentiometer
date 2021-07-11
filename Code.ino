int outPin = 9;
int potIn = A0; // Input pin of Potentiometer
int speedVal; // Hold speed value of motor

void setup()
{
    pinMode(outPin, OUTPUT);
}

void loop()
{
  	// Read analog input from Potentiometer
    speedVal = analogRead(potIn);

  	// Map value ot range of [0-255)
    speedVal = map(speedVal, 0, 1023 ,0, 255);

  	// Write PWM to transistor
    analogWrite(outPin, speedVal);
    delay(0);
}
