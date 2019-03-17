Desarrollar los siguientes ejercicios mediante programa C usando la función C:

1. **Mostrar por pantalla su nombre y apellido**
2. **Realizar el programa del item 1 y 2 usando DEFINE. Mostrar por pantalla**
3. **Listar las materias de primer año del primer cuatrimestre la carrera una debajo de la otra**

```c

#define NOMBRE "ALEXIS"

#define APELLIDO "SCHMOKER"

int main(void) {
  printf("Schmoker Alexis\n");
  printf("Nombre: %s \nApellido: %s", NOMBRE, APELLIDO);
  printf("Materias de primer año:\n");
  printf("Programación I\n");
  printf("Matematicas\n");
  printf("Laboratorio de Computación\n");
  printf("Inglés I\n");
  printf("Taller de Computación\n");
}
```