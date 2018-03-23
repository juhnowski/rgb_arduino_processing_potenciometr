const int POT=A0;
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = map(analogRead(POT), 0,1023,0,255);
  Serial.println(val, DEC);
  delay(50);
}
