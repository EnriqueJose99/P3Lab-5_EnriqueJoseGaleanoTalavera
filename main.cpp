#include <iostream>
#include <string>
#include <vector>
#include "animal.h"
#include "zoo.h"
#include "patas.h"
#include "pelaje.h"
#include "oreja.h"
#include "ojo.h"
#include "cola.h"
using namespace std;


int menu();

int main(){
  vector<Animal*> espera;
  Zoo* zool;
  int opc = 0;
  while (opc != 6) {
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
        zool = new Zoo(nombreZoo, tamanoZoo, capacidadPersonas);
        break;
      }
      case 2:{
        string nombreESPECIE;
        string nombreANIMAL;
        int tamanoANIMAL;
        int tipoZONA;
        int cantidadPATAS;
        int largoPATAS;
        int tipoPATAS;
        string colorPELAJE;
        int grosoPELAJE;
        int largoPELAJE;
        string colorOJO;
        int visionNOCTURNA;
        bool vision;
        int tamanoOREJA;
        int audicionOREJA;
        //animal
        cout<<"Ingrese el nombre de la especie"<<endl;
        cin>>nombreESPECIE;
        cout<<"Ingrese el nombre del animal"<<endl;
        cin>>nombreANIMAL;
        cout<<"Ingrese el tamano del animal"<<endl;
        cin>>tamanoANIMAL;
        cout<<"Ingrese el tipo de Zona"<<endl;
        cout<<"1.Zona Artica"<<endl;
        cout<<"2.Zona Desertica"<<endl;
        cout<<"3.Zona Jungla"<<endl;
        cout<<"4.Zona Sabana"<<endl;
        cout<<"Ingrese numero de zona"<<endl;
        cin>>tipoZONA;

        cout<<"-----"<<endl;

        //patas
        cout<<"Ingrese la cantidad de patas"<<endl;
        cin>>cantidadPATAS;
        cout<<"Ingrese el largo de las patas"<<endl;
        cin>>largoPATAS;
        cout<<"Ingrese el tipo de patas"<<endl;
        cout<<"1.Tentaculos"<<endl;
        cout<<"2.Pesuna"<<endl;
        cout<<"3.Garras"<<endl;
        cout<<"Ingrese numero para seleccionar el tipo"<<endl;
        cin>>tipoPATAS;
        Patas* patas = new Patas(cantidadPATAS, largoPATAS, tipoPATAS);

        cout<<"----"<<endl;

        //pelaje
        cout<<"Ingrese el color de pelaje"<<endl;
        cin>> colorPELAJE;
        cout<<"Ingrese el grosor del pelaje (numero)"<<endl;
        cin>>grosoPELAJE;
        cout<<"Ingrese el largo del pelaje"<<endl;
        cin>>largoPELAJE;
        Pelaje* pelaje = new Pelaje(colorPELAJE, grosoPELAJE, largoPELAJE);

        cout<<"-----"<<endl;

        //ojos
        cout<<"Ingrese el color del ojo"<<endl;
        cin>>colorOJO;
        cout<<"Ingrese si es vision nucturna(numero 1 , 0)"<<endl;
        cin>>visionNOCTURNA;
        if (visionNOCTURNA == 1) {
          vision = true;
        }
        if(visionNOCTURNA == 0){
          vision = false;
        }
        Ojo* ojo = new Ojo(colorOJO, vision);

        cout<<"----"<<endl;

        //oreja
        cout<<"Ingrese el tamano de la oreja"<<endl;
        cin>>tamanoOREJA;
        cout<<"Ingrese la audicion"<<endl;
        cin>>audicionOREJA;
        Oreja* oreja = new Oreja(tamanoOREJA, audicionOREJA);

        cout<<"----"<<endl;

        //cola
        int largoCOLA;
        int peludita;
        bool PELUDA;
        cout<<"Ingrese el largo de la cola"<<endl;
        cin>>largoCOLA;
        cout<<"Es peluda(1,0)"<<endl;
        cin>>peludita;
        if (peludita ==  1) {
          /* code */
          PELUDA = true;
        }
        if (peludita == 0) {
          PELUDA = false;
        }
        Cola* cola = new Cola(largoCOLA, PELUDA);
        
        Animal* animal = new Animal(nombreESPECIE, nombreANIMAL, tamanoANIMAL,tipoZONA, patas, pelaje, oreja, ojo, cola);
        espera.push_back(animal);
        break;
      }
      case 3:{
        for (int i = 0; i < espera.size(); i++) {
          cout<<espera[i]->getNombreAnimal()<<endl;
        }
        break;
      }
      case 4:{
        int pos =0;
        for (int i = 0; i < espera.size(); i++) {
          cout<<"Posicion: "<< i <<espera[i]->getNombreAnimal()<<endl;
        }
        if (espera.size() == 0) {
          cout<<"No hay animal en la lista de espera"<<endl;
        }else{
          cout<<"Ingrese la pocision que desa eliminar"<<endl;
          cin>>pos;
          delete espera[pos];
          espera.erase(espera.begin() + pos);
          cout<<"Animal eliminado"<<endl;
        }
        break;
      }
      case 5:{
        Animal* animal;
        zool -> moverAnimales(espera);
        espera.clear();
        zool -> imprimir();
        break;
      }
    }
  }
}

int menu(){
  int bandera = 0;
  int numberElection = 0;
  while (bandera == 0) {
    cout<<"-----Menu-----"<<endl;
    cout<<"1.Cree zoologico"<<endl;
    cout<<"2.Cree Animal"<<endl;
    cout<<"3.Listar animales de la lista de epera"<<endl;
    cout<<"4.Eliminar de la lista de espera"<<endl;
    cout<<"5.Transferir al zoologico"<<endl;
    cout<<"6.Salir"<<endl;
    cout<<"Ingrese numero para ingresar: "<<endl;
    cin>>numberElection;
    return numberElection;
  }
}
