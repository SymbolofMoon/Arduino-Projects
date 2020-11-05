int LED =7;
int ButtonPIN=10;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(ButtonPIN, INPUT);
}

void loop() {
  // short end  is connected to grnd and high to resistor
 if(digitalRead(ButtonPIN)== 0){
 digitalWrite(LED, LOW);
 }
 else{
 digitalWrite(LED, HIGH);
 }
 

}
