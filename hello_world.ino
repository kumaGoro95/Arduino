#include <LiquidCrystal.h>

LiquidCrystal Icd(12,10,2,3,4,5);

void setup() {
  Icd.begin(16,2);
  while(1){
    Icd.home();
    Icd.setCursor(16,0);
    Icd.print("Hello World!");
    for(int i=0; i<27; i++){
      Icd.scrollDisplayLeft();
      delay(350);
      }
  }
}

void loop() {}
