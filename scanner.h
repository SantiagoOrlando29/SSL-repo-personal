#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

enum tokens{
    FDT,
    SEP,
    CAD
};

int get_token(char caracter);
void imprimir_cadena(char* palabra, int* indice);

#endif // SCANNER_H_INCLUDED