#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	
	printf("Soy el proceso P\n");

	int a = 5;
	int b = 2;

	execlp("pwd", "pwd", (char*)NULL); // Mutar a ls
	// Se ejecuta ls por consola

	printf("Día Soleado\n");

	printf("Papel\n");
}
