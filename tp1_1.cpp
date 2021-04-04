#include <stdio.h>

int main()
{
    int variable=15;
    int *punt_var;
    punt_var = &variable;
    
    printf("El contenido del puntero es: %d\n", *punt_var);
    printf("La direccion de memoria almacenada por el puntero es: %p\n", punt_var);
    printf("La direccion de memoria de la variable es: %p\n", &variable);   
    printf("La direccion de memoria del puntero es: %p\n", &punt_var);
    printf("El tamaño de memoria utilizado por la variable es: %d\n", sizeof(int));
    
    return 0;
}