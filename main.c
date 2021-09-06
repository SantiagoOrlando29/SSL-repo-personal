#include "scanner.h"

int main(){    

    char palabra[100];
    
    int token = get_token(palabra);

    while(token != FDT){

        if(token == SEP){
            printf("Separador: , \n");
        }else if(token == CAD){
            printf("Cadena: %s\n", palabra);
        }

        token = get_token(palabra);
    }

    printf("Fin De Texto: \n");

    return 0;
}
