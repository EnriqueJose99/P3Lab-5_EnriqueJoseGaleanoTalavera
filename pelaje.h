#ifndef PELAJE_H
#define PELAJE_H
#include <string>
using namespace std;

class Pelaje{
private:
  string color;
  int grosor;
  int largo;
public:
  Pelaje();
  Pelaje(string, int, int);

  void setColor(string);
  string getColor();
  void setGrosor(int);
  int getGrosor();
  void setLargo(int);
  int getLargo();

};
#endif
