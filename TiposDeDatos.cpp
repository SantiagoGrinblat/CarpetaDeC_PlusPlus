#include <iostream>
#include <string>
int main() {

  //TODO: TIPOS NUMERICOS ENTEROS

  int edad = 24; // Entero con signo (puede ser positivo o negativo)
  unsigned int puntos = 1500; // Entero sin signo (solo valores positivos)
  short dias = 7; // entero corto (rango mas pequeño, para ahorrar memoria)
  long poblacion = 5000000000; // entero largo (rango mas grande, para numeros muy grandes)

  //TODO: TIPOS NUMERICOS DECIMALES
  float temperatura = 36.5f; // Numero decimal con menor precision (7 digitos significativos)
  double altura = 1.75; // numero decimal con mayor precision (15-16 digitos significativos)
  long double pi = 3.141592653589793238L; // numero decimal con precision extendida (18-19 digitos significativos)

  //TODO: CARACTER Y CADENA
  char inicial = 'S'; // un solo caracater entre comillas simples
  std::string nombre = "Santiago"; // una cadena de texto (requiere incluir la biblioteca <string> y usar std::string)

  //TODO: BOOLEANOS
  bool estudiante = true; // puede ser true (verdadero) o false (falso)

  //TODO: MOSTRAR LOS VALORES EN PANTALLA
  std::cout << "Nombre: " << nombre << std::endl;
  std::cout << "Inicial: " << inicial << std::endl;
  std::cout << "Edad: " << edad << " años" << std::endl;
  std::cout << "Altura: " << altura << " metros" << std::endl;
  std::cout << "Temperatura corporal: " << temperatura << " grados" << std::endl;
  std::cout << "Puntos: " << puntos << std::endl;
  std::cout << "Estudiante: " << (estudiante? "Si" : "No") << std::endl;
  std::cout << "Valor de Pi: " << pi << std::endl;
  std::cout << "Poblacion mundial: " << poblacion << std::endl;
  std::cout << "Dias en una semana: " << dias << std::endl;
}