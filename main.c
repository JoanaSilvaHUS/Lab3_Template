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

    int arr[12] = {1,4,4,7,7,8,11,19,21,23,24,30};
   
    printf("\n");
    printArray(seq, 50);
    printf("\n\n");

    printf("\nNivel 1\nvalor mínimo: %d\n\n", arrayMinimum(seq, 50));
    printf("\nNivel 2:\nSoma: %d\n\n", arraySumEven(seq, 50));

    int val;
    int sumPar = 0;
    int index = 0;
    double sumEven = arraySumEven(seq, 50);
    int numero;

    printf("\nValor a atingir (entre 32 e %.0f): ", sumEven);
    readInteger(&val);

    for (int i = 0; i < 50; i++)
    {
        if (sumPar < val)
        {
            if (seq[i]%2 == 0)
            {
                sumPar += seq[i];
                index = i;
            }
        }
        else
        {
            break;
        }
    }
    printf("\nO valor %d é atingido no index %d\n", val, index);

    printf("\nDigite um número de 1-30: ");
    scanf("%d", &numero);
    printf("\nNivel 3: O valor %d existe no indice %d\n\n", numero, binarySearch(numero, arr, 1, 30));


    return EXIT_SUCCESS;
}
