#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(){

}

Animal::Animal(string pNombreEspecie, string pNombreAnimal, int pTamanoA, int pTipo, Patas* patas, Pelaje* pelaje, Oreja* oreja, Ojo* ojo, Cola* cola){

  nombreEspecie = pNombreEspecie;
  nombreAnimal = pNombreAnimal;
  tamanoA = pTamanoA;
  tipo = pTipo;
  this -> patas = patas;
  this -> pelaje = pelaje;
  this -> oreja = oreja;
  this -> ojo = ojo;
  this -> cola = cola;

}

void Animal::setNombreEspecie(string pNombreEspecie){
  nombreEspecie = pNombreEspecie;
}
string Animal::getNombreEspecie(){
  return nombreEspecie;
}
void Animal::setNombreAnimal(string pNombreAnimal){
  nombreAnimal = pNombreAnimal;
}
string Animal::getNombreAnimal(){
  return nombreAnimal;
}
void Animal::setTamanoA(int pTamanoA){
  tamanoA = pTamanoA;
}
int Animal::getTamanoA(){
  return tamanoA;
}
void Animal::setTipo(int pTipo){
  tipo = pTipo;
}
int Animal::getTipo(){
  return tipo;
}
