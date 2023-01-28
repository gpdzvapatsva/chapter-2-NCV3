//declaring variables
float total_price, vat_amount;
float VAT=15.00/115;
float answer;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// Accepting the inputs
Serial.println("Please enter total price inclusive of VAT: ");
while ( Serial.available()==0){}
total_price=Serial.parseFloat();
//processing

Serial.print("The total price including VAT is ");
Serial.println(total_price);
vat_amount=VAT * total_price;
//Displaying the output
Serial.print("The amount of VAT paid is :R");
Serial.println(vat_amount);

delay(5000);
while ( Serial.available()==0){}
}