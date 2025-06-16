#include <stdio.h>
#include <string.h>
void setCharZero(char input[]) {
    for(int a = 0; a < 1024; a++) {
        input[a] = ' ';
    }
}
void printFull(char input[]) {
    int a = 0;
    for(a = 0; input[a] != '\0' && a < 1024; a++) {
        printf("%c", input[a]);
    }
    printf("\nTamanho da string: %i", a - 1);
}
void printWord(char input[]) {
    int a = 0, b = 0, c = 0, d = 0;
    for(a; input[a] != '\0' && a < 1024; a++) {
        if(input[a] == ' ' || input[a + 1] == '\0') {
            b = a;
            b -= c;
            c = a;
            printf("\n");
            printf("\nTamanho da string: %i\n\n", b - d);
            d = 1;
        } else {
            printf("%c", input[a]);
        }
    }
}
void printReverse(char input[]) {
    int b = 0;
    for(int a = 1023; a > 0; a--) {
        if(input[a] != ' ' && b != 1) {
            b = 1;
        }
        for(a; a >= 0 && b == 1; a--) {
            printf("%c", input[a]);
        }
    }
}
void printLetter(char input[]) {
    for(int a = 0; input[a] != '\0' && a < 1024; a++) {
        printf("%c\n", input[a]);
    }
}
int main()
{
    char input[1024];
    setCharZero(input);
    fgets(input, sizeof(input), stdin);
    printf("\n");
    printf("**STRING INTEIRA:\n\n");
    printFull(input);
    printf("\n\n");
    printf("**STRING PALAVRA POR PALAVRA:\n\n");
    printWord(input);
    printf("**STRING REVERSA\n");
    printReverse(input);
    printf("\n\n");
    printf("**STRING LETRA POR LETRA\n\n");
    printLetter(input);
}