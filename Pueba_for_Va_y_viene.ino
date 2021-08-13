
int tiempo= 500;
int ini=8;
int fin=11;
int N=ini;
int x=1;

void setup() {
  // put your setup code here, to run once:
DDRD=B11111100; //0A2
DDRB=B00111111; //8A13
Serial.begin(9600); //vel del port serail
}

void loop() {
for(N=ini;N<fin+1;N=N+x){
Serial.println(N);
digitalWrite(N,HIGH);
tiempo=analogRead(0);
tiempo=tiempo;
delay(tiempo);
digitalWrite(N,LOW);
}
for(N=fin;N>ini+1;N=N-x){
Serial.println(N);
digitalWrite(N,HIGH);
tiempo=analogRead(0);
tiempo=tiempo;
delay(tiempo);
digitalWrite(N,LOW);
}

}
