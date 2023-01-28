int x =0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
do{
Serial.println(x);
x=x+1;
delay(1000);
  }
  while (x<=10);
 while (Serial.available()==0){}
}
