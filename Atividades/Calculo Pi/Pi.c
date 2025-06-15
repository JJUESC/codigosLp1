#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int circRad;
    unsigned long long pAmmount;
    unsigned long long strike = 0;
    long double pi;
    printf("Qual o raio do seu circulo?: ");
    scanf("%i", &circRad);
    printf("Quantos pontos quer gerar? (maior o numero maior a precisao): ");
    scanf("%llu", &pAmmount);
    srand(time(NULL));
    int squareRad = pow(circRad, 2);
    for(int a = 0; a < pAmmount; a++){
        int x = rand() % (circRad + 1);
        int y = rand() % (circRad + 1);
        if(pow(x, 2) + pow(y, 2) <= squareRad) {
            strike++;
        }
    }
    pi = ((long double)strike/(long double)pAmmount)*4;
    printf("Pi = %lf", pi);
}