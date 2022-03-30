#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct inventario{
    char titulo[170];
    char autor[50];
    int anio;
    int estante_numero;
    char estante_seccion[50];
    int piso;
    char edificio[10];
    char sede[50];
};


void Ver_la_base_de_datos;
void Agregar_libro_nuevo;
void Quitar_un_libro;
void Agregar_una_sede;
void Quitar_una_sede;
void Editar_un_libro;
void Cambiar_libro_de_sede;
void Cambiar_libro_de_seccion;
void Cambiar libro de seccion;
void Cambiar_libro_de_piso;
void Agregar_una_seccion;
void Agregar_piso;
void Eliminar_piso;
void Buscar_un_libro;

int flag = 1;



int main(int argc, char *argv[]){
    int opc, n;

    do{
        system("cls");
        printf("Menu de opciones\n");
        printf("1) Ver la  base de datos\n");
        printf("2) Agregar libro nuevo\n");
        printf("3) Quitar un libro\n");
        printf("4) Agregar una sede\n");
        printf("5) Quitar una sede\n");
        printf("6) Editar un libro\n");
        printf("7) Cambiar libro de sede\n");
        printf("8) Cambiar libro de seccion\n");
        printf("9) Cambiar libro de piso\n");
        printf("10) Agregar una seccion\n");
        printf("11) Eliminar una seccion\n");
        printf("12) Agregar piso\n");
        printf("13) Eliminar piso\n");
        printf("14) Buscar un libro\n");
        printf("ingrese la opcion que quiera realizar: \n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                break;
            case 2:
                printf("\n 2");
                break;
            case 3:
                printf("\n 3");
                break;
            case 4:
                printf("\n 4");
                break;
            case 5:
                printf("\n 5");
                break;
            case 6:
                printf("\n 6");
                break;
            case 7:
                printf("\n 7");
                break;
            case 8:
                printf("\n 8");
                break;
            case 9:
                printf("\n 9");
                break;
            case 10:
                printf("\n 10");
                break;
            case 11:
                printf("\n 11");
                break;
            case 12:
                printf("\n 12");
                break;
            case 13:
                printf("\n 13");
                break;
            case 14:
                printf("\n 14");
                break;
            default:
                printf("Ingrese una opcion valida porfavor\n");
                break;

        }
    }while(flag == 1);
};

void Ver_la_base_de_datos{

};

void Agregar_libro_nuevo{

};

void Quitar_un_libro{

};

void Agregar_una_sede{

};

void Quitar_una_sede{

};

void Editar_un_libro{

};

void Cambiar_libro_de_sede{

};

void Cambiar_libro_de_seccion{

};

void Cambiar libro de seccion{

};

void Cambiar_libro_de_piso{

};

void Agregar_una_seccion{

};

void Agregar_piso{

};

void Eliminar_piso{

};

void Buscar_un_libro{

};