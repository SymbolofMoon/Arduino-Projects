
int RED =10;
int BLUE = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(RED, HIGH);
 delay(800);
 digitalWrite(BLUE, LOW);
 delay(800);
 
 digitalWrite(RED, LOW);
 delay(800);
 digitalWrite(BLUE, HIGH);
 delay(800);
}
