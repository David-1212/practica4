#include<stdio.h>
void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma=0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i",&enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n",enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma=suma+enteros[i];
    }
    printf ("suma: %i'\n",suma);
    printf("promedio: %.2f\n",suma/5.0);
    
}

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
         switch (opc)
        {
        case '1':
            capturar_enteros();
            break;
        case 2:
            break;
        case 3:
            break;
        
        default:
            break;
        }
       
    } while (opc!='0');
    
   

    return 0;
}
