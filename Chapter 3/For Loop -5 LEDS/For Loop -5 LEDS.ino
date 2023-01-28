int timer = 100;  // The higher the number, the slower the timing.
void setup() {
  // use a for loop to initialize each pin as an output:
  for (int output_pin = 2; output_pin < 7; output_pin++) {
    pinMode(output_pin, OUTPUT);
  }
}
void loop() {
// loop from the low (pin2) to high (pin6)
  for (int output_pin = 2; output_pin < 7; output_pin++) {
  // turn the pin on:
    digitalWrite(output_pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(output_pin, LOW);
  }
  // iterate from high (pin6) to low (pin2)
  for (int output_pin = 6; output_pin >= 2; output_pin--) {
    // turn the pin on:
    digitalWrite(output_pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(output_pin, LOW);
  }
}