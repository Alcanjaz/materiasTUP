Dada la siguiente información: 

```c
int a = 7;
float b = 8.2;
char c = 's';
```
¿Cual es la diferencia entre las dos salidas? ¿Qué significa \t?

```c
printf("%d%f%c \n", a,b,c); // 78.200000s
printf("%d \t %f \t %c", a,b,c); // 7    8.200000    s
// \t equivale a un tabulado
```

