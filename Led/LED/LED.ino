

int gelenVeri;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() )
gelenVeri=Serial.read();


  if (gelenVeri=='a'){
  
  digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  } 
  else 
{
  digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
 


}
  
  if (gelenVeri=='b') {

  digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  }
 else 
{
  digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
     if (gelenVeri=='c'){
  digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  
 } 
 else 
{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
if (gelenVeri=='d'){

 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  
  }
  else 
{
   digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
  if (gelenVeri=='e'){
  digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  }
 else 
{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}

  if(gelenVeri=='f') {
  digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
    

  }
  else 
{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
   if(gelenVeri=='g') {
  
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
    

  }
  else 
{
   digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
   if(gelenVeri=='h') {
  
  digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
    

  }
  else 
{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
   if(gelenVeri=='i') {
  
  digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
    

  }
  else 
{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
}
  }
