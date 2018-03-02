#ifndef PATAS_H
#define PATAS_H
#include <string>
using namespace std;

class Patas{
private:
  int cantidadPatas;
  int largoPatas;
  string tipoPatas;
public:
  Patas();
  Patas(int, int, string);

  void setCantidadPatas(int);
  int getCantidadAPatas();
  void setLargoPatas(int);
  int getLargoPatas();
  void setTiposPatas(string);
  string getTiposPatas();

};
#endif
