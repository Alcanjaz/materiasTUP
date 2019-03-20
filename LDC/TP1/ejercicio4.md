**Ejercicio n°4:** Desarrollar los siguientes ejercicios mediante programa en C usando la función printf y scanf

1. Ingresar por teclado una variable entera y mostrarla por pantalla.

```c
int num;
scanf("%d", &num);
printf("Número ingresado: %d", num);
```

2. Ingresar por teclado dos variables enteras y mostrarlas por pantalla en forma separada.

```c
int num1, num2;
scanf("%d", &num1);
scanf("%d", &num2);
printf("Número 1: %d\nNumero 2: %d", num1, num2);
```

3. Modificar el programa anterior y agregarle el cálculo del producto de ambas variables. Mostrar el resultado por pantalla.

```c
int num1, num2;
scanf("%d", &num1);
scanf("%d", &num2);
printf("Resultado: %d", num1 * num2);
```

4. Modificar el programa anterior y agregarle el cálculo de la suma de ambas variables. Mostrar el resultado por pantalla.

```c
int num1, num2;
scanf("%d", &num1);
scanf("%d", &num2);
printf("Resultado: %d", num1 + num2);
```


5. Modificar el programa que multiplique por 2 el resultado de la suma y muestre en pantalla el resultado obtenido.

```c
int num1, num2;
scanf("%d", &num1);
scanf("%d", &num2);
printf("Resultado: %d", (num1 + num2)*2);
```