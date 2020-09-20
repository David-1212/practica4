#include<stdio.h>

int main()
{
    char opc;
    do
    {
        printf("1.- capturar enteros\n");
        printf("2.- Mostrar cadena n veces \n");
        printf("3.-Agregar personaje\n");
        printf("1.- capturar enteros\n");
        printf("0.- salir \n");
        scanf("%c",&opc);
        fflush(stdin);
       
    } while (opc!='0');
    
   

    return 0;
}
