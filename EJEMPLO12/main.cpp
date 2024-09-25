#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct persona{
	char nombre [30];
	int edad;
	long telefono;
	};
void Escribir (persona p){
	cout<<p.nombre<<" tiene "<<p.edad<< " anyos y su telefono es "<<p.telefono;
	cout<<endl;
	}
void EscribirPuntero(persona* p ){
	cout<<p->nombre<<" tiene "<<p->edad<<" anyosy su telefono es "<<p->telefono;
	}
persona CrearPersona(char n[30],int e,long L){
	persona aux;
	strcpy(aux.nombre,n);
	aux.edad=e;
	aux.telefono=L;
	return aux;
	}

int main(int argc, char** argv) {
  persona ejemplo;
  ejemplo = CrearPersona((char*)"Jesus", 99, 123456789);
  cout << "Paso por valor" << endl;
  Escribir(ejemplo);
  cout << endl;

  ejemplo = CrearPersona((char*)"Mario", 55, 987654321);
  cout << "Paso con punteros" << endl;
  EscribirPuntero(&ejemplo);
  return 0;
}
