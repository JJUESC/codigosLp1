#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Inicializar vetores com valores aleatorios de 0 a 100 e medir tempo de inicializacao
double setArray(int arraySize, int array[]) {
    int b = 0;
    clock_t start, end;
    start = clock();
    for(int a = 0; a < arraySize; a++) {
        array[a] = rand() % 101;
    }
    end = clock();
    return ((double)(end - start))/CLOCKS_PER_SEC;
}
//Printar array unidimensional como bidimensional
void printAs2D(int arraySize, int arrayCol, int array[]) {
    for(int a = 0; a < arraySize;) {
        for(int b = 0; b < arrayCol; b++) {
            printf("%i\t", array[a]);
            a++;
            if(a == arraySize) {
                break;
            }
        }
        printf("\n");
    }
}
//Printar array unidimensional como tridimensional
void printAs3D(int arraySize, int arrayCol, int arrayDepth, int array[]) {
    int d = 0;
    for(int a = 0; a < arrayDepth; a++) {
        if(a != arrayDepth) {
            printf("\nStack %i:\n\n", a);
        }
        for(int b = 0; b < (arraySize / (arrayCol * arrayDepth)); b++) {
            for(int c = 0; c < arrayCol; c++) {
                printf("%i\t", array[d]);
                d++;
            }
            printf("\n");
        }
    }
}
//Criar uma matriz bidimensional a partir de um vetor
void make2DMatrix(int arraySize, int arrayCol, int array[], int array2D[][arrayCol]) {
    int c = 0;
    for(int a = 0; a < (arraySize / arrayCol); a++) {
        for(int b = 0; b < arrayCol; b++) {
            array2D[a][b] = array[c];
            c++;
        }
    }
}
//Printar matriz bidimensional
void print2DMatrix(int arraySize, int arrayCol, int array2D[][arrayCol]) {
    for(int a = 0; a < arraySize; a++) {
        for(int b = 0; b < arrayCol; b++) {
            printf("%i\t", array2D[a][b]);
        }
        printf("\n");
    }
}
//Criar matriz tridimensional a partir de um vetor
void make3DMatrix(int arraySize, int arrayCol, int arrayDepth, int array[], int array3D[][(arraySize/(arrayCol*arrayDepth))][arrayCol]) {
    int d = 0;
    for(int a = 0; a < arrayDepth; a++) {
        for(int b = 0; b < (arraySize/(arrayCol*arrayDepth)); b++) {
            for(int c = 0; c < arrayCol; c++) {
                array3D[a][b][c] = array[d];
                d++;
            }
        }
    }
}
//Printar matriz tridimensional
void print3DMatrix(int arraySize, int arrayCol, int arrayDepth, int array3D[][(arraySize/(arrayCol*arrayDepth))][arrayCol]) {
    for(int a = 0; a < arrayDepth; a++) {
        if(a != arrayDepth) {
            printf("\nStack %i:\n\n", a);
        }
        for(int b = 0; b < arraySize/(arrayCol*arrayDepth); b++) {
            for(int c = 0; c < arrayCol; c++) {
                printf("%i\t", array3D[a][b][c]);
            }
            printf("\n");
        }
    }
}
//Multiplicar matriz 2D por matriz 3D
double mult2Dx3D(int arraySize, int arrayCol, int arraySize2, int arrayCol2 ,int arrayDepth, int answerArray3D[][arraySize2/(arrayCol2*arrayDepth)][arrayCol], int array2D[][arrayCol], int array3D[][arraySize2/(arrayCol2*arrayDepth)][arrayCol2]) {
    clock_t start, end;
    start = clock();
    int i = 0;
    int j = 0;
    int k = 0;
    int partSum = 0;
    for(int a = 0; a < arrayDepth; a++) {
        for(int b = 0; b < arraySize/arrayCol2; b++) {
            for(int c = 0; c < arrayCol2; c++) {
                for(int d = 0; d < arrayCol2; d++) {
                    partSum += (array2D[b][d] * array3D[a][d][c]);
                }
                answerArray3D[a][b][c] = partSum;
                partSum = 0;
            }
        }
    }
    end = clock();
    return ((double)(end - start))/CLOCKS_PER_SEC;
}
//Simular multiplicacao de matriz 2D por 3D usando vetores
double multArrays(int arraySize, int arraySize2, int arrayDepth, int arrayCol2 , int answerArray[], int array[], int array2[]) {
    clock_t start, end;
    start = clock();
    int i = 0;
    int j = 0;
    int k = 0;
    int partSum = 0;
    for(int a = 0; a < arrayDepth; a++) {
        for(int b = 0; b < arraySize/arrayCol2; b++) {
            for(int c = 0; c < arrayCol2; c++) {
                for(int d = 0; d < arrayCol2; d++) {
                    partSum += (array[j] * array2[k * arrayCol2 + c]);
                    k++;
                    j++;
                }
                answerArray[i] = partSum;
                partSum = 0;
                i++;
                k -= arrayCol2;
                j -= arrayCol2;
            }
            j += arrayCol2;
        }
        j = 0;
        k += arrayCol2;
    }
    end = clock();
    return ((double)(end - start))/CLOCKS_PER_SEC;
}
int main() {
    srand(time(NULL));
    int arraySize, arraySize2, arrayCol, arrayCol2, arrayDepth;
    double runtime;
    printf("**CONVERSAO PARA MATRIZ BIDIMENSIONAL\n");
    printf("Qual o tamanho do seu vetor?: ");
    scanf("%i", &arraySize);
    printf("Qual o numero de colunas da sua matriz?: ");
    scanf("%i", &arrayCol);
    printf("\n");
    int testArray[arraySize], testArray2D[arraySize/arrayCol][arrayCol];
    runtime = setArray(arraySize, testArray);
    make2DMatrix(arraySize, arrayCol, testArray, testArray2D);
    printAs2D(arraySize, arrayCol, testArray);
    printf("\nTempo de inicializacao do vetor: %.10f segundos\n", runtime);
    printf("\n**CONVERSAO PARA MATRIZ TRIDIMENSIONAL\n");
    printf("Qual o tamanho do seu vetor?: ");
    scanf("%i", &arraySize2);
    printf("Qual o numero de colunas da sua matriz?: ");
    scanf("%i", &arrayCol2);
    printf("Qual a profundidade da sua matriz?: ");
    scanf("%i", &arrayDepth);
    int testArray2[arraySize2], testArray3D[arrayDepth][(arraySize2/(arrayCol2*arrayDepth))][arrayCol];
    runtime = setArray(arraySize2, testArray2);
    make3DMatrix(arraySize2, arrayCol2, arrayDepth, testArray2, testArray3D);
    printAs3D(arraySize2, arrayCol2, arrayDepth, testArray2);
    printf("\nTempo de inicializacao da matriz: %.10f segundos\n", runtime);
    printf("\n**MULTIPLICACAO MATRIZ 2D POR 3D\n");
    int answearArray[arraySize2], answerArray3D[arrayDepth][arraySize2/(arrayCol2*arrayDepth)][arrayCol2];
    runtime = mult2Dx3D(arraySize, arrayCol, arraySize2, arrayCol2, arrayDepth, answerArray3D, testArray2D, testArray3D);
    print3DMatrix(arraySize2, arrayCol2, arrayDepth, answerArray3D);
    printf("\nTempo de multiplicacao de matrizes %.10f segundos", runtime);
    runtime = multArrays(arraySize, arraySize2, arrayDepth, arrayCol2, answearArray, testArray, testArray2);
    printf("\n");
    printAs3D(arraySize2, arrayCol2, arrayDepth, answearArray);
    printf("\nTempo de multiplicacao dos vetores %.10f segundos", runtime);
    return 0;
}