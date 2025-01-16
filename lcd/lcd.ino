#include <LiquidCrystal.h>
int rs=12,e=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);


}

void loop() {
    lcd.setCursor(15,1);
lcd.print(1);
lcd.autoscroll();
delay(100);

//lcd.noAutoscroll();


  // put your main code here, to run repeatedly:

}
