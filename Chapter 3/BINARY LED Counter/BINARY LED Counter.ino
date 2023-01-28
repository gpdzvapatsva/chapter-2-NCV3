//declaring the variables for the four pins
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;

void setup() {
  // setting up all the pins to OUTPUT mode
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);

}

void loop() {
  //LED Binary Counter code
    //0000
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(5000);
    //0001
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(5000);
  //0010
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(5000);
    //0011
 digitalWrite(pin2, LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(5000);
  //0100
   digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(5000);
  //0101
   digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(5000);
  //0110
   digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(5000);
  //0111
   digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  //1000
   digitalWrite(pin2, HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(5000);
  //1001
    digitalWrite(pin2, HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(5000);
  //1010
   digitalWrite(pin2, HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(5000);
  //1011
   digitalWrite(pin2, HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(5000);
  //1100
   digitalWrite(pin2, HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(5000);
  //1101
   digitalWrite(pin2, HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(5000);
//1110
 digitalWrite(pin2, HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
delay(5000);
//1111 
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(5000);

}
