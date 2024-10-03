#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;


bool Persona:: generarGenero() {
    // Inicializar el generador de números aleatorios con el tiempo actual
    
    
    // Generar un número aleatorio entre 0 y 1
    int numero = rand() % 2;
    
    // Devolver true si es 1, false si es 0
    return numero == 1;
}
char Persona:: calcularLetraDNI(int numero) {
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    return letras[numero % 23];
}

char* Persona:: generarDNI() {
    // Crear un array dinámico de 10 caracteres (9 + '\0')
    static char dni[10];

    // Inicializar el generador de números aleatorios
    

    int numeroDNI = 0;

    // Generar los primeros 8 dígitos del DNI
    for (int i = 0; i < 8; ++i) {
        dni[i] = '0' + rand() % 10;
        numeroDNI = numeroDNI * 10 + (dni[i] - '0'); // Convertir a número
    }

    // Calcular la letra del DNI
    dni[8] = calcularLetraDNI(numeroDNI);

    // Añadir el carácter nulo para finalizar la cadena
    dni[9] = '\0';

    // Devolver el array de caracteres
    return dni;
}

// Constructor 
Persona::Persona(int edad) {
  this->edad = edad;
  this->DNI=generarDNI();
  this->genero=generarGenero();
}
// Destructor 
Persona::~Persona() {
}

// Método para obtener la edad de la persona
int Persona::getEdad() {
  return edad;
}
// Método para determinar si la persona es mujer
bool Persona::esMujer() {
  return genero;
}
// Método para establecer la edad de la persona
void Persona::setEdad(int edad) {
  this->edad = edad;
}

// Método para mostrar la información de la persona
void Persona::mostrar() {
  cout << "Edad: " << edad << endl;
  cout << "Género: " << (genero ? "Mujer" : "Hombre") << endl;
  cout << "DNI: " << DNI << endl;
}

