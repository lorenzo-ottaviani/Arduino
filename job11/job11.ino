/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 10/04/2025 16h10
* But du programme :
*    Utilise un bouton pour allumer une LED et un ventilateur.
* Entrée : ∅
* Sortie : Actions controlées par le bouton sur le circuit connecté à l'ARDUINO UNO.
*/

const int led_rouge = 3;
const int bouton = 2;
const int ventilateur = 8;
int etat_bouton = 0;
int dernier_etat = 0;
int nb_click = 0;

void setup()
{
  pinMode(led_rouge, OUTPUT);
  pinMode(bouton, INPUT_PULLUP);
  pinMode(ventilateur, OUTPUT);
  digitalWrite(led_rouge, LOW);
}

void loop()
{
  int etat_actuel = digitalRead(bouton);
  
  // Si l'état du bouton a changé
  if (etat_actuel != dernier_etat) {
  	dernier_etat = etat_actuel;

    if (etat_actuel == LOW) {
      nb_click++;  // Incrémente le compteur d'appuis
    }
  }
  
  // Effets du bouton
  if (nb_click == 1) {
    digitalWrite(led_rouge, HIGH);
    delay(15000);
    digitalWrite(led_rouge, LOW);
    digitalWrite(ventilateur, HIGH);
    
  } else if (nb_click == 2) {
    digitalWrite(ventilateur, LOW);
    
    nb_click = 0;  // Réinitialise le compteur après 2 appuis
  }
  
}
