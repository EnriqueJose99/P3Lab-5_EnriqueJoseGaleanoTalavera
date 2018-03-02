#ifndef OREJA_H
#define OREJA_H
#include <string>
using namespace std;

class Oreja{
private:
  int tamanOreja;
  int audicion;
public:
  Oreja();
  Oreja(int, int);

  void setTamanoOreja(int);
  int getTamanoOreja();
  void setAudicion(int);
  int getAudicion();
  
};
#endif
