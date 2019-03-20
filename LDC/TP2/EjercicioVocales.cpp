#include <stdio.h>

/**
*Pide un caracter un caracter por pantalla y comprueba si es una vocal
**/

int main() {
  char letra;
  printf("Ingrese una letra");
  scanf("%c", &letra); //ingresamos la vocal
  if(letra == 'a' || letra == 'e' || letra=='i' || letra == 'o' || letra == 'u'){ //comparamos
    printf("El caracter ingresado es una vocal");
  } else { // sino es una vocal
    printf("El caracter ingresado no es una vocal");
  }
  return 0;
}