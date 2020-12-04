 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  char data= Serial.read();
  switch(data){
    case 'A': digitalWrite(11,HIGH); break;
    case 'C': digitalWrite(11, LOW); break;
    default : break;
    }
    Serial.println(data);
  }
  delay(50);
  
}
