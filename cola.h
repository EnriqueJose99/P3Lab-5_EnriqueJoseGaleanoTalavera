#ifndef COLA_H
#define COLA_H
#include <string>
using namespace std;

class Cola{
private:
  int largoCola;
  bool peluda;
public:
  Cola();
  Cola(int, bool);

  void setLargoCola(int);
  int getLargoCola();
  void setPeluda(bool);
  bool getPeluda();
};
#endif
