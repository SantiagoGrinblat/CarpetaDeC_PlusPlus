#include <iostream>
#include <string>

int main() {

  int MiVector[3] = {32, 45, 35};

  //matriz de 2 filas y 5 valores
  //Una matriz bidimensional (una tabla).
  //"2 filas y 5 valores (columnas) por fila".
  int miMatriz[2][5] = { {2,4,6,8,10}, {1,3,5,7,9} };

  //matriz de 2 filas, 5 columnas y 3 valores por cada columna.
  //El primer [2]: Imagina como "Páginas" o "Bloques". Tenes 2 bloques de datos.
  //El segundo [5]: Cada bloque tiene 5 filas.
  //El tercero [3]: Cada celda de esa fila guarda un grupito de 3 números.
  int miOtraMatriz[2][5][3] = { 
    {
      {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}, {13,14,15}
    },
    {
      {16,17,18}, {19,20,21}, {22,23,24}, {25,26,27}, {28,29,30}
    }
  };

  for (int i = 0; i < 3; i++)
  {
    std::cout << MiVector[i] << std::endl;
  }

    std::cout << "----------------- ACA ARRANCA OTRA COSA" << std::endl;

  //el 2 hace referencia a las filas, el 0 a la primera columna.
  for (int i = 0; i < 2; i++)
  {
    std::cout << miMatriz[i][0] << std::endl;
    //esto me va a mosrar los primeros 2 numeros de cada fila, por eso se pone el I en el primer corchete y el 0 en el segundo.
    //porque en el seguno NO quiero que me muestre nada.
  }

  std::cout << "----------------- ACA ARRANCA LA OTRA" << std::endl;

  //el 5 hace referencia a las columnas, el 0 a la primera fila.
  for (int j = 0; j < 5; j++) {
    std::cout << miMatriz[0][j] << std::endl;
  }
  //esto me va a mosrar los primeros 5 numeros de la primera fila, por eso J en el segundo. porque hago referencia a las columnas. 
  //y el 0 en el primer corchete porque quiero que NO muestre la primera fila.

    std::cout << "----------------- ACA ARRANCA LA OTRA" << std::endl;

  //F hace referencia a las filas. 
  //C a las columnas.
  //primero accedo a las filas y dentro de las filas accedo a las columnas
  for (int f = 0; f < 2; f++) {
    for (int c = 0; c < 5; c++){
      std::cout << miMatriz[f][c] << std::endl;
    }
  }

  //sumar todos los elementos de la matriz
  // int suma = 0;
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     suma += miMatriz[i][j];
  //   }
  // }
  // std::cout << "La suma de todos los elementos de la matriz es: " << suma << std::endl;


}