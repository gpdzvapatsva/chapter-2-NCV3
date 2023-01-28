//declaring variables
int num1, answer;
int num2 =5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // Capturing the value of num1
Serial.println("Please enter value of num1: ");
while ( Serial.available()==0){}
num1=Serial.parseInt();
Serial.print("The value of num1 is : ");
 Serial.println(num1);
//calculating the remainder (modulus)
Serial.print("The answer of (num1 % num2) is ");
answer = num1 % num2;
// Displaying output

Serial.println(answer);
delay(5000);
//incrementing the dividend
num1++;
}
