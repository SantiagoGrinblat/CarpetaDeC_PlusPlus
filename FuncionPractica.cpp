#include <iostream>
#include <string>

// funcion que reciba un arreglo y modifique su contenido directamente usando punteros.

void duplicarElementos(int* arreglo, int tamaño) {
  for(int i = 0; i < tamaño; i++) {
    arreglo[i] *= 2; // Duplicar el valor en cada posición del arreglo
  }
}

int main() {
  int numeros[] = {1, 2, 3, 4, 5};
  duplicarElementos(numeros, 5);
  for(int i = 0; i < 5; i++) {
    std::cout << numeros[i] << " "; // Imprime los elementos del arreglo duplicados
  }
  return 0;
}

void mostrarLetras(const char* str) {
  while(*str != '\0') {
    std::cout << *str << std::endl; // Imprime cada letra del arreglo de caracteres
    str++; // Avanza al siguiente carácter
  }
}
