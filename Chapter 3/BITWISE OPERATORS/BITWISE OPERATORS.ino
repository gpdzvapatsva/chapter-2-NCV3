 int number1;
 int number2;
 int result;
void setup ( )  
{  
 Serial.begin(9600);
  Serial.print("Enter first number");
 while (!Serial.available());
 number1=Serial.parseInt();
 Serial.println(number1);
 Serial.setTimeout(10000);
Serial.print("Enter second number");
 while (!Serial.available());
 number2=Serial.parseInt();
 Serial.println(number2);
result=number1 + number2;
Serial.print("Sum is " + result);
 }   
void loop ( )      
{  
 
  
}  