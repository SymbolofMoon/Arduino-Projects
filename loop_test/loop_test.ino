int red= 11;
int blue=12;
int green=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

for(int i=0;i<10;i++){
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(500);
  
  }
  for(int i=0;i<10;i++){
digitalWrite(red, HIGH);
delay(500);
digitalWrite(blue,HIGH);
delay(500);
digitalWrite(green,HIGH);
delay(500);
digitalWrite(red,LOW);
delay(500);
digitalWrite(blue,LOW);
delay(500);
digitalWrite(green,LOW);
delay(500);
  }
  
}
