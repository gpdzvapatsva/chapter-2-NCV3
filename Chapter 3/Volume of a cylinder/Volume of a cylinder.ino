//declaring variables
float radius, height, volume_of_cylinder;
const float pi= 3.14;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // Accepting the inputs
Serial.println("Please enter radius of the cylinder: ");
while ( Serial.available()==0){}
radius=Serial.parseInt();
Serial.print("The radius is ");
Serial.println( radius);
Serial.println("Please enter height of the cylinder: ");
while ( Serial.available()==0){}
height=Serial.parseInt();
Serial.print("The height of the cylinder is ");
Serial.println( height);
//processing
volume_of_cylinder=pi* radius* radius * height;
//Displaying the output
Serial.print("The volume of the cylinder is :");
Serial.print( volume_of_cylinder);
Serial.print("cm3");
delay(5000000);

}
