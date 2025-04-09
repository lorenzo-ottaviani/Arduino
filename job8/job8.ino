/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 09/04/2025 17h38
* But du programme :
*    Faire varier la LED de manière asynchrone toute les secondes.
* Entrée : ∅
* Sortie : Le LED clignotent de manière asynchrone sur le circuit connecté à l'ARDUINO UNO.
*/

const int led_rouge = 3;
int luminosite = 0;
int augmentation = 5;

void setup()
{
  pinMode(led_rouge, OUTPUT);
}

void loop()
{
  analogWrite(led_rouge, luminosite);
  luminosite += augmentation;
  delay(100);
  
  if (luminosite == 255) {
    luminosite = 0;
    delay(1000);
  }
}
