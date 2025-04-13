/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 11/04/2025 10h53
* But du programme :
*    Affiche un petit texte qui défile sur l'écran LCD.
* Entrée : ∅
* Sortie : Affichage sur l'écran LCD connecté à l'ARDUINO UNO.
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
int racconter = 1;
int led_rouge = 8;
int led_jaune = 9;
int led_verte = 10;

void setup()
{
  pinMode(led_rouge, OUTPUT);
  pinMode(led_jaune, OUTPUT);
  pinMode(led_verte, OUTPUT);
  lcd_1.begin(16, 2); // Nombre de lignes et de colonnes de l'écran LCD.
}

void loop()
{
  if (racconter == 1) {
     // Début du conte
    lcd_1.print("Je vais   vous  ");
    lcd_1.setCursor(0, 1);
    lcd_1.print("     conter     ");
    delay(1000);
    lcd_1.setCursor(0, 0);
    lcd_1.print("     conter     ");
    lcd_1.setCursor(0, 1);
    lcd_1.print("l'histoire  des ");
    delay(1000);
    lcd_1.setCursor(0, 0);
    lcd_1.print("l'histoire  des ");
    lcd_1.setCursor(0, 1);
    lcd_1.print("trois    petits ");
    delay(1000);
    lcd_1.setCursor(0, 0);
    lcd_1.print("trois    petits ");
    lcd_1.setCursor(0, 1);
    lcd_1.print("    cochons !   ");
    delay(5000);  // Attendre 5s
  
  racconter = 0;
  } else {
    	lcd_1.noDisplay();  // L'écran s'éteint.
    	
    	// Boucle des lampes
    	digitalWrite(led_verte, LOW);
    	digitalWrite(led_rouge, HIGH);
    	delay(1000);
  		digitalWrite(led_rouge, LOW);
    	digitalWrite(led_jaune, HIGH);
    	delay(1000);
    	digitalWrite(led_jaune, LOW);
    	digitalWrite(led_verte, HIGH);
    	delay(1000);
  }
  
}
