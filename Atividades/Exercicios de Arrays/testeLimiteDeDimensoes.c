#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void setArray(int array[][3][3][3][3]) {
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 3; b++) {
            for(int c = 0; c < 3; c++) {
                for(int d = 0; d < 3; d++) {
                    for(int e = 0; e < 3; e++) {
                        array[a][b][c][d][e] = 0;
                    }
                }
            }
        }
    }
}
int main() {
    int testArray[3][3][3][3][3], elements, stackMB, dimensions;
    setArray(testArray);
    printf("TESTE DIMENSOES MAXIMAS DE UM ARRAY\n");
    printf("Qual o tamanho dos elementos de seu array?: ");
    scanf("%i", &elements);
    printf("Qual o tamanho maximo do stack do seu compilador em MB?: ");
    scanf("%i", &stackMB);
    long stackElement = (stackMB*1048576)/4;
    for(dimensions = 0; pow(elements, dimensions) < stackElement; dimensions++);
    printf("**Dimensao maxima de seu array: %iD\n", dimensions);
    printf("TESTE ELEMENTOS MAXIMOS DE UM ARRAY\n");
    printf("Qual a quantidade de dimensoes de seu array?: ");
    scanf("%i", &dimensions);
    printf("Qual o tamanho maximo do stack do seu compilador em MB?: ");
    scanf("%i", &stackMB);
    stackElement = (stackMB*1048576)/4;
    for(elements = 0; pow(elements, dimensions) < stackElement; elements++);
    printf("**Tamanho maximo dos elementos do seu array: %i\n", elements);
    system("pause");
    printf("Exemplo de array 1D: \n");
    for(int a = 0; a < 3; a++) {
        printf("%i", testArray[a][0][0][0][0]);
    }
    printf("\n");
    printf("Exemplo de array 2D: \n");
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 3; b++) {
            printf("%i", testArray[a][b][0][0][0]);
        }
        printf("\n");
    }
    printf("Exemplo de array 3D: \n");
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 3; b++) {
            for(int c = 0; c < 3; c++) {
                printf("%i", testArray[a][b][c][0][0]);
            }
            printf("\t");
        }
        printf("\n");
    }
    printf("Exemplo de array 4D: \n");
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 3; b++) {
            for(int c = 0; c < 3; c++) {
                for(int d = 0; d < 3; d++) {
                    printf("%i", testArray[a][b][c][d][0]);
                }
                printf("\t");
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Exemplo de array 5D: \n");
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 3; b++) {
            for(int c = 0; c < 3; c++) {
                for(int d = 0; d < 3; d++) {
                    for(int e = 0; e < 3; e++) {
                        printf("%i", testArray[a][b][c][d][e]);
                    }
                    printf("\t");
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}