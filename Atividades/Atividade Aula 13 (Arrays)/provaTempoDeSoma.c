#include <stdio.h>
#include <time.h>

double arraySumRow(int arraySize, int arraySize2, int array[][arraySize2]) {
    clock_t start, end;
    start = clock();
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize2; j++) {
            array[i][j] = i * j + j;
        }
    }
    end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}
double arraySumCol(int arraySize, int arraySize2, int array[][arraySize2]) {
    clock_t start, end;
    start = clock();
    for (int j = 0; j < arraySize; j++) {
        for (int i = 0; i < arraySize2; i++) {
            array[i][j] = i * j + j;
        }
    }
    end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}
int main() {
    short input;
    int testArray[512][512], Row = 0, Col = 0;
    double runtimeRow, runtimeCol;
    printf("Qual o valor de linhas que deseja testar?(maximo 512): ");
    scanf("%i", &Row);
    printf("Qual o valor de colunas que deseja testar?(maximo 512): ");
    scanf("%i", &Col);
    runtimeRow = arraySumRow(Row, Col, testArray);
    printf("Linha x Coluna = %f segundos\n", runtimeRow);
    runtimeCol = arraySumCol(Row, Col, testArray);
    printf("Coluna x Linha %f segundos\n", runtimeCol);
    if (runtimeCol > runtimeRow) {
        printf("Conclusao: Linha x Coluna e %f segundos mais rapido que Coluna x Linha", runtimeCol - runtimeRow);
    }
    else {
        printf("Conclusao: Coluna x Linha e %f segundos mais rapido que Linha x Coluna", runtimeRow - runtimeCol);
    }
    return 0;
}