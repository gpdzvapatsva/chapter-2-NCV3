//declaring variables
int a=3;
int b= 6;
void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
//processing
if (a>b){
Serial.print(a);
Serial.print("  is greater than : ");
Serial.print( b);
}
else{
  Serial.print(b);
Serial.print("  is greater than : ");
Serial.print( a);

}
delay(5000);
while ( Serial.available()==0){}
}
