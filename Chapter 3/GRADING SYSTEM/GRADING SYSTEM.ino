
float mark;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // Accepting the inputs
Serial.println("Please enter average exam mark : ");
while ( Serial.available()==0){}
mark=Serial.parseInt();
Serial.println("The mark you entered is : ");
Serial.println(mark);
//Evaluating the conditions
 if(isalpha(mark)==0){
Serial.println("The character is an alphabet\n");
 }
   else if (mark >= 90 && mark <=100)
 
{
  Serial.print("You got an A+ Grade");
}
else if (mark > 80 && mark <90){
  Serial.print("You got an A Grade");
}
else if (mark >=70 && mark <80){
Serial.print("You got an B+ Grade");
}
else if (mark >=60 && mark <70){
Serial.print("You got an B Grade");
}

else if (mark >=50 && mark<60 ){
Serial.print("You got an C Grade");
}
else if (mark >=40 && mark<50){
Serial.print("You got an D Grade");
}
else if (mark >=30 && mark <40){
Serial.print("You got an E Grade");
}
else if (mark >=0 && mark <30){
  Serial.print("You got an F Grade");
}
else if (mark <0 && mark >100){
  Serial.println("Mark out of range. Please enter a mark between 0 and 100");
}
else{
  Serial.print("Incorrect entry");
}

delay(5000000);
while ( Serial.available()==0){}
}


