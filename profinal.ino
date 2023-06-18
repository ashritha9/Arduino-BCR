#include<SoftwareSerial.h>
int m1f=2;
int m1b=3;
int m2f=4;
int m2b=5;
int sw1=6;
int sw2=7;
int sw3=8;
int sw4=9;
int state1=0;
int state2=0;
int state3=0;
int state4=0;
void setup() {
  // put your setup code here, to run once:
pinMode(m1f,OUTPUT);
pinMode(m1b,OUTPUT);
pinMode(m2f,OUTPUT);
pinMode(m2b,OUTPUT);
pinMode(sw1,INPUT_PULLUP);
pinMode(sw2,INPUT_PULLUP);
pinMode(sw3,INPUT_PULLUP);
pinMode(sw4,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  state1=digitalRead(sw1);
  state2=digitalRead(sw2);
  state3=digitalRead(sw3);
  state4=digitalRead(sw4);
  //forward
 if(state1==LOW)
 {
  digitalWrite(m1f,LOW);
  digitalWrite(m1b,HIGH);
  digitalWrite(m2f,LOW);
  digitalWrite(m2b,HIGH);
 }
 //backward
 if(state2==LOW)
 {
  digitalWrite(m1f,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2f,HIGH);
  digitalWrite(m2b,LOW);
 }
 //left
 if(state3==LOW)
 {
  digitalWrite(m1f,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2f,LOW);
  digitalWrite(m2b,HIGH);
 }
 //right
 if(state4==LOW)
 {
  digitalWrite(m1f,LOW);
  digitalWrite(m1b,HIGH);
  digitalWrite(m2f,HIGH);
  digitalWrite(m2b,LOW);
 }
 else
 {
  digitalWrite(m1f,LOW);
  digitalWrite(m1b,LOW);
  digitalWrite(m2f,LOW);
  digitalWrite(m2b,LOW);
 //rest
}}
