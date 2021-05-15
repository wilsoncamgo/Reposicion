#ifndef Led_h
#define Led_h
#include "Arduino.h"

class Led{
  private:
    int pin;
    boolean estaEncendido;
    int intensidad;

  void encender();
  void apagar();
  void variarIntensidad();
}
#endif
