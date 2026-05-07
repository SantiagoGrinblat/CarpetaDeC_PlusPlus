#include <iostream>
#include <string>  // entrada y salida de datos, manejo de cadenas
#include <map>  // contendo map=  manejo de mapas (asociaciones clave-valor)
#include <vector>  // manejo de vectores (listas / arreglos dinámicos)
#include <algorithm>  // funciones algorítmicas
#include <functional>  // objetos funcionales

int main() {
  //VECTOR = Crear y mostrar
  std::vector<int> numeros = {3, 1, 4, 2};
  std::vector<int> otroVector = {6, 7, 8};

  numeros.push_back(5); // con push_back agregamos un elemento al final del vector
  numeros.back() = 10; // con back accedemos al último elemento del vector y lo modificamos (del 5 a 10)
  //todo: numeros.pop_back(); // con pop_back eliminamos el último elemento del vector (en este caso, el número en la última posición se elimina)
  //todo: numeros.cend(); // con cend obtenemos un iterador constante al final del vector (no se puede modificar el vector a través de este iterador)
  //todo: numeros.front() = 0; // con front accedemos al primer elemento del vector y lo modificamos (del 3 a 0)
  numeros.insert(numeros.begin() + 2, 9); // con insert insertamos un elemento en una posición específica (en este caso, el número 9 en la posición 2)
  numeros.erase(numeros.begin() + 1); // con erase eliminamos un elemento en una posición específica (en este caso, el número en la posición 1)
  numeros.pop_back(); // con pop_back eliminamos el último elemento del vector (en este caso, el número 10)
  //numeros.swap(otroVector); // con swap intercambiamos el contenido de dos vectores (en este caso, el mismo vector consigo mismo, por lo que no cambia nada)
  //pero en caso de tener un segundo vector estos valores si se intercambiarian. 
  //por ejemplo: std::vector<int> otroVector = {6, 7, 8}; y luego hacer numeros.swap(otroVector);
  //entonces el contenido de numeros (primer vector) sería {6, 7, 8} y el contenido de otroVector (segundo vector) sería {0, 9, 4, 2}
  //todo:  numeros.clear(); // con clear eliminamos todos los elementos del vector (en este caso, el vector numeros quedaría vacío)
  //todo:  otroVector.clear(); // con clear eliminamos todos los elementos del vector (en este caso, el vector otroVector quedaría vacío)
  //para eliminar solo necesitamos llamar al vector que queremos vaciar, no es necesario llamar a ambos vectores si solo queremos vaciar uno de ellos.
  numeros.resize(5); // con resize cambiamos el tamaño del vector 
  //en este caso, el vector numeros se redimensiona a 5 elementos, si el nuevo tamaño es mayor que el actual, se agregan elementos con valor predeterminado, si es menor, se eliminan elementos del final
  //todo: numeros.shrink_to_fit(); // con shrink_to_fit reducimos la capacidad del vector al tamaño actual (en este caso, el vector numeros ajusta su capacidad para que sea igual a su tamaño actual, lo que puede liberar memoria no utilizada)
  //todo: numeros.reserve(10); // con reserve reservamos espacio para un número específico de elementos (en este caso, el vector numeros reserva espacio para al menos 10 elementos, lo que puede mejorar el rendimiento al evitar múltiples redimensionamientos a medida que se agregan elementos)
  //todo: numeros.assign(3, 7); // con assign asignamos un nuevo contenido al vector (en este caso, el vector numeros se llena con 3 elementos, cada uno con el valor 7)
  numeros.at(1) = 5; // con at accedemos a un elemento en una posición específica y lo modificamos (en este caso, el número en la posición 1 se cambia a 5)
  numeros[0] = 0; // con el operador [] accedemos a un elemento en una posición específica y lo modificamos (en este caso, el número en la posición 0 se cambia a 0)
  //todo: numeros.data()[2] = 8; // con data accedemos al arreglo subyacente del vector y modificamos un elemento específico (en este caso, el número en la posición 2 se cambia a 8)


  //recorremos un vector con un bucle for-each (rango basado en bucles) para mostrar sus elementos
  std::cout << "Elementos del vector: ";
  for (int i : numeros) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  //ejemplo adicional: llenar un vector con datos del usuario.
  int cantidad;
  std::cout << "\nCuantos numeros queres ingresar?";
  std::cin >> cantidad;

  std::vector<int> datos;
  for (int i = 0; i < cantidad; i++) {
    int valor;
    std::cout << "Ingresa un numero: ";
    std::cin >> valor;
    datos.push_back(valor); // Agrega el número ingresado al vector
  }

  std::cout << "Tus numeros ingresados fueron: ";
  for (int numeros : datos) {
    std::cout << numeros << " ";
  }
  std::cout << std::endl;

  //mostrar todos los elementos mas el agregado por el usuario
  std::cout << "Elementos del vector original mas los ingresados: ";
  for (int i : numeros) {
    std::cout << i << " ";
  }
  for (int i : datos) {
    std::cout << i << " ";
  }
  std::cout << std::endl;


  //STRINGS = concatenacion y recorrido

  std::string mensaje = "Hola ";
  mensaje += "Mundo"; 
  // porque se usa += para concatenar strings? Porque el operador += permite agregar el contenido de una cadena a otra de manera eficiente, modificando la cadena original en lugar de crear una nueva cadena cada vez que se concatena.
  //Esto es especialmente útil cuando se realizan múltiples concatenaciones, ya que evita la sobrecarga de crear y destruir objetos de cadena temporales, lo que puede mejorar el rendimiento del programa.
  std::cout << mensaje << std::endl; // Imprime "Hola Mundo"

  // Recorrer cada caracter de la cadena usando un bucle for-each (rango basado en bucles)
  std::cout << "Recorrer caracter por caracter: " << std::endl;
  for(char c : mensaje) {
    std::cout <<  "{"  << c <<  "}" << std::endl; // Imprime cada caracter en una nueva línea
  }
  std::cout << std::endl;

  //MAP = Clave-Valor con verificacion
  std::map<std::string, int> edades;
  edades["Santi"] = 30;
  edades["Maria"] = 25;
  edades["otro1"] = 50;
  edades["otro2"] = 15;
  
  std::cout << "Edad de Santi: " << edades["Santi"] << std::endl;
  std::cout << "Edad de Maria: " << edades["Maria"] << std::endl;

  //recorremos todas las entradas
  std::cout << "todas las edades:\n";
  for (const auto& par : edades) {
    std::cout << par.first << ": " << par.second << std::endl; // Imprime cada clave y su valor asociado
  }
  //con par.first accedemos a la clave (nombre) y con par.second accedemos al valor (edad) de cada entrada en el mapa

  //para verificar si tiene mas de 20 años
  for (const auto& par : edades) {
    if (par.second > 20) { // Verificamos si la edad es mayor a 20
      std::cout << par.first << " tiene más de 20 años." << std::endl; // Imprime el nombre de la persona si su edad es mayor a 20
    }
  }
  //se usa const auto& par para iterar sobre las entradas del mapa sin modificarlo, lo que es eficiente y seguro.
  //&auto se utiliza para evitar la copia de cada entrada del mapa, lo que mejora el rendimiento al trabajar con objetos más grandes. El uso de const garantiza que no se modifiquen las entradas del mapa durante la iteración.

  //El símbolo & (Referencia = Rendimiento)
  //Al poner el &, le dices: "No copies nada, solo mírame el dato original que ya está en la memoria". Es como usar un puntero láser para señalar el dato en lugar de fotocopiarlo. Por eso decimos que es eficiente.
  //aca es donde entra la seguridad. Al usar el &, estás trabajando con el dato real. Si por error escribieras par.second = 0; dentro del bucle, ¡estarías borrando la edad real en el mapa original!

  //Al poner const, le pones un "candado" a ese acceso.
  //Si intentas modificar algo por error, el compilador te vaará el paso y te dirá: "Dijiste que era constante, no puedes tocarlo". Por eso decimos que es seguro.

  //verificamos si existe una clave antes de acceder
  //en este caso el nombre de la persona es la clase y la edad es el valor asociado a esa clave en el mapa.
  std::string buscando = "otro2";
  if(edades.find(buscando) != edades.end()) {
    std::cout << "La edad de " << buscando << " es: " << edades[buscando] << std::endl; // Si la clave existe, se muestra su valor
  } else {
    std::cout << buscando << " no se encuentra en el mapa." << std::endl; // Si la clave no existe, se muestra un mensaje indicando que no se encontró
  }
  //es buena practica utilizar .find() para verificar la existencia de una clave en un mapa antes de acceder a su valor, ya que esto evita errores y garantiza que el programa maneje adecuadamente los casos en los que la clave no esté presente en el mapa.
  //con edades.find(buscando) buscamos la clave "Santi" en el mapa, si la función find devuelve un iterador diferente a edades.end(), significa que la clave existe en el mapa y podemos acceder a su valor, de lo contrario, si devuelve edades.end(), significa que la clave no se encuentra en el mapa.


  //ALGORITMOS = Ordenar y buscar vectores.
  std::vector<int> numerosDesordenados = {4, 2, 5, 1, 3};
  std::cout << "Numeros desordenados: " ;
  for(int i : numerosDesordenados) {
    std::cout << i << " "; // Imprime los números desordenados
  }
  std::cout << std::endl;

  //ORDEN ASCENDENTE
  // con sort ordenamos el vector en orden ascendente (en este caso, el vector numerosDesordenados se ordena de menor a mayor)
  //.begin() devuelve un iterador al primer elemento del vector 
  //.end() devuelve un iterador al elemento siguiente al último elemento del vector, lo que permite que la función sort sepa qué rango de elementos ordenar.
  std::sort(numerosDesordenados.begin(), numerosDesordenados.end()); 
  std::cout << "Numeros ordenados (ascendentes): ";
  for(int i : numerosDesordenados) {
    std::cout << i << " "; // Imprime los números ordenados
  }
  std::cout << std::endl;

  //ORDEN DESCENDENTE
  // con sort y std::greater<int>() ordenamos el vector en orden descendente (en este caso, el vector numerosDesordenados se ordena de mayor a menor)
  //std::greater<int>() es un objeto funcional que se utiliza como tercer argumento en la función std::sort para indicar que se desea ordenar los elementos en orden descendente. 
  //Al pasar std::greater<int>() a std::sort, le estás diciendo a la función que compare los elementos utilizando el operador > en lugar del operador <, lo que resulta en un ordenamiento de mayor a menor.
  std::sort(numerosDesordenados.begin(), numerosDesordenados.end(), std::greater<int>());
  std::cout << "Numeros ordenados (descendente): ";
  for(int i : numerosDesordenados) {
    std::cout << i << " "; // Imprime los números ordenados
  }
  std::cout << std::endl;
  return 0;

  //Busqueda 
  //con find buscamos un elemento específico en el vector (en este caso, el número 3) y obtenemos un iterador a su posición si se encuentra, o al final del vector si no se encuentra
  //auto es una palabra clave que permite al compilador deducir el tipo de la variable a partir de la expresión que se le asigna.
  //En este caso, el tipo de it será un iterador del mismo tipo que el vector numerosDesordenados.
  auto it = std::find(numerosDesordenados.begin(), numerosDesordenados.end(), 3);
  if (it != numerosDesordenados.end()) {
    std::cout << "El numero 3 se encuentra en el vector." << std::endl;
  } else {
    std::cout << "El numero 3 no se encuentra en el vector." << std::endl;
  }




}
