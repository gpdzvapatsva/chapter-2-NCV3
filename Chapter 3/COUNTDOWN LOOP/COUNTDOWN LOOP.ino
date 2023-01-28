// declaring the loop variable
int x;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  //setting up the starting condition
 for (x=100; x>10; x-=3){
   if (x%3=0){
   Serial.println(x);
   delay(2000);
   }
 }
 while (Serial.available()==0){}
}
