//declaring the three variables
int num1;
int num2;
int answer;

String message2=" Num1 is";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Please enter first number: ");
while ( Serial.available()==0){}
num1=Serial.parseInt();
Serial.print("Num1 is ");
Serial.println( num1);
Serial.println("Enter second number ");
while ( Serial.available()==0){}
num2=Serial.parseInt();
Serial.print("Num2 is ");
Serial.println( num2);

answer=num1+num2;
Serial.print("The answer is ");
Serial.println(answer);
delay(5000000);
}
