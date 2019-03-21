#include <stdio.h>

int main(){
  char car1, car2, car3;
  printf("Ingrese 3 caracteres\n");
  scanf("%c %c %c", &car1, &car2, &car3);
  if(car1 == car2 && car1==car3){
    printf("los 3 caracteres son iguales");
  } else if(car1 == car2 || car1 == car3 || car2 == car3){
    printf("dos caracteres son iguales");
  } else {
    printf("no son iguales");
  }
  return 0;
}