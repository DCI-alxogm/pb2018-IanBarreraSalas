#include<stdio.h>
int main( int argc, char *argv[]) {
	printf("El programa que estas ejecutando es: %s\n", argv[0]);
	if( argc==2) {
		printf("El agumento que se te dio es: %s\n", argv[1]);
				}
				else if (argc>2){
				printf("mas argumentos de los necesarios\n");
				}
				else {
				printf("Se requiere d al meno 1 argumento \n");
				}
				return 0;
				}
