#include <iostream>
#include <string>
#include "animal.h"
#include "zoo.h"
using namespace std;

int menu();

int main(){
  int opc = 0;
  while (opc != 7) {
    switch (opc = menu()) {
      case 1:{
        string nombreZoo;
        int tamanoZoo = 0;
        int capacidadPersonas = 0;
        cout<<"Ingrese el nombre del zoologico"<<endl;
        cin>>nombreZoo;
        cout<<"Ingrese el tamano del zoologico"<<endl;
        cin>>tamanoZoo;
        cout<<"Ingrese la capacidad de Personas"<<endl;
        cin>>capacidadPersonas;
        Zoo* zool = new Zoo(nombreZoo, tamanoZoo, capacidadPersonas);
        break;
      }
    }
  }
}

int menu(){
  int bandera = 0;
  int numberElection = 0;
  while (bandera ==0) {
    cout<<"1.Cree zoologico"<<endl;
    cout<<"2.Cree Animal"<<endl;
    cout<<"3.Agregar a lista de espera"<<endl;
    cout<<"4.Eliminar de la lista de espera"<<endl;
    cout<<"5.Transferir al zoologico"<<endl;
    cout<<"6.Listar animales del zoologico"<<endl;
    cout<<"7.Salir"<<endl;
    cout<<"Ingrese numero para ingresar: "<<endl;
    cin>>numberElection;
    return numberElection;
  }
}
