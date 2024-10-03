#include <stdio.h>
#include <Persona.hpp>
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int edades[10]={18,19,20,21,22,23,24,25,26,27};
	for(int i=0;i<10;++i){
		
		Persona p(edades[i]);
		p.mostrar();
		cout<<endl;
		
		
		}
    
  return 0;
}
