int length=0;
int width=0;
float area;
long wait=5000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  }
void loop() {

Serial.println("A rectangle with a length of  ");
Serial.println("Please enter the length of the rectangle: ");
while ( Serial.available()==0){}
length=Serial.parseInt();
Serial.println(length );
Serial.println("Please enter the width of the rectangle: ");
while ( Serial.available()==0){}
width=Serial.parseInt();
Serial.println(width );
area=length * width;
  Serial.print("A rectangle with a length of  ");
  Serial.print(length );
  Serial.print(" and width of " );
  Serial.print(width );
  Serial.print(" has an area of ");
  Serial.print(area);
  Serial.println("cm2");

delay(5000);
while ( Serial.available()==0){}
}

