#include <AFMotor.h>
AF_DCMotor motorLeft(1);
AF_DCMotor motorRight(2);
AF_DCMotor motorHammer(4);
int dl, dr, dc;

///*** แก้โค๊ด ส่วนนี้ ****/////

int de=0 ;
int de2=200;
int spd = 150; 
int spdturn = 170;
int spdUturn = 190;
int turndelay = 350;
int deback =  350;
int invertkickkock=1 ;
////////////////////////////////
void setup() {
  Serial.begin(9600);
  // md(120,120);
  go(de);
  uturn();
  go(de2);
  r();
  
}
void loop() {
  readsensor();
  showd();
}
