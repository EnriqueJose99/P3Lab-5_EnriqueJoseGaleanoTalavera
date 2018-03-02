#include "ojo.h"
#include <string>
using namespace std;

Ojo::Ojo(){

}

Ojo::Ojo(string pColorOJ, bool pVisionNocturna){
  colorOJ = pColorOJ;
  visionNocturna = pVisionNocturna;
}

void Ojo::setColorOJ(string pColorOJ){
  colorOJ = pColorOJ;
}
string Ojo::getColorOJ(){
  return colorOJ;
}
void Ojo::setVisionNocturna(bool pVisionNocturna){
  visionNocturna = pVisionNocturna;
}
bool Ojo::getVisionNocturna(){
  return visionNocturna;
}
