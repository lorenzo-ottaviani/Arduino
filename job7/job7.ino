/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 09/04/2025 15h42
* But du programme :
*    Faire clignoter huit LED de manière asynchrone toute les secondes.
* Entrée : ∅
* Sortie : Le LED clignotent de manière asynchrone sur le circuit connecté à l'ARDUINO UNO.
*/


const int led_verte1 = 0;
const int led_bleue1 = 1;
const int led_jaune1 = 2;
const int led_rouge1 = 3;
const int led_verte2 = 4;
const int led_bleue2 = 5;
const int led_jaune2 = 6;
const int led_rouge2 = 7;

void setup()
{
  pinMode(led_verte1, OUTPUT);
  pinMode(led_bleue1, OUTPUT);
  pinMode(led_jaune1, OUTPUT);
  pinMode(led_rouge1, OUTPUT);
  pinMode(led_verte2, OUTPUT);
  pinMode(led_bleue2, OUTPUT);
  pinMode(led_jaune2, OUTPUT);
  pinMode(led_rouge2, OUTPUT);
}

void loop()
{
  digitalWrite(led_rouge2, LOW);
  digitalWrite(led_verte1, HIGH); 
  delay(1000);
  
  digitalWrite(led_verte1, LOW); 
  digitalWrite(led_bleue1, HIGH);
  delay(1000);
  
  digitalWrite(led_bleue1, LOW); 
  digitalWrite(led_jaune1, HIGH);
  delay(1000);
  
  digitalWrite(led_jaune1, LOW);
  digitalWrite(led_rouge1, HIGH);
  delay(1000);
  
  digitalWrite(led_rouge1, LOW);
  digitalWrite(led_verte2, HIGH); 
  delay(1000);
  
  digitalWrite(led_verte2, LOW); 
  digitalWrite(led_bleue2, HIGH);
  delay(1000);
  
  digitalWrite(led_bleue2, LOW); 
  digitalWrite(led_jaune2, HIGH);
  delay(1000);
  
  digitalWrite(led_jaune2, LOW);
  digitalWrite(led_rouge2, HIGH);
  delay(1000);
}
