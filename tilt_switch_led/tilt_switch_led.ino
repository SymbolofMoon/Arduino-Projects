void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(8, INPUT);
Serial.begin(9600);
digitalWrite(8,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(8)==HIGH){
    digitalWrite(13,HIGH);
    Serial.println(digitalRead(8));
    }
  else{
    digitalWrite(13,LOW);
    Serial.println(digitalRead(8));
    }  
 
}
