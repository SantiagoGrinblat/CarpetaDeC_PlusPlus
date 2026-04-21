//Cada vez que quiera mostrar la respuesta del codigo en la termina tengo que hacer.
//todo: g++ [nombre del archivo].cpp -o main && ./main
//cada vez que hago un cambio en el codigo necesito guardar el codigo, con ( command + s ) y luego volver a ejecutar el comando de arriba para ver los cambios reflejados en la terminal.

//todo 1. El #include (La importación)
//Es una directiva para el preprocesador. Básicamente le dice al compilador: "Antes de empezar a leer mi código, andá a buscar un archivo que ya existe y pegá todo su contenido acá arriba".
//Es muy similar al import que usás en Kotlin, pero en C++ literalmente "incluye" el código de otro lado en el tuyo.

//todo 2. El <iostream> (La biblioteca)
//Su nombre viene de Input/Output Stream (Flujo de Entrada y Salida).
//Input (Entrada): Para recibir datos (normalmente a través de std::cin).
//Output (Salida): Para mostrar datos (a través de std::cout).
//Stream (Flujo): En C++, los datos se ven como un "río" o flujo de caracteres que fluyen hacia la pantalla o desde el teclado.

//todo 3. ¿Qué es std? (El Espacio de Nombres)
//std es la abreviatura de Standard (Estándar). En C++, casi todas las herramientas oficiales del lenguaje están guardadas dentro de un "paquete" o contenedor llamado std.
//Para qué sirve: Evita conflictos. Si vos creás una función llamada cout por tu cuenta, C++ no se confunde porque la oficial es std::cout.
//Analogía: Pensalo como un apellido. Hay muchos "Juan", pero si digo "Pérez::Juan", ya sabés exactamente de quién hablo.

//todo 4. ¿Qué son los dos puntos ::? (Operador de Resolución de Ámbito)
// Se llaman Scope Resolution Operator. Sirven para "entrar" en el contenedor.
// Cuando escribís std::cout, le estás diciendo al compilador: "Buscá la herramienta cout que está adentro del espacio std".

//todo 5. ¿cout o count? (Cuidado con el nombre)
// Como vimos antes, el nombre correcto es cout.
// C = Character (Carácter)
// OUT = Output (Salida)
// Significado: "Salida de caracteres hacia la pantalla".
// Nota: count es otra función totalmente distinta que sirve para contar cosas en listas, así que no la confundas con cout. 
//Es como si tuvieras dos amigos llamados "Juan" y "Juana". Uno es cout (el que muestra cosas) y el otro es count (el que cuenta cosas). No los mezcles o te vas a confundir.
//cout = salida de estos datos.
//count = cuenta estos datos

//todo 6. ¿Qué son las flechitas <<? (Operador de Inserción)
// No son simples adornos. Representan la dirección hacia donde fluyen los datos.
// En std::cout << "Hola", imaginalo como una cinta transportadora: el texto "Hola" se está "insertando" en el flujo de salida (cout) para que termine en tu monitor.

//todo 7. ¿Qué es eso de "Entrada y Salida"? (Input/Output)
// En programación, siempre pensamos en el flujo de información respecto al programa:
// Salida (Output / cout): Es la información que sale desde el código hacia el mundo exterior (pantalla, un archivo, una impresora).
// Entrada (Input / cin): Es la información que entra desde el mundo exterior (teclado, un sensor, un mouse) hacia tu código.

// todo 8. ¿Qué es std::endl?
// Es el compañero de cout.
// End = Final
// L = Line (Línea)
// Función: Hace un salto de línea (como presionar Enter) y "limpia" el flujo para asegurarse de que el texto aparezca inmediatamente en pantalla.

//todo 9. Declaracion y asignacion de variables.
//primer se pone el tipo de dato que es, int, float, double, char, string, bool, etc. Luego el nombre de la variable y opcionalmente se le puede asignar un valor inicial.
// 1. int x = 5; (Declaración con Inicialización)
// Esta es la más común y la más "limpia". Estás haciendo dos cosas en un solo paso:
// Creás el espacio en memoria (Declaración).
// Le das un valor inicial (Inicialización).
// Cuándo usarla: Cuando ya sabés desde el principio qué valor va a tener la variable. Es más eficiente y evita que la variable tenga "basura" (valores aleatorios que quedan en la memoria).

// 2. int x; y luego x = 5; (Declaración y Asignación)
// Acá hacés los pasos por separado:
// int x;: Le decís a la computadora: "Reservame un espacio para un entero llamado x". En este momento, x no tiene un valor definido (tiene lo que haya quedado en ese pedacito de memoria).
// x = 5;: Guardás el 5 en ese espacio que reservaste antes (Asignación).
// Cuándo usarla: Cuando todavía no sabés el valor (por ejemplo, si vas a pedirle al usuario que lo ingrese por teclado con std::cin).

// 3. los datos de tipo string se declaran con std::string, que es una clase que maneja texto.
//Para usarla y no tener problemas, tenés que incluir la biblioteca = #include <string> / al principio de tu código. 
//Es como decirle a tu programa: "che, quiero usar palabras y frases, así que tráeme la caja de herramientas para eso".



#include <iostream>
#include <string>
int main() {

  // std::cout << "Hola Mundo" << std::endl;
  // std::cout << "Este es otro flujo de datos" << std::endl;
  // std::cout << "otro text" << std::endl;

  // int x = 5;
  // int y = 10;
  // int suma = x + y;
  
  // std::cout << "El valor de X es: " << x << std::endl;
  // std::cout << "El valor de Y es: " << y << std::endl;
  // std::cout << "La suma de X y Y es: " << suma << std::endl;

  // std::string nombre = "Santiago";
  // std::cout << "Mi nombre es: " << nombre << std::endl;

  //programa para calcular la circunferencia de un circulo 

  //const double pi = 3.14159; // <- es una constante, porque el valor de pi no va a cambiar, siempre va a ser 3.14159. Las constantes se declaran con la palabra reservada const, lo que le dice a la computadora que ese valor no puede ser modificado después de su inicialización.
  //double radio = 10;  // <- es una variable, porque el valor del radio puede cambiar dependiendo del circulo que queramos calcular la circunferencia.
  //double circunferencia = 2 * pi * radio;  // <- es una variable, porque el valor de la circunferencia va a cambiar dependiendo del valor del radio que le asignemos. La formula para calcular la circunferencia de un circulo es 2 * pi * radio.

  // std::cout << "El valor de la circunferencia es: " << circunferencia  <<" centimentos" << std::endl;

  
}
