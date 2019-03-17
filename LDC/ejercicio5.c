#include <stdio.h>
#include <math.h>

int main() {
	int num ,pot;
	float div1, div2;
	printf("ingrese un numero entero");
	scanf("%d", &num);
	div1 = num/5;
	div2 = (div1)/2;
	pot = pow(num, 2);
	printf("la quinta parte es %.1f\n", div1);
	printf("La mitad de la quinta parte es %.1f\n", div2);
	printf("El cuadrado del numero es %d", pot);
}
