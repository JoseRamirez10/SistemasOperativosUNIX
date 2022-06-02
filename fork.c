#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){

	// Programa A (Padre)
	printf("Hola\n");

	// Crear un nuevo proceso hijo
	int p = fork(); // Programa B (Hijo)

	if (p == 0){ // Código hijo
		printf("Soy el hijo\n");
	}if (p < 0){ // Código error
		printf("Error en el Fork\n");
	}else{ // Codigo padre
		printf("Soy el padre\n");
	}
}