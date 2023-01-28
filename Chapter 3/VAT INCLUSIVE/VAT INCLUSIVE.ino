//declaring variables
int a=5;
int b= 6;
int c= 1;
int x1, x2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
//processing
x1= −b + √b²-4ac/2a
x2=−b- √b²-4ac/2a

//Displaying the output
Serial.print("The value of x1 is  :");
Serial.println(x1);
Serial.print("The value of x2 is  :");
Serial.println(x2);
delay(5000);
while ( Serial.available()==0){}
}
