int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int rr = 1500;
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  //0
  // a , b, c , d , e, f, g
  printDigit(1, 1, 1, 1, 1, 1, 0);
  delay(rr);
  //1
  printDigit(0, 1, 1, 0, 0, 0, 0);
  delay(rr);
  
printDigit(1, 1, 0, 1, 1, 0, 1);
  delay(rr);
  printDigit(1, 1, 1, 1, 0, 0, 1);
  delay(rr);
 printDigit(0, 1, 1, 0, 0, 1, 1);
  delay(rr);
   printDigit(1, 0, 1, 1, 0, 1, 1);
  delay(rr);
   printDigit(1, 0, 1, 1, 1, 1, 1);
  delay(rr);
   printDigit(1, 1, 1, 0, 0, 0, 0);
  delay(rr);
   printDigit(1, 1, 1, 1, 1, 1, 1);
  delay(rr);
   printDigit(1, 1, 1, 1, 0, 1, 1);
  delay(rr);
  /***
   MMMMMM AJKE AMAR MON VALO NA* 1
    
   ;
    

  */
}

void printDigit(int aa, int bb, int cc, int dd, int ee, int ff, int gg) {
  if (aa == 1) {
    digitalWrite(a, HIGH);
  } else {
    digitalWrite(a, LOW);
  }

  if (bb == 1) {
    digitalWrite(b, HIGH);
  } else {
    digitalWrite(b, LOW);
  }

  if (cc == 1) {
    digitalWrite(c, HIGH);
  } else {
    digitalWrite(c, LOW);
  }

  if (dd == 1) {
    digitalWrite(d, HIGH);
  } else {
    digitalWrite(d, LOW);
  }

  if (ee == 1) {
    digitalWrite(e, HIGH);
  } else {
    digitalWrite(e, LOW);
  }

  if (ff == 1) {
    digitalWrite(f, HIGH);
  } else {
    digitalWrite(f, LOW);
  }

  if (gg == 1) {
    digitalWrite(g, HIGH);
  } else {
    digitalWrite(g, LOW);
  }
}
