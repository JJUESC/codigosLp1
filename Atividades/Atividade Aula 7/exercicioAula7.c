#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Tamanho de um inteiro = %li bits | %li bytes\n", sizeof(int)*CHAR_BIT, sizeof(int));
    printf("Valor maximo de um inteiro = %i\n", INT_MAX);
    printf("Valor minimo de um inteiro = %i\n", INT_MIN);
    printf("Tamanho de um inteiro unsigned = %lu bits | %lu bytes\n", sizeof(unsigned int)*CHAR_BIT, sizeof(unsigned int));
    printf("Valor maximo de um inteiro unsigned = %u\n", UINT_MAX);
    printf("Valor minimo de um inteiro unsigned = %u\n", 0);
    printf("Tamanho de um inteiro short = %li bits | %li bytes\n", sizeof(short int)*CHAR_BIT, sizeof(short int));
    printf("Valor maximo de um inteiro short = %i\n", SHRT_MAX);
    printf("Valor minimo de um inteiro short = %i\n", SHRT_MIN);
    printf("Tamanho de um inteiro short unsigned = %li bits | %li bytes\n", sizeof(unsigned short int)*CHAR_BIT, sizeof(unsigned short int));
    printf("Valor maximo de um inteiro short unsigned = %i\n", USHRT_MAX);
    printf("Valor minimo de um inteiro short unsigned = %i\n", 0);
    printf("Tamanho de um inteiro long = %li bits | %li bytes\n", sizeof(long int)*CHAR_BIT, sizeof(long int));
    printf("Valor maximo de um inteiro long = %li\n", LONG_MAX);
    printf("Valor minimo de um inteiro long = %li\n", LONG_MIN);
    printf("Tamanho de um inteiro long unsigned = %li bits | %li bytes\n", sizeof(unsigned long int)*CHAR_BIT, sizeof(unsigned long int));
    printf("Valor maximo de um inteiro long unsigned = %lu\n", ULONG_MAX);
    printf("Valor minimo de um inteiro long unsigned = %i\n", 0);
    printf("Tamanho de um caractere = %li bits | %li bytes\n", sizeof(char)*CHAR_BIT, sizeof(char));
    printf("Valor maximo de um caractere = %i\n", CHAR_MAX);
    printf("Valor minimo de um caractere = %i\n", CHAR_MIN);
    printf("Tamanho de um caractere signed = %li bits | %li bytes\n", sizeof(signed char)*CHAR_BIT, sizeof(signed char));
    printf("Valor maximo de um caractere signed = %i\n", SCHAR_MAX);
    printf("Valor minimo de um caractere signed = %i\n", SCHAR_MIN);
    printf("Tamanho de um caractere unsigned = %li bits | %li bytes\n", sizeof(unsigned char)*CHAR_BIT, sizeof(unsigned char));
    printf("Valor maximo de um caractere signed = %i\n", UCHAR_MAX);
    printf("Valor minimo de um caractere signed = %i\n", 0);
    printf("Tamanho de um float = %li bits | %li bytes\n", sizeof(float)*CHAR_BIT, sizeof(float));
    printf("Valor maximo de um float = %e\n", FLT_MAX);
    printf("Valor minimo de um float = %e\n", FLT_MIN);
    return 0;
}