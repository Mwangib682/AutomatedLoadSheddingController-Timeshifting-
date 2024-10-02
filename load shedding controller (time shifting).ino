// Include the necessary libraries:
#include <Wire.h>                 // Library for I2C communication
#include <LiquidCrystal_I2C.h>    // Library for I2C LCD

// Initialize the LCD with the I2C address (usually 0x27 or 0x3F) and dimensions (20x4)
LiquidCrystal_I2C lcd(0x27, 20, 4); // Adjust the I2C address if necessary

// Define pin numbers for the LEDs
const int L1 = 7;
const int L2 = 6;
const int L3 = 5;
const int L4 = 4;

void setup() {
  pinMode(L1, OUTPUT); // Set the Pin as an Output
  pinMode(L2, OUTPUT); // Set the Pin as an Output
  pinMode(L3, OUTPUT); // Set the Pin as an Output
  pinMode(L4, OUTPUT); // Set the Pin as an Output

  // Initialize the LCD
  lcd.init(); // Initialize the LCD with the dimensions specified
  lcd.backlight(); // Turn on the backlight (if available on your LCD)
}

void loop() {
  lcd.begin(20, 4); // Initialize the LCD with 20 columns and 4 rows
  // Prints the message on the LCD
  lcd.setCursor(0, 0);
  lcd.print("    LOAD SHEDDING");
  lcd.setCursor(0, 1);
  lcd.print("     CONTROLLER   ");

  // ***************** 1111 ************************
  // L1: ON,  L2: ON,  L3: ON,  L4: ON
  digitalWrite(L1, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  // ***************** 1110 ************************
  // L1: ON,  L2: ON,  L3: ON,  L4: OFF
  digitalWrite(L1, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

  // ***************** 1100 ************************
  // L1: ON,  L2: OFF,  L3: OFF,  L4: OFF
  digitalWrite(L1, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

  // ***************** 1000 ************************
  // L1: ON,  L2: OFF,  L3: OFF,  L4: OFF
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

  // ***************** 1111 ************************
  // L1: ON,  L2: ON,  L3: ON,  L4: ON
  digitalWrite(L1, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  // ***************** 0111 ************************
  // L1: LOW,  L2: ON,  L3: ON,  L4: ON
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  // ***************** 0011 ************************
  // L1: OFF,  L2: OFF,  L3: ON,  L4: ON
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  // ***************** 0001 ************************
  // L1: OFF,  L2: OFF,  L3: OFF,  L4: ON
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  // ***************** 1101 ************************
  // L1: ON,  L2: ON,  L3: OFF,  L4: ON
  digitalWrite(L1, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, LOW);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  

  // ***************** 1011 ************************
  // L1: ON,  L2: OFF,  L3: ON,  L4: ON
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

  

  // ***************** 1010 ************************
  // L1: ON,  L2: LOW,  L3: ON,  L4: OFF
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

  // ***************** 1001 ************************
  // L1: ON,  L2: OFF,  L3: OFF,  L4: ON
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: ON      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

       // ***************** 0110 ************************
  // L1: ON,  L2: ON,  L3: ON,  L4: ON
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

   //***************** 0101 ************************
  // L1: OFF,  L2: ON,  L3: OFF,  L4: ON
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, LOW);
  digitalWrite(L4, HIGH);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: ON      ");
  delay(40000);

   // ***************** 0100 ************************
  // L1:  LOW,  L2: ON,  L3: ON,  L4: ON
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: ON      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: OFF      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

      // ***************** 0010 ************************
  // L1: LOW,  L2: LOW,  L3: ON,  L4: LOW
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, LOW);
  lcd.setCursor(2, 2);
  lcd.print("L1: OFF      ");
  lcd.setCursor(11, 2);
  lcd.print("L2: OFF      ");
  lcd.setCursor(2, 3);
  lcd.print("L3: ON      ");
  lcd.setCursor(11, 3);
  lcd.print("L4: OFF      ");
  delay(40000);

  }
