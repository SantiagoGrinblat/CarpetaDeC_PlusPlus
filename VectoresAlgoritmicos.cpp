#include <iostream>
#include <string>

void cargarVector(int vec[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    std::cout << "Ingresa una edad" << std::endl;
    std::cin >> vec[i];
  }
}

void leerVector(int vec[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    std::cout << "La edad en la posicion " << i << " es: " << vec[i] << std::endl;
  }
}

int buscarMaximo(int vec[], int cantidad) {
  int maximo = vec[0];
  for(int i = 1; i < cantidad; i++) {
    if (vec[i] > maximo) {
      maximo = vec[i];
    }
  }
  return maximo;
}

int main() {

  int edades[3];
  cargarVector(edades, 3);
  leerVector(edades, 3);
  std::cout << "La edad maxima es: " << buscarMaximo(edades, 3) << std::endl;
}