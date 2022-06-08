#include <stdio.h>

void control_error();
void codigoHijo(int );

// Esquema Secuencial

#define num_procs 2
int main(){
	int i, ret;
	for (i = 0; i < num_procs, i++){
		if ((ret=fork())<0)
			control_error(); // Hubo un error
		if (ret == 0){ // Si es igual a 0 es el hijo
			// estas líneas solo las ejecuta el hijo
			codigoHijo(i);
			exit(0); // Finalizamos el proceso hijo
		}
		waitpid(-1, NULL, 0); // El padre espera a que el hijo acabe
		// Espera a que termine la iteración del hijo
	}
	return 0;
}

void control_error(){
	printf("Hubo un error\n");
}

void codigoHijo(int i){
	printf("El hijo se esta ejecutando %d\n", i);
}