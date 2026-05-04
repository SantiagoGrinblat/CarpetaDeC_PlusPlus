/*
Por defecto al usar cin >> edad, el programa espera que el usuario ingrese un valor numérico (en este caso, un entero) y presione Enter. 
Si el usuario ingresa algo que no es un número (como texto o caracteres especiales), el programa no podrá convertir esa entrada a un número y se producirá un error de entrada.
Y el valor que se mostrara es 0, porque la variable edad no se ha inicializado con un valor válido, y el programa no pudo asignarle el valor ingresado por el usuario debido al error de entrada. 
En C++, las variables no inicializadas pueden contener "basura" (valores aleatorios que quedan en la memoria), pero en este caso, debido al error de entrada, la variable edad se queda con su valor predeterminado, que es 0 para los tipos numéricos como int.
*/ 

#include <iostream>
#include <string>
int main() {

  // int edad;
  // std::cout << "Ingresa tu edad: ";
  // std::cin >> edad; // <- std::cin es el flujo de entrada, que se utiliza para recibir datos del usuario a través del teclado.
  // std::cout << "Tu edad es: " << edad << " años" << std::endl;

  int edad = 20;
  // if(edad >= 18) {
  //   std::cout << "Sos mayor" << std::endl;
  // } else {
  //   std::cout << "Sos menor" << std::endl;
  // }

  // int nota = 92;
  // if (nota >= 90) {
  //   std::cout << "Excelente" << std::endl;
  // } else if( nota >= 70) {
  //   std::cout << "Aprobado" << std::endl;
  // } else {
  //   std::cout << "Reprobado" << std::endl;
  // }

  //Ambas condiciones deben ser verdaderas para que el bloque de código dentro del if se ejecute.
  //conque una de ellas sea falsa, el permiso sera denegado.
  // bool tieneIdentificacion = true;
  // if (edad >= 18 && tieneIdentificacion) {
  //   std::cout << "Puedes entrar a la discoteca" << std::endl;
  // } else {
  //   std::cout << "No puedes entrar a la discoteca" << std::endl;
  // }

  int hora = 14;
  if(hora >= 6 && hora < 12) {
    std::cout << "Buenos días" << std::endl;
  } else if (hora >= 12 && hora < 18) {
    std::cout << "Buenas tardes" << std::endl;
  } else {
    std::cout << "Buenas noches" << std::endl;
  }

  

}