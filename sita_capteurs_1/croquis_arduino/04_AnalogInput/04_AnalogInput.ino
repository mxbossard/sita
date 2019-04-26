/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

int sensorPin = A0;    // select the input pin for the potentiometer  FR: selectionne le port d'entrée pour le potentiometre
int ledPin = 13;      // select the pin for the LED  FR: selectionne le port de sortie pour la LED
int sensorValue = 0;  // variable to store the value coming from the sensor  FR: déclare une variable pour stocker la valeur provenant du capteur

void setup() {
  // declare the ledPin as an OUTPUT:
  // FR: déclare le port "ledPin" en tant que SORTIE:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  // FR: lit la valeur provenant du capteur:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  // FR: Allume la LED en positionnant un état logique HAUT sur la sortie numérique"ledPin"
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  // FR: Attent un nombre variable de millisecondes correspondant à la valeur de la variable "sensorValue"
  delay(sensorValue);
  // turn the ledPin off:
  // FR: Eteint la LED en positionnant un état logique BAS sur la sortie numérique"ledPin"
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  // FR: Attent un nombre variable de millisecondes correspondant à la valeur de la variable "sensorValue"
  delay(sensorValue);
}
