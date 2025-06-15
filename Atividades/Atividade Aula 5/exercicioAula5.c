#include <stdio.h>

int main()
{
    int countA = 0;
    int countB = 0;
    int countC = 0;
    for(int a = 0; a <= 10000; a++){ //exercicio a
        printf("a = %i\n", a);
    }
    for(int a = -10000; a <= 10000; a++){ // exercicio b
        printf("a = %i\n", a);
    }
    for(int a = 0; a <= 10000; a+=2){//exercicio c
        printf("a = %i\n", a);
    }
    for(int a = 0; a <= 10000; a++){//exercicio d
        if(a % 2 != 0){
        printf("a = %i\n", a);
        }
    }
     for(int a = -100000; a <= 100000; a+=3){ //exercicio e
        printf("a = %i\n", a);
    }
    for(int a = 0; a < 10; a++){ //exercicio f
        countA++;
        for(int b = 0; b < 10; b++){
            countB++;
            for(int c = 0; c < 10; c++){
                printf("a = %i b = %i c = %i \n", a, b, c);
                countC++;
            }
        }
    }
    printf("Numero de Interacoes de a: %i\n", countA);
    printf("Numero de Interacoes de b: %i\n", countB);
    printf("Numero de Interacoes de c: %i\n", countC);
    printf("Numero de Interacoes de totais: %i", countA+countB+countC);

    return 0;
}