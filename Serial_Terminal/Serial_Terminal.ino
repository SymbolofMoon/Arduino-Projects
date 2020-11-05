int red = 11;
int blue=12;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  Serial.println("Red Light is ON");
  delay(1000);
  digitalWrite(red, LOW);
  Serial.println("Red Light is OFF");
  delay(1000);
  digitalWrite(blue, HIGH);
  Serial.println("Blue Light is ON");
  delay(1000);
  digitalWrite(blue, LOW);
  Serial.println("Blue Light is OFF");
  delay(1000);

}
