/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 10/04/2025 17h57
* But du programme :
*    Affiche "Hello World !" sur l'écran LCD.
* Entrée : ∅
* Sortie : Affichage sur l'écran LCD connecté à l'ARDUINO UNO.
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Nombre de lignes et de colonnes de l'écran LCD.

  lcd_1.print("Hello world !");
}

void loop()
{
  
}
