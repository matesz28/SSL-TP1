#include <stdio.h>
#include "String.h"

int main(int cant, char *array[])
{
    char **p;

    // Arranco desde array[1] porque array[0] es el nombre del programa
    for (p = array + 1; *p != NULL; p++) {
        printf("%d\n", GetLength(*p));
    }

    return 0;
}