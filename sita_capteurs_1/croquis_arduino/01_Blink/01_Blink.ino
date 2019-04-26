/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// FR: déclare la constante "LED_BUILTIN" comme une variable numérique entière de valeur 13. 
// FR: Cette constante sera utilisée pour nommer le port de sortie de la LED.
const int LED_BUILTIN = 13;

// the setup function runs once when you press reset or power the board
// FR: La fonction setup est exécutée une seule et unique fois après avoir appuyé sur le bouton reset ou allumé l'Arduino
void setup() {
  // initialize digital pin "LED_BUILTIN" as an output.
  // FR: Initialise le port numérique "LED_BUILTIN" comme une SORTIE.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
// FR: La fonction loop est exécuté sans cesse pour toujours
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)  FR: allume la LED en positionnant un état logique HAUT sur la sortie LED_BUILTIN
  delay(1000);                       // wait for a second  FR: attend 1 seconde
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW  FR: éteint la LED en positionnant un état logique BAS sur la sortie LED_BUILTIN
  delay(1000);                       // wait for a second  FR: attend 1 seconde
}
