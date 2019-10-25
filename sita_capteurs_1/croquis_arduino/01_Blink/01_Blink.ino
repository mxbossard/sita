// Tous le texte après les caractères // sont des commentaires. Ces textes ne sont pas du code exécuté, ils servent à clarifier le code.

// La fonction setup est exécutée une seule et unique fois après avoir appuyé sur le bouton reset ou allumé l'Arduino
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialise le port numérique "LED_BUILTIN" comme une SORTIE. Le port "LED_BUILTIN" est le port sur lequel est connecté la LED intégré à l'Arduino.
}

// La fonction loop est exécuté sans cesse pour toujours
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Allume la LED en positionnant un état logique HAUT sur la sortie LED_BUILTIN
  delay(1000);                       // Attend 1 seconde
  digitalWrite(LED_BUILTIN, LOW);    // Eteint la LED en positionnant un état logique BAS sur la sortie LED_BUILTIN
  delay(1000);                       // Attend 1 seconde
}
