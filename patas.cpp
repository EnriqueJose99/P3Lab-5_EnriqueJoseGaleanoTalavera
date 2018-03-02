#include "patas.h"
#include <string>

using namespace std;

Patas::Patas(){

}

Patas::Patas(int pCantidadPatas, int pLargoPatas, int pTipoPatas){
  cantidadPatas = pCantidadPatas;
  largoPatas = pLargoPatas;
  tipoPatas = pTipoPatas;
}

void Patas::setCantidadPatas(int pCantidadPatas){
  cantidadPatas = pCantidadPatas;
}
int Patas::getCantidadAPatas(){
  return cantidadPatas;
}
void Patas::setLargoPatas(int pLargoPatas){
  largoPatas = pLargoPatas;
}
int Patas::getLargoPatas(){
  return largoPatas;
}
void Patas::setTiposPatas(int pTipoPatas){
  tipoPatas = pTipoPatas;
}
int Patas::getTiposPatas(){
  return tipoPatas;
}
