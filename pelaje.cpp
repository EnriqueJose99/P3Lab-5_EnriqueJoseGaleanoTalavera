#include "pelaje.h"
#include <string>

using namespace std;

Pelaje::Pelaje(){

}

Pelaje::Pelaje(string pColor, int pGrosor, int pLargo){
  color = pColor;
  grosor = pGrosor;
  largo = pLargo;
}

void Pelaje::setColor(string pColor){
  color = pColor;
}
string Pelaje::getColor(){
  return color;
}
void Pelaje::setGrosor(int pGrosor){
  grosor = pGrosor;
}
int Pelaje::getGrosor(){
  return grosor;
}
void Pelaje::setLargo(int pLargo){
  largo = pLargo;
}
int Pelaje::getLargo(){
  return largo;
}
