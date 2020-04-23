/*
 * Project: Using OneButton library
 * Description: Introduct Students to OneButton Library using a button and the serial monitor
 * Author: Mina Khan
 * Date: 3/3/2020
 */

#include <OneButton.h>
OneButton button1(23,false);
int buttonState=LOW;
int flash=LOW;
void setup() {
Serial.begin(9600);
while(!Serial);
button1.attachClick(click1);
button1.attachDoubleClick(doubleclick1);
button1.attachLongPressStart(longPressStart1);
button1.attachLongPressStop(longPressStop1);
button1.setClickTicks(250);
button1.setPressTicks(2000);
/*if(Serial)Serial.println("Starting one Button on...");*/
}
void loop ()
{
  //keep watching the push buttons.
  button1.tick();
{
void click1(){
  Serial.println("button1 click.");
  buttonState=!buttonState;
  Serial.println("buttonState =");
  Serial.print(buttonState);
  void doubleclick1(){
  Serial.println("Button 1 doubleclick.");
  flash=!flash;
  Serial.print("flash=");
  Serial.println(flash);
  
}
void longPressStart1()
{
  Serial.println("button 1 longPress start");
}
void longPress1(){
  Serial.println(" Button 1 longPress...");
}

void longPressStop1(){
  Serial.println("Button 1 longPress stop");
}
