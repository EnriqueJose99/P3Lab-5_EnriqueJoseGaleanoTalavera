#include "zoo.h"
#include <iostream>
#include <string>

using namespace std;

Zoo::Zoo(){

}

Zoo::Zoo(string pNombre, int pTamano, int pCapacidadPer){
  nombre = pNombre;
  tamano = pTamano;
  capacidadPer = pCapacidadPer;
}

void Zoo::setNombre(string pNombre){
  nombre = pNombre;
}

string Zoo::getNombre(){
  return nombre;
}

void Zoo::setTamano(int pTamano){
  tamano = pTamano;
}
int Zoo::getTamano(){
  return tamano;
}
void Zoo::setCapacidadPer(int pCapacidadPer){
  capacidadPer = pCapacidadPer;
}
int Zoo::getCapacidadPer(){
  return capacidadPer;
}
