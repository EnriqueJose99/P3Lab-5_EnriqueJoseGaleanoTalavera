#include "zoo.h"
#include "animal.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Zoo::Zoo(){

}

Zoo::Zoo(string pNombre, int pTamano, int pCapacidadPer){
  nombre = pNombre;
  tamano = pTamano;
  capacidadPer = pCapacidadPer;
}

void Zoo::setNombre(string pNombre){
  nombre = pNombre;
}

string Zoo::getNombre(){
  return nombre;
}

void Zoo::setTamano(int pTamano){
  tamano = pTamano;
}
int Zoo::getTamano(){
  return tamano;
}
void Zoo::setCapacidadPer(int pCapacidadPer){
  capacidadPer = pCapacidadPer;
}
int Zoo::getCapacidadPer(){
  return capacidadPer;
}

vector<Animal*>Zoo:: getArtico(){
  return artico;
}

vector<Animal*>Zoo:: getDesertico(){
  return desertico;
}

vector<Animal*>Zoo:: getJungla(){
  return jungla;sabana;
}

vector<Animal*>Zoo:: getSabana(){
  return sabana;
}

void Zoo::moverAnimales(vector<Animal*> &ani){
  int tipo;
  for (int i = 0; i <ani.size() ; i++) {
    tipo = ani[i] -> getTipo();
    switch (tipo) {
      case 1:{
        artico.push_back(ani[i]);
        break;
      }
      case 2:{
        desertico.push_back(ani[i]);
        break;
      }
      case 3:{
        jungla.push_back(ani[i]);
        break;
      }
      case 4:{
        sabana.push_back(ani[i]);
        break;
      }

    }
  }
}

void Zoo::imprimir(){
  Animal* animal;
  cout<<"Zona Artica"<<endl;
  for (int i = 0; i <artico.size(); i++) {
    animal= artico[i];
    cout<<" "<<animal->getNombreAnimal()<<endl;
  }
  cout<<"Zona Desertica"<<endl;
  for (int i = 0; i <desertico.size(); i++) {
    animal= desertico[i];
    cout<<" "<<animal->getNombreAnimal()<<endl;
  }
  cout<<"Zona Jungla"<<endl;
  for (int i = 0; i <jungla.size(); i++) {
    animal= jungla[i];
    cout<<" "<<animal->getNombreAnimal()<<endl;
  }
  cout<<"Zona Sabana"<<endl;
  for (int i = 0; i <sabana.size(); i++) {
    animal= sabana[i];
    cout<<" "<<animal->getNombreAnimal()<<endl;
  }
}
