int leftA = 13;
int leftB = 12;
int leftC = 11;
int leftD = 10;
int leftE = 9;
int leftF = 8;
int leftG = 7;

int rightA = 6;
int rightB = 5;
int rightC = 4;
int rightD = 3;
int rightE = 2;
int rightF = 1;
int rightG = 0;

//leftA,leftB,leftC,leftD,leftE,leftF,leftG
//rightA,rightB,rightC,rightD,rightE,rightF,rightG
void setup() {
  pinMode(leftA, OUTPUT);
  pinMode(leftB, OUTPUT);
  pinMode(leftC, OUTPUT);
  pinMode(leftD, OUTPUT);
  pinMode(leftE, OUTPUT);
  pinMode(leftF, OUTPUT);
  pinMode(leftG, OUTPUT);

  pinMode(rightA, OUTPUT);
  pinMode(rightB, OUTPUT);
  pinMode(rightC, OUTPUT);
  pinMode(rightD, OUTPUT);
  pinMode(rightE, OUTPUT);
  pinMode(rightF, OUTPUT);
  pinMode(rightG, OUTPUT);
}
/***
   00
   01
   02
   03
   04

   59
*/
void loop() {


  for (int i = 0; i < 6; i++) {

    if (i == 0) {
      printZero(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    } else if (i == 1) {
      printOne(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    } else if (i == 2) {
      printTwo(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    } else if (i == 3) {
      printThree(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    } else if (i == 4) {
      printFour(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    } else if (i == 5) {
      printFive(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    }

    for (int j = 0; j < 10; j++) {
      if (j == 0) {
        printZero(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 1) {
        printOne(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 2) {
        printTwo(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 3) {
        printThree(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 4) {
        printFour(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 5) {
        printFive(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 6) {
        printSix(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 7) {
        printSeven(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 8) {
        printEight(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      } else if (j == 9) {
        printNine(rightA, rightB, rightC, rightD, rightE, rightF, rightG);
      }
      delay(1000);
    }
  }



  /***
    //0
    printZero(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //1
    printOne(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //2
    printTwo(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //3
    printThree(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //4
    printFour(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //5
    printFive(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //6
    printSix(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //7
    printSeven(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //8
    printEight(leftA, leftB, leftC, leftD, leftE, leftF, leftG);
    delay(500);
    //9
    printNine(rightA, rightB, rightC, rightD, rightE, rightF, rightG) ;
    delay(500);
  */
}

void printZero(int a, int b, int c, int d, int e, int f, int g) {
  //0
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void printOne(int a, int b, int c, int d, int e, int f, int g) {
  //1
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void printTwo(int a, int b, int c, int d, int e, int f, int g) {
  //2
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(500);
}
void printThree(int a, int b, int c, int d, int e, int f, int g) {
  //3
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void printFour(int a, int b, int c, int d, int e, int f, int g) {
  //4
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void printFive(int a, int b, int c, int d, int e, int f, int g) {
  //5
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void printSix(int a, int b, int c, int d, int e, int f, int g) {
  //6
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void printSeven(int a, int b, int c, int d, int e, int f, int g) {
  //7
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void printEight(int a, int b, int c, int d, int e, int f, int g) {
  //8
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void printNine(int a, int b, int c, int d, int e, int f, int g) {
  //9
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
