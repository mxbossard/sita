/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
// FR: Ces constantes ne changeront pas. Elles sont utilisées pour nommer les ports utilisés:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to  FR: Port d'entrée analogique sur lequel est branché le potentiometre
const int analogOutPin = 9; // Analog output pin that the LED is attached to  FR: Port de sortie sur lequel est branché la LED

int sensorValue = 0;        // value read from the pot  FR: valeur du potar (potentiometre) lu
int outputValue = 0;        // value output to the PWM (analog out)  FR: valeur pour la sortie PWM (sortie analogique)

void setup() {
  // initialize serial communications at 9600 bps:
  // FR: initialise le port de communication série avec un débit de 9600 bit/seconde :
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  // FR: lit la valeur analogique en entrée
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  // FR: adapte l'amplitude de l'entrée de 0 à 1023 vers la sortie qui a une amplitude de 0 à 255:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  // FR: positionne la valeur "outputValue" sur la sortie analogique "analogOutPin":
  analogWrite(analogOutPin, outputValue);

  // print the results to the Serial Monitor:
  // FR: imprime les resultats sur la console du port série
  Serial.print("capteur = ");
  Serial.print(sensorValue);
  Serial.print("\t sortie = ");
  Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital converter to settle after the last reading:
  // FR: attend 2 millisecondes avant le prochain tour de boucle pour que le Convertisseur Analogique Numérique se réinitialise suite à la lecture précedente:
  delay(2);
}
