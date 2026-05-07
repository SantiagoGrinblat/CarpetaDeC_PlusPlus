#include <iostream>
#include <string>
using namespace std;

int main() {
  int x = 10;
  int* p = &x;
  std::cout << "Valor de x: " << *p << std::endl;

  *p = 25;
  std::cout << "Nuevo valor de x: " << x << std::endl;

  //Puntero a char
  char letra = 'A';
  char* ptr = &letra;
  std::cout << "Valor de letra: " << *ptr << std::endl;

  //puntero y arreglos
  int nums[] = {5, 10, 15};
  int* pointer = nums; //ptr apunta al primer elemento del arreglo
  std::cout << "Primer numero: " << *pointer << std::endl; //Acceder al segundo numero
  std::cout << "Segundo numero: " << *(pointer + 1) << std::endl; //Acceder al tercer numero
  std::cout << "Tercer numero: " << *(pointer + 2) << std::endl;

  return 0;
}