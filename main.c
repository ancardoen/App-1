#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Creamos la estructura que seguira cada libro guardado
struct inventario{
    char *titulo;
    char *autor;
    int anio;
    int estante_numero;
    char *estante_seccion;
    int piso;
    char *edificio;
    char *sede;
};

// Declaramos cada void que se utilizara ams adelante
void Ver_la_base_de_datos(FILE *file);
void Agregar_libro_nuevo(FILE *file);
void Quitar_un_libro(FILE *file);
void Agregar_una_sede(FILE *file);
void Quitar_una_sede(FILE *file);
void Editar_un_libro(FILE *file);
void Cambiar_libro_de_sede(FILE *file);
void Cambiar_libro_de_seccion(FILE *file);
void Cambiar_libro_de_piso(FILE *file);
void Agregar_una_seccion(FILE *file);
void Eliminar_una_seccion(FILE *file);
void Agregar_piso(FILE *file);
void Eliminar_piso(FILE *file);
void Buscar_un_libro(FILE *file);
//Tambien creamos una flag que se utilizara como metodo de salida del do while
int flag = 1;

FILE * openingFile(char *filename){
    FILE *fp;
    fp = fopen(filename,"r");
    return fp;
}

int main(int argc, char *argv[]) {
    int opc;
    FILE *fp = openingFile(argv[1]);
    //aqui aplicar estructura de struct inventario al fp
    while (flag == 1){
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
        switch (opc) {
            case 1:
                printf("Opcion 1 seleccionada");
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
                printf("Intentelo nuevamente\n");
                break;
        }
    };
    fclose(fp);
    return 0;
}

void Ver_la_base_de_datos(FILE *file){
    printf("Elegiste la opcion 1");
};

void Agregar_libro_nuevo(FILE *file){

};

void Quitar_un_libro(FILE *file){

};

void Agregar_una_sede(FILE *file){

};

void Quitar_una_sede(FILE *file){

};

void Editar_un_libro(FILE *file){

};
void Cambiar_libro_de_sede(FILE *file){

};

void Cambiar_libro_de_seccion(FILE *file){

};

void Cambiar_libro_de_piso(FILE *file){

};

void Agregar_una_seccion(FILE *file){

};

void Eliminar_una_seccion(FILE *file){

};

void Agregar_piso(FILE *file){

};

void Eliminar_piso(FILE *file){

};

void Buscar_un_libro(FILE *file){

};