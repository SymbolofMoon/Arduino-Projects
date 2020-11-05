int light;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
light = analogRead(A0);
if(light<100){
 digitalWrite(13,HIGH);
  } else{
    digitalWrite(13,LOW);
    }

Serial.println(light);
delay(100);
}
