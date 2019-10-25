// Tous le texte après les caractères // sont des commentaires. Ces textes ne sont pas du code exécuté, ils servent à clarifier le code.

// Ces constantes ne changeront pas. Elles sont utilisées pour nommer les ports utilisés:
const int analogInPin = A0;  // Port d'entrée analogique sur lequel est branché le potentiometre
const int analogOutPin = 9; // Port de sortie sur lequel est branché la LED

int sensorValue = 0;        // Valeur du potar (potentiometre) lu en entrée
int outputValue = 0;        // Valeur qui sera envoyer sur la sortie PWM (sortie analogique)

void setup() {
  Serial.begin(9600); // Initialise le port de communication série avec un débit de 9600 bit/seconde :
}

void loop() {
  sensorValue = analogRead(analogInPin); // Lit la valeur analogique en entrée
  outputValue = map(sensorValue, 0, 1023, 0, 255); // Adapte l'amplitude de l'entrée de 0 à 1023 vers la sortie qui a une amplitude de 0 à 255:
  
  analogWrite(analogOutPin, outputValue); // Positionne la valeur "outputValue" sur la sortie analogique "analogOutPin":

  // Imprime les resultats sur la console du port série
  Serial.print("capteur = ");
  Serial.print(sensorValue);
  Serial.print("\t sortie = ");
  Serial.println(outputValue);

  delay(2); // Attend 2 millisecondes avant le prochain tour de boucle pour que le Convertisseur Analogique Numérique se réinitialise suite à la lecture précedente:
}
