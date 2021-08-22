#include "scanner.h"

int tipo_token(char caracter){
    if(caracter == EOF){ 
        return FDT;
    }else if (caracter == ','){
        return SEP;
    }else if (caracter == '\n' || caracter == ' '){
        return 4; //no usé enum (aunque hubiera sido más claro) porque la consigna dice que el enum es solo para SEP,CAD y FDT.
    }

    return CAD;
}

void get_token(){
    char palabra[100];
    palabra[0]='\0';
    int indice = 0;

    char caracter = getchar();
    int token = tipo_token(caracter);
    
    while(token != FDT){
        if(isspace(caracter) == 0){
            palabra[indice] = caracter;  
            indice++;
        }
 
        if(token == SEP){
            palabra[indice - 1] = '\0';
            imprimir_cadena(palabra, &indice);
            printf("Separador: ,\n");
        }else if(token == 4){
            imprimir_cadena(palabra, &indice);
        }

        caracter = getchar();
        token = tipo_token(caracter);
    }

    palabra[indice] = '\0';
    printf("Cadena: %s\n", palabra);
    printf("Fin De Texto: \n");
}

void imprimir_cadena(char* palabra, int* indice){
    if(strncmp(palabra, "\0", 1) != 0){ //hay algun caracter en la palabra
        printf("Cadena: %s\n", palabra);
    }
    *indice = 0;
    palabra[0] = '\0';
}
