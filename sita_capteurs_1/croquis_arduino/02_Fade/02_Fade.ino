/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 9;           // the PWM pin the LED is attached to  FR: le port PWM sur lequel la LED est branché
int brightness = 0;    // how bright the LED is  FR: à quel point la LED est brillante
int fadeAmount = 5;    // how many points to fade the LED by  FR: de combien de points il faut réduire la luminosité de la LED

// the setup routine runs once when you press reset:
// FR: La fonction setup est exécutée une seule et unique fois après avoir appuyé sur le bouton reset ou allumé l'Arduino
void setup() {
  // declare pin "led" to be an output:
  // FR: déclare le port "led" comme une SORTIE
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
// FR: La fonction loop est exécuté sans cesse pour toujours
void loop() {
  // set the brightness of pin 9:
  // FR: configure la luminosité de la LED en positionnant la valeur analogique "brightness" sur le port "led"
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  // FR: affecte une nouvelle valeur à la variable "brightness" en lui ajoutant la valeur "fadeAmount"
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  // FR: inverse la sens de changement de luminosité lorsqu'une borne est atteinte
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  // FR: attend 30 millisecondes
  delay(30);
}
