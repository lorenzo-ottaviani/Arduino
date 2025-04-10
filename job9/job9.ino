/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 09/04/2025 23h39
* But du programme :
*    Utiliser un bouton pour allumer, éteindre ou faire clignoter une LED
* Entrée : ∅
* Sortie : Le LED effectue l'action comandé par le bouton sur le circuit connecté à l'ARDUINO UNO.
*/

const int led_rouge = 3;
const int bouton = 2;
int etat_bouton = 0;
int dernier_etat = 0;
int nb_click = 0;
unsigned long temps_click = 0;
bool click_long = false;
bool led_on = false;


void setup()
{
  pinMode(led_rouge, OUTPUT);
  pinMode(bouton, INPUT_PULLUP);
  digitalWrite(led_rouge, LOW);
}

void loop()
{
  int etat_actuel = digitalRead(bouton);
  
  // Si l'état du bouton a changé
  if (etat_actuel != dernier_etat) {
  	dernier_etat = etat_actuel;

    if (etat_actuel == LOW) {
      temps_click = millis();  // Enregistre le temps de l'appui
      nb_click++;  // Incrémente le compteur d'appuis
    }
  }
  
  // En cas d'appui prolongé de plus de 1 seconde
  if (etat_actuel == HIGH && dernier_etat == LOW) {
    if (millis() - temps_click > 1000) {
      click_long = true;
    }
    delay(50);  // Petite pause pour éviter les doubles comptages
  }
  
  // Effets du bouton
  if (nb_click == 1) {
    digitalWrite(led_rouge, HIGH);  // La LED s'allume après 1 appui
    led_on = true;
    
  } else if (nb_click == 2) {
    digitalWrite(led_rouge, HIGH);  // La LED reste allumée après 2 appuis
    led_on = true;
    
  } else if (nb_click == 3) {
    led_on = false;  // La LED clignote après 3 appuis
    
    for (int i = 0; i < 5; i++) {
      digitalWrite(led_rouge, HIGH);
      delay(500);
      digitalWrite(led_rouge, LOW);
      delay(500);
    }
    
    nb_click = 0;  // Réinitialise le compteur après 3 appuis
  }

  // Appui prolongé
  if (click_long) {
    digitalWrite(led_rouge, LOW);
    led_on = false;
    nb_click = 0;
    click_long = false;
  }
  
}
