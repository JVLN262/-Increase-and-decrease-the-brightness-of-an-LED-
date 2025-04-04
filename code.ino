int read;
int Potentio = A0;
int REDLED = 6;

void setup() {
}

void loop () {
     read = analogRead(Potentio);
     read = map(read, 0, 1023,0,255);
     analogWrite (REDLED,read/4);
}
