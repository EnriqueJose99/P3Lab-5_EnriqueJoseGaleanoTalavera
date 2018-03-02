#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(){

}

Animal::Animal(string pNombreEspecie, string pNombreAnimal, int pTamanoA, string pTipo){
  nombreEspecie = pNombreEspecie;
  nombreAnimal = pNombreAnimal;
  tamanoA = pTamanoA;
  tipo = pTipo;
}
