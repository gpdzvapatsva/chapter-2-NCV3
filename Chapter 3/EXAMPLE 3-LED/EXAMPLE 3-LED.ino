#define LED1 12
//Code to blink an external LED connected on the breadboard
void setup()
{
  pinMode(LED1, OUTPUT); // Initialising pin 12 as our output
  
}
void loop() {
  digitalWrite(LED1, HIGH); //turning on the LED 
  delay(1000);  //delaying the output in HIGH state
  digitalWrite(LED1, LOW); //Turning off the LED
   delay(1000); // Delaying the state of LED in OFF state
}