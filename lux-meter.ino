#include <BH1750.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD at I2C address 0x27, 16 chars x 2 lines
BH1750 lightMeter;

void setup() {
  Wire.begin();
  lightMeter.begin();

  lcd.init();          // Correct way to initialize the LCD
  lcd.backlight();     // Turn on backlight
  lcd.setCursor(0, 0);
  lcd.print("   LUX METER    ");
}

void loop() {
  float lux = lightMeter.readLightLevel();

  lcd.setCursor(0, 1);     // Set cursor to beginning of second line
  lcd.print("Light: ");    
  lcd.print(lux);          
  lcd.print(" lux     ");   // Extra spaces to overwrite previous text

  delay(500);
}

