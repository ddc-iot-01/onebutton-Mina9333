/*
 * Project: Using OneButton library
 * Description: Use oneButton to light and blink an LED
 * Author: 
 * Date: 
 */

#include <"OneButton.h">

buttoneState(23,false);// Setup OneButton on pin 23 
int ledPin = 3;
int flash= LOW;



void setup() {
Serial.begin(9600);
green.setClickTicks(500);
green.attachClick(click1);
pinMode(ledPin,OUTPUT);


} 

void loop() {
  // keep watching the push button:
  button1.tick();
  
  // light or blink LED based on buttonState and Flash 
 if(buttonState==HIGH){
  digitalWrite(ledPin,HIGH);
 }
 else{ digitalWrite(ledPin,LOW);
 }
} 


// ----- button 1 callback functions

// This function will be called when the button1 was pressed 1 time.
void click1() {

// change button state


  
} // click1


// This function will be called when the button1 was pressed 2 times in a short timeframe.
void doubleclick1() {

// change flash state

} // doubleclick1
