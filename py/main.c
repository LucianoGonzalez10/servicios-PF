#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

int const dimNs=30;
int const dimDs=300;
void desplegarInformacion(char servicioN[][dimNs], char servicioD[][dimDs]);
void cargarInfo(char servicioN[][dimNs], char servicioD[][dimDs]);
void verServicios();

int main()
{
    char serviciosN [6][dimNs];
    char serviciosD [6][dimDs];
    cargarInfo(serviciosN, serviciosD);
    verServicios();
    desplegarInformacion(serviciosN, serviciosD);
    return 0;
}

void verServicios()
{
    printf("\n");
    printf("                  SERVICIOS DISPONIBLES: \n");
    printf("-------------------------------------------------------------\n");
    printf("Sauna                  (Ingrese 1 para mas informacion) \n");
    printf("-------------------------------------------------------------\n");
    printf("Masajes                (Ingrese 2 para mas informacion) \n");
    printf("-------------------------------------------------------------\n");
    printf("Manicura               (Ingrese 3 para mas informacion) \n");
    printf("-------------------------------------------------------------\n");
    printf("Pedicura               (Ingrese 4 para mas informacion) \n");
    printf("-------------------------------------------------------------\n");
    printf("Tratamientos faciales  (Ingrese 5 para mas informacion)\n");
    printf("-------------------------------------------------------------\n");
    printf("Depilacion             (Ingrese 6 para mas informacion)\n");
    printf("-------------------------------------------------------------\n");
    printf("Ingrese 7 para regresar al menu anterior \n");
    printf("-------------------------------------------------------------\n");
}

void cargarInfo(char serviciosN[][dimNs], char serviciosD[][dimDs]){
    strcpy(serviciosN[0], "Sauna");
    strcpy(serviciosD[0],"Tratamiento de reconstruccion fisiologica, con una temperatura de 60°, tiempo maximo de 10 mins");

    strcpy(serviciosN[1], "Masajes");
    strcpy(serviciosD [1],"Aplastamiento de musculos");

    strcpy(serviciosN[2], "Manicura");
    strcpy(serviciosD [2],"Deja tus manos hermosas");

    strcpy(serviciosN[3], "Pedicura");
    strcpy(serviciosD [3],"Deja tus pies hermosos");

    strcpy(serviciosN[4], "Tratamientos Faciales");
    strcpy(serviciosD [4],"Deja tu cara hermosa");

    strcpy(serviciosN[5], "Depilacion");
    strcpy(serviciosD [5],"Te dejamos con menos pelos que un huevo");
}
void desplegarInformacion(char servicioN[][dimNs], char servicioD[][dimDs])
{
    int num = 0;
    scanf("%i", &num);
    switch(num)
    {
    case 1:
        printf("| %s |", servicioN[num-1]);
        printf("| %s |", servicioD[num-1]);
        break;

    case 2:
        printf("| %s |", servicioN[num-1]);
        printf("| %s |", servicioD[num-1]);
        break;

    case 3:
        printf("| %s |", servicioN[num-1]);
        printf("| %s |", servicioD[num-1]);
        break;

    case 4:
        printf("| %s |", servicioN[num-1]);
        printf("| %s |", servicioD[num-1]);
        break;

    case 5:
        printf("| %s |", servicioN[num-1]);
        printf("| %s |", servicioD[num-1]);
        break;

    case 6:
        printf("| %s |", servicioN[num-1]);
        printf("| %s |", servicioD[num-1]);
        break;
    case 7:
        break;
    }
}

