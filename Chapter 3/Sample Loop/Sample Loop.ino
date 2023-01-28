// declaring the loop variable
int x;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  //setting up the condition staring value and end value
for (x=30; x>10; x--){
  //setting the condition
if (x%3==0){
Serial.println( x);
delay(1000);
}
else{}
 }
 while (Serial.available()==0){}
}
