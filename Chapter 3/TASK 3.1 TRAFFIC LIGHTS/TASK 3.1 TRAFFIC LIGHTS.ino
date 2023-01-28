#define LED_PIN_R 12 // Pin for the Red LED
#define LED_PIN_O 11 //Pin for the Amber LED
#define LED_PIN_G 10 //Pin for the Green LED
//Code to blink an external LED connected on the breadboard
void setup()
{
  //Intialising the 3 pins for OUTPUT mode
 pinMode(LED_PIN_R, OUTPUT);
  pinMode(LED_PIN_O, OUTPUT);
  pinMode(LED_PIN_G, OUTPUT);
  
}
void loop() {
  //Turn RED LED ON and SET Amber and Green to OFF
  digitalWrite(LED_PIN_R, HIGH); 
  digitalWrite(LED_PIN_O, LOW);
  digitalWrite(LED_PIN_G, LOW);
  // Delay for 3 seconds
  delay(3000);
   //Turn Amber LED OF and SET RED and Green to OFF
  digitalWrite(LED_PIN_R, LOW);
  digitalWrite(LED_PIN_O, HIGH);
  digitalWrite(LED_PIN_G, LOW);
  // Delay for 1.5 seconds while Amber is ON
  delay(1500);
   //Turn RED and Amber OFF and set Green to ON 
  digitalWrite(LED_PIN_R, LOW);
  digitalWrite(LED_PIN_O, LOW);
  digitalWrite(LED_PIN_G, HIGH);
   // Delay for 3 seconds while Green LED is ON
  delay(3000);
}

