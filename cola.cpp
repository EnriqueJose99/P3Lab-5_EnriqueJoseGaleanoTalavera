#include "cola.h"
#include <string>
using namespace std;

Cola::Cola(){

}

Cola::Cola(int pLargoCola, bool pPeluda){
  largoCola = pLargoCola;
  peluda = pPeluda;
}

void Cola::setLargoCola(int pLargoCola){
  largoCola = pLargoCola;
}
int Cola::getLargoCola(){
  return largoCola;
}
void Cola::setPeluda(bool pPeluda){
  peluda = pPeluda;
}
bool Cola::getPeluda(){
  return peluda;
}
