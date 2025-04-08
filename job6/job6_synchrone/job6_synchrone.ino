/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 08/04/2025 15h19
* But du programme :
*    Faire clignoter deux LED de manière asynchrone toute les secondes.
* Entrée : ∅
* Sortie : Le LED clignotent de manière asynchrone sur le circuit connecté à l'ARDUINO UNO.
*/

const int led_jaune = 2;
const int led_rouge = 3;

void setup()
{
  pinMode(led_jaune, OUTPUT);
  pinMode(led_rouge, OUTPUT);
}

void loop()
{
  digitalWrite(led_jaune, HIGH); 
  digitalWrite(led_rouge, LOW);
  delay(1000);
  digitalWrite(led_jaune, LOW);
  digitalWrite(led_rouge, HIGH);
  delay(1000);
}
