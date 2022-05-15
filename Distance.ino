int trig = 2;
int echo = 3;

float duration;
float distance;


void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);  
}


void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(5);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration*0.034/2;
  Serial.print("The Distance Is = ");
  Serial.print(distance);
  Serial.println("Cm.");
  delay(500);
}
