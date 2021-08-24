#include "scanner.h"

int get_token(char caracter){
    if(caracter == EOF){ 
        return FDT;
    }else if (caracter == ','){
        return SEP;
    }else if(isspace(caracter) != 0){
        return 4; //no usé enum (aunque hubiera sido más claro) porque la consigna dice que el enum es solo para SEP,CAD y FDT.
    }

    return CAD;
}

void imprimir_cadena(char* palabra, int* indice){
    if(strncmp(palabra, "\0", 1) != 0){ //hay algun caracter en la palabra
        printf("Cadena: %s\n", palabra);
    }
    *indice = 0;
    palabra[0] = '\0';
}
