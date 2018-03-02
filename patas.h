#ifndef PATAS_H
#define PATAS_H
#include <string>
using namespace std;

class Patas{
private:
  int cantidadPatas;
  int largoPatas;
  int tipoPatas;
public:
  Patas();
  Patas(int, int, int);

  void setCantidadPatas(int);
  int getCantidadAPatas();
  void setLargoPatas(int);
  int getLargoPatas();
  void setTiposPatas(int);
  int getTiposPatas();

};
#endif
