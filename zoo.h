#ifndef ZOO_H
#define ZOO_H
#include <string>
#include <vector>

using namespace std;

class Zoo{
private:

  string nombre;
  int tamano;
  int capacidadPer;
public:
  Zoo();
  Zoo(string, int, int);

  void setNombre(string);
  string getNombre();
  void setTamano(int);
  int getTamano();
  void setCapacidadPer(int);
  int getCapacidadPer();
  
};
#endif
