#include <stdio.h>
#include <stdlib.h>

void sumar(int a, int b);

int main() {

    int a,b; 
	printf ("Bienvenido... Ingrese 2 numeros!");
    printf ("Primer numero: ");   
	scanf ("%d",&a); 
    printf ("Segundo numero: ");  
	scanf ("%d",&b); 
	
    //implementar resta, multiplicacion, division
    sumar(a,b);
   
    return (EXIT_SUCCESS);
}


void sumar(int a, int b){
     printf ("La suma es: %d",a+b); 
}

