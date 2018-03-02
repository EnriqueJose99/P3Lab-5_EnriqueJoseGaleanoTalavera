#ifndef ANIMAL_H
#define ANIMAL_H
#include "patas.h"
#include "pelaje.h"
#include "oreja.h"
#include "ojo.h"
#include "cola.h"
#include <string>

using namespace std;
class Animal{
private:
  string nombreEspecie;
  string nombreAnimal;
  int tamanoA;
  int tipo;//1.Artico, 2.desertico, 3.tropical, 4.sabana
  Patas* patas;
  Pelaje* pelaje;
  Oreja* oreja;
  Ojo* ojo;
  Cola* cola;

public:
  Animal();
  Animal(string, string, int, int, Patas*, Pelaje*, Oreja*, Ojo*, Cola*);

  void setNombreEspecie(string);
  string getNombreEspecie();
  void setNombreAnimal(string);
  string getNombreAnimal();
  void setTamanoA(int);
  int getTamanoA();
  void setTipo(int);
  int getTipo();
};
#endif
