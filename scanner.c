#include "scanner.h"

int get_token(char* palabra){

    memset(palabra, 0, sizeof(palabra));
    int indice = 0;
    char caracter = getchar();

    if(caracter == EOF){
        return FDT;
    }else if(caracter == ','){
        return SEP;
    }else if(isspace(caracter) == 0){
        
        while(caracter != ',' && caracter != EOF && isspace(caracter) == 0){
            palabra[indice] = caracter;
            indice++;
            caracter = getchar();
        }

        ungetc(caracter, stdin);
        return CAD;
    }

    return -1;
}
