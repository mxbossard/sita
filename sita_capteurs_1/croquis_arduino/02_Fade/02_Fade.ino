// Tous le texte après les caractères // sont des commentaires. Ces textes ne sont pas du code exécuté, ils servent à clarifier le code.

int led = 9;           // Le port PWM sur lequel la LED est connectée
int brightness = 0;    // A quel point la LED est brillante
int fadeAmount = 5;    // De combien de points il faut réduire la luminosité de la LED

// La fonction setup est exécutée une seule et unique fois après avoir appuyé sur le bouton reset ou allumé l'Arduino
void setup() {
  pinMode(led, OUTPUT); // Déclare le port "led" comme une SORTIE
}

// La fonction loop est exécuté sans cesse pour toujours
void loop() {
  analogWrite(led, brightness); // Configure la luminosité de la LED en positionnant la valeur analogique "brightness" sur le port "led"

  brightness = brightness + fadeAmount; // Affecte une nouvelle valeur à la variable "brightness" en lui ajoutant la valeur "fadeAmount"

  // Inverse la sens de changement de luminosité lorsqu'une borne est atteinte
  if (brightness < 1 || brightness > 254) { // SI brightness est inferieur à 1 OU SI brightness est superieur à 254
    // ALORS
    fadeAmount = -fadeAmount; // On remplace la valeur de fadeAmount par sa valeur oposée (ex: si la valeur était de 5, elle devient -5)
  }
  
  delay(30); // Attend 30 millisecondes
}
