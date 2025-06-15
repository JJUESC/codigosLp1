#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void setIntZero(int x[], int y) { //inicializa todos valores de x como 0 (importante para cache)
    for(int a = 0; a < y; a++) {
        x[a] = 0;
    }
}
void setCharZero(char x[], int y) { //inicializa todos caracteres de x como ' ' (importante para str)
    for(int a = 0; a < y; a++) {
        x[a] = ' ';
    }
}
int main() {
    int check = 0, check2 = 0, loc = 0, digit = 0, store[20], cache[20], a = 0, digitCache[20], conNum[10];
    long double resp;
    char str[20];
    setIntZero(cache, 20);
    setCharZero(str, 20);
    setIntZero(digitCache, 20);
    setIntZero(conNum, 10);
    char numbers[] = "0123456789"; //string comparacao de numeros
    char symbols[] = "+-*^()/"; //string comparacao de simbolos
    scanf("%s", str);
    for(check; check != 20;) { //transformar os numeros da string em int, armazenar os numeros e a posicicao dos simbolos aritmeticos
        if(str[check] == numbers[check2]) {
            digit++;
            store[loc] = str[check] - '0'; //transforma o caractere em int e armazena em store
            loc++;
            check++;
            check2 = 0;
        } else if(str[check] == symbols[check2]) { //simbolo foi encontrado
            digitCache[a] = digit; //armazena quantidade de digitos do numero anterior ao simbolo
            digit = 0;
            cache[a] = check; //armazena posicao dos simbolos
            a++;
            check++;
            check2 = 0;
        } else if(str[check] == '\0') {
            check = 20;
            digitCache[a] = digit;
        } else {
            check2++;
        }
    }
    int numFix = 0;
    for(int x = 0; digitCache[x] != 0; x++) { //converter digitos armazenados em store para numeros completos
        for(int b = digitCache[x]; b > 0; b--) {
            conNum[x] += pow(10,--digitCache[x]) * store[numFix];
            numFix++;
        }
    }
    for(int x = 0; cache[x] != 0; x++) { // realizar operacoes com numeros e posicoes de simbolos armazenados
        switch(str[cache[x]]) {
            case '+': {
                resp = conNum[x] + conNum[x+1];
                conNum[x+1] = resp;
            }
            break;
            case '-': {
                resp = conNum[x] - conNum[x+1];
                conNum[x+1] = resp;
            }
            break;
            case '*': {
                resp = conNum[x] * conNum[x+1];
                conNum[x+1] = resp;
            }
            break;
            case '/': {
                resp = ((long double)conNum[x] / (long double)conNum[x+1]);
                conNum[x+1] = resp;
            }
            break;
            case '^': {
                resp = pow(conNum[x], conNum[x+1]);
                conNum[x+1] = resp;
            }
            break;
        }
    }
    printf("%.4Lf", resp);
    return resp;
}