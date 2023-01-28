void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH); //Turning the LED ON
delay(3000); //Delaying by 3 seconds
digitalWrite(13, LOW); //Turning the LED OFF
delay(3000); //Delaying by 3 seconds

}
