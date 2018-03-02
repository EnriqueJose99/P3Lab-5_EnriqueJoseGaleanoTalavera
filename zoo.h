#ifndef ZOO_H
#define ZOO_H
#include <string>
#include <vector>
#include "animal.h"

using namespace std;

class Zoo{
private:

  string nombre;
  int tamano;
  int capacidadPer;
  vector<Animal*> artico;
  vector<Animal*> desertico;
  vector<Animal*> jungla;
  vector<Animal*> sabana;
public:
  Zoo();
  Zoo(string, int, int);

  vector<Animal*> getArtico();
  vector<Animal*> getDesertico();
  vector<Animal*> getJungla();
  vector<Animal*> getSabana();

  void setNombre(string);
  string getNombre();
  void setTamano(int);
  int getTamano();
  void setCapacidadPer(int);
  int getCapacidadPer();
  void moverAnimales(vector<Animal*> &);
  void imprimir();


};
#endif
