/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

/* On this boards are two additional LEDs available for control directly from MCU
 * - D25 / PB03
 * - D26 / PA27
 */
#define LED_PIN 25

void setup()
{
  //For serial PB22(TXD) and PB23(RXD) are used (on zero this is 'programing port')
  Serial.begin(9600);
  pinMode(LED_PIN,OUTPUT);
}

void loop()
{
  Serial.println("LED on");
  digitalWrite(LED_PIN,LOW);
  delay(1000);
  Serial.println("LED off");
  digitalWrite(LED_PIN,HIGH);
  delay(1000);
}
