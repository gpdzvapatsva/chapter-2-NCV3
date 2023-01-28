//declaring variablesint length=8;
int width=5;
float area;
long wait=5000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  }

void loop() {
  // Performing the calculation
  area=length * width;
  //Printing the output
  Serial.print("A rectangle with a length of  ");
  Serial.print(length );
  Serial.print(" and width of " );
  Serial.print(width );
  Serial.print(" has an area of ");
  Serial.print(area);
  Serial.println("cm2");
  delay(wait);
 

}
