#ifndef Sensor_h
#define Sensor_h
#include "Arduino.h"
//Declaracion
class Sensor{
  private: 
  int pinEntrada1;
  int pinEntrada2;
  int distanciaRAW;

  
  void inicializarPines();
  int procesaDistancia(distanciaRAW);
}
