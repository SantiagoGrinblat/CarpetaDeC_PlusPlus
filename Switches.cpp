#include <iostream>
#include <string>

int main() {
  int opcion;
  std::cout << "Selecciona una opcion: " << std::endl;
  std::cout << "1. Opcion 1" << std::endl;
  std::cout << "2. Opcion 2" << std::endl;
  std::cout << "3. Opcion 3" << std::endl;
  std::cin >> opcion;

  switch (opcion) {
    case 1:
      std::cout << "Seleccionaste la opcion 1" << std::endl;
      break;
    case 2:
      std::cout << "Seleccionaste la opcion 2" << std::endl;
      break;
    case 3:
      std::cout << "Seleccionaste la opcion 3" << std::endl;
      break;
    default:
      std::cout << "Opcion no valida" << std::endl;
      break;
  }
}