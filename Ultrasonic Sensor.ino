/*
Ultrasonic Sensor

Code to test the ultrasonic sensors our team is using for object
size detection. 
Origional Code created by Isaac100 
https://projecthub.arduino.cc/Isaac100/getting-started-with-the-hc-sr04-ultrasonic-sensor-7cabe1

modified November 21, 2023
By Lena Pimlott
*/



int Trig = 10;          //Define Uno pin 9 as the Trig pin
int Echo = 11;         //Define Uno pin 10 as the Echo pin

float duration, distance;       //duration and distance defined as floats 

void setup() {
  // put your setup code here, to run once:

  pinMode(Trig, OUTPUT);     //Trig pin is defined as an output  
  pinMode(Echo, INPUT);      //Echo pin is defined as an input 

  Serial.begin(9600);           //Setting the baud rate for serial data transmission 

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);

  duration = pulseIn(Echo, HIGH);
  distance = (duration*0.0343)/2;

  Serial.print("distance: ");
  Serial.println(distance);
  delay(100);

}
