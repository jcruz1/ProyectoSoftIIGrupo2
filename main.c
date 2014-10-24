#include <stdio.h>
#include <stdlib.h>

void mod_funcion(int a, int b);
int main() {

    int a,b; 
	printf ("Bienvenido... Ingrese 2 numeros!");
    printf ("Primer numero: ");   
	scanf ("%d",&a); 
    printf ("Segundo numero: ");  
	scanf ("%d",&b); 
	mod_funcion(a,b);
    //implementar resta, multiplicacion, division
   
   
    return (EXIT_SUCCESS);
}

void mod_funcion(int a, int b){
	printf("El mod de %d con %d es: %d",a,b,a%b);
}