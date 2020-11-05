int E=13;
int D=12;
int C=11;
int DP=10;
int B=9;
int A=8;
int F=7;
int G=6;
void one(){
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(DP,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  }
void two(){
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(DP,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  }

void three(){
  digitalWrite(E,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(DP,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  }

void four(){
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,LOW);
  }
void five(){
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,LOW);
  }    

void six(){
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,LOW);
  }  
    
void seven(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,LOW);
  }  
void eight(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,LOW);
  }  

void nine(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,LOW);
  }  
void zero(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(DP,LOW);
  }      
void setup() {
  // put your setup code here, to run once:
pinMode(E, OUTPUT);
pinMode(G, OUTPUT);
pinMode(D, OUTPUT);
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(F, OUTPUT);
pinMode(DP, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
one();
delay(1000);
two();
delay(1000);
three();
delay(1000);
four();
delay(1000);
five();
delay(1000);
six();
delay(1000);
seven();
delay(1000);
eight();
delay(1000);
nine();
delay(1000);
zero();

delay(1000);
}
