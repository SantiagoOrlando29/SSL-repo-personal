#include "scanner.h"

int main(){    
    char palabra[100];
    palabra[0]='\0';
    int indice = 0;

    char caracter = getchar();
    int token = get_token(caracter);
    
    while(token != FDT){
        if(token == CAD){
            palabra[indice] = caracter;  
            indice++;
        }
 
        if(token == SEP){
            imprimir_cadena(palabra, &indice);
            printf("Separador: ,\n");
        }else if(token == 4){
            imprimir_cadena(palabra, &indice);
        }

        caracter = getchar();
        token = get_token(caracter);
    }

    palabra[indice] = '\0';
    printf("Cadena: %s\n", palabra);
    printf("Fin De Texto: \n");

    return 0;
}
