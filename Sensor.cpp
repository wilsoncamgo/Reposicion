#include "Sensor.h"
#include "Arduino.h"
//aca va toda la logica (INICIALIZACION y LOGICA)
Sensor::Sensor(int pinEntrada1,
               int pinEntrada2,
               int distanciaRAW) {
                pinEntrada1=3;
                pinEntrada2=4;
                distanciaRAW=0;}


void Sensor::inicializarPines(){
  pinMode(pinEntrada1,INPUT);
  pinMode(pinEntrada2,INPUT);
  
}
int Sensor::procesaDistancia(int distanciaRAW){
  distancia=distanciaRAW*0.5;
}
