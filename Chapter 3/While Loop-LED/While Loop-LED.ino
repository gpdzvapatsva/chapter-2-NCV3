int timer = 300;  // The higher the number, the slower the timing.
int output_pin=6;
void setup() {
  // use a for loop to initialize each pin as an output:
  while (output_pin>1)
    {pinMode(output_pin, OUTPUT);
  output_pin--;
  }
}
void loop() {
// loop from the low (pin2) to high (pin6)
 while ( output_pin < 7) {
  // turn the pin on:
    digitalWrite(output_pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(output_pin, LOW);
    output_pin++;
  }
  // iterate from high (pin6) to low (pin2)
 while ( output_pin >= 2) {
    // turn the pin on:
    digitalWrite(output_pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(output_pin, LOW);
    output_pin--;
  }
}