#include <iostream>
class Persona
{
	
private:
	bool genero;
	int edad;
	char* DNI  ;
	
public: 
		Persona(int edad);
		~Persona();
		bool generarGenero();
		char calcularLetraDNI(int numero);
		char* generarDNI();
		int getEdad();
		bool esMujer();
		void setEdad(int edad);
		void mostrar();
	};