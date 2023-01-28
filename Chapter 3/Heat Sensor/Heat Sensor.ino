const int temp_read = 0 ; //naming pin 0 of analog input side as adc
const int high = 8 ; // For turning on and off yellow LED connected to pin 8
const int low = 9; // For turning on and off Green LED connected to pin 9
void setup()
{
Serial.begin(9600) ; //Starting serial Communication at baud rate of 9600
pinMode(high,OUTPUT); //declaring LED pins as OUTPUT
pinMode(low,OUTPUT);
}
void loop()
{
int temp_read = analogRead(0) ; //reading analog voltage 
temp_read = temp_read * 0.48828125; //converting temperature read into Celsius
//Displaying current temperature
Serial.print("Current temperature = "); 
Serial.print(temp_read);
Serial.print("*C"); 
Serial.println(); 
//Set delay to 1 sec 
delay(1000); 
/*
LOGIC:
if (temperature (adc) > 30 ° C )
turn on Yellow Leds
turn off Green Leds
else
turn off Yellow Leds
turn on Green Led
*/
//check if temp read is greater than 30
if(temp_read>30) 
{
//if greater than 30 turn the red light
digitalWrite(high,HIGH) ;
digitalWrite(low,LOW) ;
}
else
{
  //if less than 30 turn the green light
digitalWrite(high,LOW) ;
digitalWrite(low,HIGH) ;
}
}