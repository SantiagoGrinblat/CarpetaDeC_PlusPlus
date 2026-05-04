#include <iostream>
#include <string>

//funcion para leer un vector
void leerVector(int vectorALeer[], int cantidad) {
	for(int i = 0; i < cantidad; i++) {
		std::cout << "Ingresa un valor para la posicion " << i << ": ";
		std::cin >> vectorALeer[i];
	}
}

//funcion que recibe como parametro un vector.
void imprimirVector(int unVector[], int tamaño) {
	for(int i = 0; i < tamaño; i++) {
		std::cout << "Se agrega el valor de " << unVector[i] << " en la posicion " << i << std::endl;
	}
}

int main() {  

	// int vector[4] = {-15, 30, 90, 120};
	// std::cout << "el primer vector es: " << vector[2] << std::endl;

	// std::cout << "todos los elementos juntos son: " << std::endl;
	// for (int i = 0; i < 4; i++) {
	// 	std::cout << vector[i] << std::endl;
	// }

	int vector[5];

	// for (int i = 0; i < 5; i++){
	// 	std::cout << "Ingresa un valor para la posicion " << i << ": ";
	// 	std::cin >> vector[i];
	// }

	// for (int i = 4 ; i >= 0; i--) {
	// 	std::cout << "El valor de la posicion es " << i << " es:" << vector[i] << std::endl;
	// }

	//funcion para leer un vector, que hace exactamente lo mismo que el for de arriba, pero con una funcion, para no repetir codigo.
	leerVector(vector, 5);

	//funcion que recibe como parametro un vector.
	//hace exactamente lo mismo que el for de arriba, pero con una funcion, para no repetir codigo.
	imprimirVector(vector, 5);


}
