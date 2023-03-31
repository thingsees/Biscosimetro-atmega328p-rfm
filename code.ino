  #include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,13,4,3,5);
void setup() {
  // put your setup code here, to run once:
  // el pin 2 se utiliza para el sensor magnetico
   lcd.begin(16,2);
   lcd.print("HEINZ");
}

void loop() {
  // put your main code here, to run repeatedly:
   lcd.setCursor(0,1);
   lcd.print(millis()/1000);
}
