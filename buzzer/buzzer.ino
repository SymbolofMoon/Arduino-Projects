int buzz=11;

void setup() {
  // put your setup code here, to run once:
 // 2 pins are there in which longer one is positive and connect datapin and another shorter ones connect to ground 
}

void loop() {
  // put your main code here, to run repeatedly:
int i=0;
do{
  i++;
  tone(buzz, 350);
  delay(200);
  noTone(buzz);
  delay(200);
  
  } while(i<2);

  delay(5000);
}
