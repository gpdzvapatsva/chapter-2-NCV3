int counter=1;
int wait=5000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Counter = ");
  Serial.println(counter);
  counter=counter +1;
  delay(wait);

}
