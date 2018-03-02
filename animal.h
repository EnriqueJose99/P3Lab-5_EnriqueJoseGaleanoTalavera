#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;
class Animal{
private:
  string nombreEspecie;
  string nombreAnimal;
  int tamanoA;
  string tipo;//Artico, desertico, tropical, sabana

public:
  Animal();
  Animal(string, string, int, string);

  void setNombreEspecie(string);
  string getNombreEspecie();
  void setNombreAnimal(string);
  string getNombreAnimal();
  void setTamanoA(int);
  int getTamanoA();
  void getTipo(string);
  string getTipo();
};
#endif
