//declaring variables
int a=5;
int b= 6;
int c= 1;
float x1, x2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
//processing
x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
x2=(-b-sqrt((b*b)-4*a*c))/(2*a);
//Displaying the output
Serial.print("The value of x1 is  :");
Serial.println(x1);
Serial.print("The value of x2 is  :");
Serial.println(x2);
delay(5000);
while ( Serial.available()==0){}
}
