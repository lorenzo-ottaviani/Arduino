/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 09/04/2025 17h38
* But du programme :
*    Allumer progressivement une LED.
* Entrée : ∅
* Sortie : Le LED s'allume progressivement sur le circuit connecté à l'ARDUINO UNO.
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
