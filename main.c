#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "recursion.h"

int main() {

    int seq[50] = {
            93, 32, 31, 36, 60, 1, 74, 87, 52, 2,
            76, 54, 74, 17, 90, 81, 96, 72, 22, 31,
            49, 83, 99, 1, 11, 55, 86, 39, 6, 10,
            48, 65, 52, 10, 86, 82, 43, 4, 3, 6,
            78, 35, 31, 82, 18, 1, 48, 80, 23, 38
            };
   
    printf("\n");
    printArray(seq, 50);
    printf("\n\n");

    printf("\nNivel 1\nvalor mínimo: %d\n\n", arrayMinimum(seq, 50));

    return EXIT_SUCCESS;
}
