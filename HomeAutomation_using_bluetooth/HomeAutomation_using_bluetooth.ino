#include<SoftwareSerial.h>
SoftwareSerial BT(10,11); // Connect Tx to pin 10 and Rx to pin 11 of HC-05/HC-06
String readData;         //  String for storing data send from the Bluetooth device


int Relay=2;
int Relay=3;
int Relay=4;
int Relay=5;
int val1=0;
int val2=0;
int val3=0;
int val4=0;



void setup()
{
BT.begin(9600);
Serial.begin(9600);
 pinMode(Relay1,OUTPUT);
 pinMode(Relay2,OUTPUT);
 pinMode(Relay3,OUTPUT);
 pinMode(Relay4,OUTPUT);
 digitalWrite(Relay1,HIGH);
 digitalWrite(Relay2,HIGH);
 digitalWrite(Relay3,HIGH);
 digitalWrite(Relay4,HIGH);
}


VOID LOOP()
{
While (BT.availale())
  {
    delay(10);
    char c=BT.read();
    readData +=c;
}
if(readData.length()>0)
{
  Serial.printIn(readData);
  
  if (readData=="relay1")
  {
    val1=digitalRead(Relay1);
    if(val1==0)
    {
      digitalWrite(Relay1,HIGH);
      val1=1;
    }
    else
    {
      
      digitalWrite(Relay1,LOW);
      val1=0;
    }
    delay(200);
}


  if (readData=="relay2")
  {
    val2=digitalRead(Relay2);
    if(val2==0)
    {
      digitalWrite(Relay2,HIGH);
      val2=1;
    }
    else
    {
      
      digitalWrite(Relay2,LOW);
      val2=0;
    }
    delay(200);
}

  if (readData=="relay3")
  {
    val3=digitalRead(Relay3);
    if(val3==0)
    {
      digitalWrite(Relay3,HIGH);
      val3=1;
    }
    else
    {
      
      digitalWrite(Relay3,LOW);
      val3=0;
    }
    delay(200);
}
  if (readData=="relay4")
  {
    val4=digitalRead(Relay4);
    if(val4==0)
    {
      digitalWrite(Relay4,HIGH);
      val4=1;
    }
    else
    {
      
      digitalWrite(Relay4,LOW);
      val4=0;
    }
    delay(200);
}
   readData="";
}
}
