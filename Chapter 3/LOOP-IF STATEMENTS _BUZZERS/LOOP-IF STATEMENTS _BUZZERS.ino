//declare the variables
int  i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //set the digital pin 8 to OUTPUT
 }
void loop() {
     //for loop to print integers from 1 to 10
  for(i=0; i<10; i++) {
    //if the value of i is 3, the loop must stop
    if(i == 3){
    Serial.println("I have encountered a block!! I am going to buzz");
    //Turn the buzzer on
       delay(2000);
    
    delay(2000);
   // turn the buzzer off
       continue;
    }
    Serial.print("The value of i is "); 
    Serial.println(i); 
}
Serial.println("End of the program");
//stopping the program from execution
while (Serial.available()==0){}
}