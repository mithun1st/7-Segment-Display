#include <LiquidCrystal.h>

LiquidCrystal lcd(50, 48, 46, 44, 42, 40);

int s = 0;
int const d1 = 10, d2 = 9, d3 = 8;
int const a = 22, b = 23, c = 24, d = 25, e = 26, f = 27, g = 28, dp = 29;

void setup() {

  lcd.begin(16, 2);
  // put your setup code here, to run once:
  pinMode(A7, INPUT);

  Serial.begin(9600);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);


}
////////////////////

void seOn() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  digitalWrite(dp, 1);
}

void seOff() {
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(dp, 0);
}

void seLoadR(int t, int s) {
  for (int i = 0; i < t; i++) {
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
  }
}

void seLoadF(int t, int s) {
  for (int i = 0; i < t; i++) {
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    digitalWrite(dp, 0);
    delay(s);
  }
}


void sePrint(int n) {
  switch (n) {
    case 0:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(dp, 0);
      break;
    case 1:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(dp, 0);
      break;
    case 2:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 3:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 4:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 5:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 6:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 7:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(dp, 0);
      break;
    case 8:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    case 9:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 0);
      break;
    default:
      seOn();
      break;
  }
}

void seCount(int n) {
  String s;
  int a=0,b=0,c=0;
  if(10>n){
    s="00"+(String)n;
  }
  else if(100>n){
    s="0"+(String)n;
  }
  else if(1000>n){
    s=(String)n;
  }
  else{
    seOff();
  }
  switch (s[0]) {
    case '0':
      a=0;
      break;
    case '1':
      a=1;
      break;
    case '2':
      a=2;
      break;
    case '3':
      a=3;
      break;
    case '4':
      a=4;
      break;
    case '5':
      a=5;
      break;
    case '6':
      a=6;
      break;
    case '7':
      a=7;
      break;
    case '8':
      a=8;
      break;
    case '9':
      a=9;
      break;
    default:
      seOn();
      break;
  }
  switch (s[1]) {
    case '0':
      b=0;
      break;
    case '1':
      b=1;
      break;
    case '2':
      b=2;
      break;
    case '3':
      b=3;
      break;
    case '4':
      b=4;
      break;
    case '5':
      b=5;
      break;
    case '6':
      b=6;
      break;
    case '7':
      b=7;
      break;
    case '8':
      b=8;
      break;
    case '9':
      b=9;
      break;
    default:
      seOn();
      break;
  }

  switch (s[2]) {
    case '0':
      c=0;
      break;
    case '1':
      c=1;
      break;
    case '2':
      c=2;
      break;
    case '3':
      c=3;
      break;
    case '4':
      c=4;
      break;
    case '5':
      c=5;
      break;
    case '6':
      c=6;
      break;
    case '7':
      c=7;
      break;
    case '8':
      c=8;
      break;
    case '9':
      c=9;
      break;
    default:
      seOn();
      break;
  }


  Serial.println(s);

  digitalWrite(d1, 0);
  digitalWrite(d2, 1);
  digitalWrite(d3, 1);
  sePrint(a);
  delay(5);
  ///////////
  digitalWrite(d1, 1);
  digitalWrite(d2, 0);
  digitalWrite(d3, 1);
  sePrint(b);
  delay(5);
  ////////////;
  digitalWrite(d1, 1);
  digitalWrite(d2, 1);
  digitalWrite(d3, 0);
  sePrint(c);
  delay(5);

}
/////////////////

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Mahadi Hassan");
    lcd.setCursor(3, 1);
    lcd.print("MITHUN");
  
    for (int i = 9; i >= 0; i--) {
      sePrint(i);
      lcd.setCursor(10, 1);
      lcd.print("Num> "+i);
      delay(200);
    }
    lcd.setCursor(10, 1);
      lcd.print("Loop");
      for (int i = 0; i < 3; i++) {
      seLoadF(2, 100);
      seLoadR(2, 100);
    }
    lcd.noDisplay();
     lcd.setCursor(10, 1);
      lcd.print("Reset/Task         ");
    for (int i = 0; i < 3; i++) {
      seOn();
      delay(200);
      seOff();
      delay(200);
    }
    lcd.display();
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Mahadi Hassan");
    delay(500);
//--------------------------------------
//  s = map(analogRead(A7), 0, 1023, 0, 50);
//  Serial.println(s);


        for(int j=0;j<200;j++){
          seCount(12);
          lcd.setCursor(3, 1);
          lcd.print("double Digit");  
        }
        for(int j=0;j<200;j++){
          seCount(345); 
          lcd.setCursor(3, 1);
          lcd.print("triple Digit"); 
        }
        for(int j=0;j<200;j++){
          seCount(678);
//          lcd.setCursor(3, 1);
//          lcd.print("las Digit");  
        }
        for(int j=0;j<200;j++){
          seCount(9);
          lcd.setCursor(3, 1);
          lcd.print("single Digit");  
        }
  digitalWrite(d1, 0);
  digitalWrite(d2, 0);
  digitalWrite(d3, 0);
    lcd.clear();
    delay(200);
}
