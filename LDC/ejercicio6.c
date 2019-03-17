#include <stdio.h>

int main() {
	float presupuesto;
	printf("ingrese el presupuesto");
	scanf("%f", &presupuesto);
	printf("Presupuesto anual: %.2f\n", presupuesto);
	printf("Area de ginecologia: %.2f\n", presupuesto*0.40);
	printf("Area de traumatologia: %.2f\n", presupuesto*0.30);
	printf("Area de pediatria: %.2f\n", presupuesto*0.30);
}
