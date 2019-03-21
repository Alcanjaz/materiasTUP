// #include <stdio.h>

// int main(){
//   int i = 10, j=5, k = -1;
//   char c1 = 'w', c2 = '?';
//   //(c1 == 119) && (c2 == '?') Es falso, la variable c1 no vale 119, vale 'w'
//   //((i > 10) || (k<=0) && (c1 == 'w') && (c2 == 63)) Falso, c2 no vale 63, vale '?' e i no es menor a 10
//   //((i > 9) && (k <= -1)) && ((c1=='t') || (c2 == 63)) Falso, las condiciones 1 y 3 no se cumplen
//   //((i > 9) && (k <= -1)) && ((c1=='t') || (c2 == 65)) Falso, las condiciones 1 y 3 no se cumplen
//   //(k == -2 || (i < 20) (j != 5) || (c1 == 'w') || (c2==63)) Verdadero, al menos una de las condiciones se cumple
//   //((k+j) == 3) && ((i+j-2) == 17) Falso, i+j-2 es igual a 13, no 17
// }