#include <stdio.h>
#include <stdlib.h>

void multiplicar(int a, int b);
int main() {

    int a,b; 
	printf ("Bienvenido... Ingrese 2 numeros!");
    printf ("Primer numero: ");   
	scanf ("%d",&a); 
    printf ("Segundo numero: ");  
	scanf ("%d",&b); 
	
    //implementar resta, multiplicacion, division
   
   multiplicar(a,b);
    return (EXIT_SUCCESS);
}
void multiplicar(int a, int b){
	printf("La multiplicación es: %d", a*b);
}


