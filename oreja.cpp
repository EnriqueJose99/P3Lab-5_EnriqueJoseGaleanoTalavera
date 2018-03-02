#include "oreja.h"
#include <string>
using namespace std;

Oreja::Oreja(){

}

Oreja::Oreja(int pTamanOreja, int pAudicion){
    tamanOreja = pTamanOreja;
    audicion = pAudicion;
}

void Oreja::setTamanoOreja(int pTamanOreja){
  tamanOreja = pTamanOreja;
}
int Oreja::getTamanoOreja(){
  return tamanOreja;
}

void Oreja::setAudicion(int pAudicion){
  audicion = pAudicion;
}
int Oreja::getAudicion(){
  return audicion;
}
