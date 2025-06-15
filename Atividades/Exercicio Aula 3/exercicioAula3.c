#include <stdio.h>

int main()
{
    int x = 10;
    float y = 3.333;
    double z = 3.141592;
    char w = 'A';
    void* a = 0;
    printf("Os tipos básicos em C são os seguintes:");
    printf("\ninterger: Armazena valores inteiros, exemplo: int x = %i, tamanho = %li bytes", x, sizeof(x));
    printf("\nFloat: Armazena valores reais, exemplo: float y = %.3f, tamanho = %li bytes", y, sizeof(y));
    printf("\nDouble: Armazena valores rais com alta precisão, exemplo: double z = %f, tamanho = %li bytes", z, sizeof(z));
    printf("\nChar: Armazena uma letra, exemplo char w = %c, tamanho = %li bytes", w, sizeof(w));
    printf("\nVoid: Indica valores nulos, exemplo: void* a = %p, tamanho = %li bytes", a, sizeof(a));
    
    //exemplo de operação com variáveis
    int var1 = 0;
    int var2 = 0;
    int Result = 0;
    var1 = 10;
    var2 = 20;
    Result = var1 + var2;
    printf("\nResult = %i", Result);

    return 0;
}