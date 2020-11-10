int Sa = 262, Re = 294, Ga = 330, Ma = 349, Pa = 392, Dha = 440, Ni = 494, Sa2 = 524;

const int buzz = 3;
int t = 800, dt = 800;

void setup()
{
  pinMode(buzz, OUTPUT);
}

void loop() {
  delay(500);
  tone(buzz, Sa, t);
  delay(dt);
  tone(buzz, Re, t);
  delay(dt);
  tone(buzz, Ga, t);
  delay(dt);
  tone(buzz, Ma, t);
  delay(dt);
  tone(buzz, Pa, t);
  delay(dt);
  tone(buzz, Dha, t);
  delay(dt);
  tone(buzz, Ni, t);
  delay(dt);
  tone(buzz, Sa2, t);
  delay(dt);

  tone(buzz, Ni, t);
  delay(dt);
  tone(buzz, Dha, t);
  delay(dt);
  tone(buzz, Pa, t);
  delay(dt);
  tone(buzz, Ma, t);
  delay(dt);
  tone(buzz, Ga, t);
  delay(dt);
  tone(buzz, Re, t);
  delay(dt);
  tone(buzz, Sa, t);
  delay(dt);

  if (t > 50) {
    t -= 150;
    dt -= 150;
  }

  else {
    t = 800;
    dt = 800;
  }

}
