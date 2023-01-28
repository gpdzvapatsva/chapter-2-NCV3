float pi=3.142;
float radius=7;
float area;
long wait=5000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:
  area=pi  * radius*radius;

  Serial.print("A circle with a radius of: ");
  Serial.print(radius );
  Serial.print(" has an area of ");
  Serial.print(area);
  Serial.println("cm2");
  delay(wait);
  radius=radius +.5;

}
