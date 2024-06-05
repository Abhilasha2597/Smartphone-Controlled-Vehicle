char n;
 
void setup() {
pinMode(13,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse
 
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  n= Serial.read();
  Serial.println(n);
}
 
if(n== '1'){            //move forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
 
else if(n == '2'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
}
 
else if(n== '3'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
 
else if(n== '4'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
 
else if(n == '5'){      //STOP (all motors stop)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}

