#include "Arduino.h"
#include "Led.h"

Led::Led(int pin,boolean estaEncendido,int intensidad){
  this.pin=pin;
  this.estaEncendido=estaEncendido;
  this.intensidad=intensidad;
  pinMode(this.pin,OUTPUT);
}

void Led::encender(){
  digitalWrite(pin,HIGH);
}
void Led::apagar(){
  digitalWrite(pin,LOW);
}
void Led::variarIntensidad(int intensidad){
  analogWrite(pin,intensidad);
  this.intensidad=intensidad
}
