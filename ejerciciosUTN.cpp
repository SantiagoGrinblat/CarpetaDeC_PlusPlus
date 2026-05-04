#include <iostream>

// bool esCapicua(int n) {
//   int a = n / 100000;
//   int b = n / 10000 % 10;
//   int c = n / 1000 % 10;
//   int d = n / 100 % 10;
//   int e = n / 10 % 10;
//   int f = n % 10;

//   if(a == f && b == e && c == d) {
//       return true;
//   } else {
//       return false;
//   }
// }

// bool esCapicua(int n) {
//     int original = n;
//     int invertido = 0;
//     int resto;

//     while (n > 0) {
//         resto = n % 10;
//         invertido = (invertido * 10) + resto;
//         n = n / 10;
//     }

//     return (original == invertido); 
// }

// void division(int dividendo, int divisior, int &cociente, int &resto) {
//     cociente = dividendo / divisior;
//     resto = dividendo % divisior;
// }

int main() {

    // int a = 17, b = 5, c, d;
    // division(a, b, c, d);
    // std::cout << c << ", Resto: " << d << std::endl;
    // division(c, d, c, d);
    // std::cout << c << ", Resto: " << d << std::endl;
    // return 0;

    // int numero;
    // std::cout << "Ingresa un numero para verificar: ";
    // std::cin >> numero;

    // if (esCapicua(numero)) {
    //     std::cout << "¡Es capicua!" << std::endl;
    // } else {
    //     std::cout << "No es capicua." << std::endl;
    // }

    // return 0;
    


  //aca en el codigo real es asi
  // int numero1 = 3;
  // int valorAlCuadrado = numero1 * numero1;
  // std::cout << "El valor de " << numero1 << " al cuadrado es: " << valorAlCuadrado << std::endl;

  //en la universidad es asi =
  // int elevarCuadrado(int numero){
  //   int valorAlCuadrado = numero * numero;
  //   return valorAlCuadrado;
  // }

  //aca el ejemplo real del numero par o impar es asi
  // int numero2 = 2;
  // if (numero2 % 2 != 0)
  // {
  //   std::cout << "El numero " << numero2 << " es par" << std::endl;
  // } else {
  //   std::cout << "El numero " << numero2 << " es impar" << std::endl;
  // }

  //en la universidad es asi =
  // int esPar(int numero) {
  //   if(numero % 2 == 0) {
  //       return 1;
  //   } else {
  //       return 0;
  //   }
  // }

  // en el codigo real es asi =
  // int num1 = 5;
  // int num2 = 10;
  // int num3 = 3;

  // if(num1 >= num2 && num1 >= num3) {
  //     std::cout << "El mayor es: " << num1 << std::endl;
  // } else if(num2 >= num1 && num2 >= num3) {
  //     std::cout << "El mayor es: " << num2 << std::endl;
  // } else {
  //     std::cout << "El mayor es: " << num3 << std::endl;
  // }

  //escribir una funcion llamada MostrarMayor que reciba tres numeros enteros y muestre el mayor de los tres numeros.
  //en la unversidad es asi =
  // int mostrarMayor(int num1, int num2, int num3) {
  //   if(num1 >= num2 && num1 >= num3) {
  //       std::cout << "El mayor es: " << num1 << std::endl;
  //   } else if(num2 >= num1 && num2 >= num3) {
  //       std::cout << "El mayor es: " << num2 << std::endl;
  //   } else {
  //       std::cout << "El mayor es: " << num3 << std::endl;
  //   }
  // }
}
