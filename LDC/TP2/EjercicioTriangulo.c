#include <stdio.h>

int main(){
  int lado1, lado2, lado3;
  printf("Ingrese los 3 valores del triangulo\n");
  scanf("%d %d %d", &lado1, &lado2, &lado3);
  if(lado1 < 0 || lado2 < 0 || lado3 < 0){
    printf("no se pueden ingresar valores menores de 0");
  } else{
    if(lado1 == lado2 && lado1==lado3){
      printf("Es un triangulo equilatero");
    } else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
      printf("Es un triangulo isosceles");
    } else {
      printf("Es un triangulo escaleno");
    }
  }
  return 0;
}