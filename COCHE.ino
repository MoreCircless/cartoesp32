#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configura la dirección I2C y el tamaño del LCD
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight(); 
  const char* line2 = "Citroen Xsara";
  const char* line3 = "2.0 HDI";
  const char* line4 = "By Morcircles";
  const char* version = "v1.0";

  printCentered(line2, 1);
  printCentered(line3, 2);
  delay(3000);
  lcd.clear();
  printCentered(line4, 1);
  delay(1500);
  printCentered(version, 2);
  delay(1500);
  lcd.clear();
}

void loop() {

}

void printCentered(const char* message, int row) {
  int len = strlen(message);
  int pos = (20 - len) / 2;  
  lcd.setCursor(pos, row);
  lcd.print(message);        
}
