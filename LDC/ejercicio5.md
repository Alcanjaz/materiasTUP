**Ejercicio 5

1. Escribir un algoritmo que intercambie el valor entre dos datos. Ejemplo, si A=2 y B=5, deberá mostrar B=2 y A=5.
```c
int num1, num2, aux;
scanf("%d", &num1);
scanf("%d", &num2);
printf("Número 1: %d\nNúmero 2: %d\n", num1, num2);
aux = num1;
num1 = num2;
num2 = aux;
printf("Número 1: %d\nNúmero 2: %d", num1, num2);
```
2. Ingresar dos valores enteros y calcular la suma, la diferencia y el producto. Mostrar por pantalla cada uno de los resultados obtenidos.
```c
int num1, num2;
scanf("%d", &num1);
scanf("%d", &num2);
printf("SUMA: %d\n", num1 + num2);
printf("RESTA: %d\n", num1 - num2);
printf("MULTIPLICACIÓN: %d\n", num1 * num2);
```

3. Ingresar un valor entero por teclado, calcular y mostrar por pantalla:
    * La quinta parte de dicho valor.
    * La mitad de la quinta parte.
    * El cuadrado de dicho valor. 

```c
float num;
scanf("%f", &num);
printf("QUINTA PARTE: %.2f\n", num/5);
printf("MITAD DE LA QUINTA PARTE: %.2f\n", (num/5)/2);
printf("CUADRADO: %.2f\n", pow(num, 2));
```
4. Calcular el promedio de 3 números que se ingresan por teclado
```c
float num1, num2, num3;
scanf("%f", &num1);
scanf("%f", &num2);
scanf("%f", &num3);
printf("PROMEDIO: %.2f", (num1 + num2 + num3)/3);
```
