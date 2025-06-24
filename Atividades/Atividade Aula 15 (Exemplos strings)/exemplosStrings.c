#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * @brief Imprime uma string completa caractere por caractere.
 *
 * Percorre a string `input` e imprime cada caractere até encontrar o caractere 
 * nulo (`'\0'`) ou atingir o comprimento da string. 
 *
 * @param input A string a ser impressa.
 */
void printFull(char input[]) {
    for(int a = 0; input[a] != '\0' && a < strlen(input); a++) {
        printf("%c", input[a]);
    }
}
/**
 * @brief Imprime uma string palavra por palavra.
 *
 * Percorre a string `input` e imprime cada palavra até encontrar o caractere 
 * nulo (`'\0'`) ou atingir o comprimento da string. 
 *
 * @param input A string a ser impressa.
 */
void printWord(char input[]) {
    for(int a = 0; input[a] != '\0' && a < strlen(input); a++) {
        if(input[a] == ' ' || input[a + 1] == '\0') {
            printf("\n");
        } else {
            printf("%c", input[a]);
        }
    }
}
/**
 * @brief Imprime palavras armazenadas em um array 2D de caracteres.
 *
 * A função percorre o array `word` e imprime todas as palavras contidas nele,
 * ignorando quebras de linha (`'\n'`) presentes nas strings.
 * As palavras são separadas por um espaço na saída.
 *
 * @param word Array 2D de strings, onde cada linha contém uma palavra.
 * @param wordAmmount Quantidade de palavras a serem impressas (índice máximo).
 */
void printFromWord(char word[][32], int wordAmmount) {
    for(int b = 0; b <= wordAmmount; b++) {
        for(int a = 0; a < strlen(word[b]); a++) {
            if(word[b][a] != '\n') {
                printf("%c", word[b][a]);
            }
        }
        printf(" ");
    }
}
/**
 * @brief Separa e armazena palavras de uma string em um array 2D.
 *
 * Esta função percorre a string `input` e separa as palavras usando o espaço (' ') 
 * como delimitador. Cada palavra encontrada é armazenada como uma string em uma linha
 * do array `word`.
 *
 * @param input A string de entrada contendo palavras separadas por espaço.
 * @param word Array 2D onde cada palavra será armazenada em uma linha.
 *             Cada linha deve ser capaz de armazenar até 31 caracteres + '\0'.
 * @return O índice da última palavra armazenada (ou seja, o total de palavras - 1).
 */
int storeWord(char input[], char word[][32]) {
    int b = 0, c = 0;
    for(int a = 0; a < strlen(input); a++) {
        if(input[a] != ' ') {
            word[b][c] = input[a];
            c++;
        } else {
            word[b][c] = '\0';
            b++;
            c = 0;
        }
    }
    return b;
}
/**
 * @brief Ordena os caracteres de uma string em ordem alfabética.
 *
 * Esta função copia a string `input` para `temp` e ordena seus caracteres 
 * em ordem alfabética usando comparação com `tolower()` para tornar a ordenação 
 * case-insensitive. Utilizando o bubble sort.
 *
 * @param input A string de entrada original (não modificada).
 * @param temp String de destino onde a versão ordenada será armazenada.
 */
void orderInChar(char input[], char temp[]) {
    strcpy(temp, input);
    char buffer;
    for(int swap = 0; swap < strlen(temp) - 2;) {
        for(int a = 0; a < strlen(temp) && input[a+1] != '\n'; a++) {
            if(tolower(temp[a]) > tolower(temp[a+1])) {
                buffer = temp[a];
                temp[a] = temp[a+1];
                temp[a+1] = buffer;
                swap = 0;
            } else {
                swap++;
            }
        }
    }
}
/**
 * @brief Ordena as palavras de um vetor de caracteres em ordem alfabetica.
 *
 * Essa funcao confere se a palavras de um vetor de caracteres bidimensional
 * sao maiores que outras e ordena essas palavras em ordem alfabetica usando 
 * comparação com `tolower()` para tornar a ordenação 
 * case-insensitive. Utilizando o bubble sort.
 *
 * @param input A string de entrada original (não modificada).
 * @param temp String de destino onde a versão ordenada será armazenada.
 */
void orderInString(char word[][32], int wordAmmount) {
    char buffer[32];
    for(int swap = 0; swap < wordAmmount;) {
        for(int b = 0; b < wordAmmount; b++) {
            for(int a = 0; a < strlen(word[b]) && a < strlen(word[b+1]);) {
                if(tolower(word[b][a]) > tolower(word[b+1][a])) {
                    strcpy(buffer, word[b]);
                    strcpy(word[b], word[b+1]);
                    strcpy(word[b+1], buffer);
                    swap = 0;
                    break;
                } else if(tolower(word[b][a]) == tolower(word[b+1][a])) {
                    a++;
                } else {
                    swap++;
                    a = strlen(word[b]);
                }
            }
        }
    }
}
/**
 * @brief Programa principal que demonstra ordenação e impressão de palavras.
 *
 * Lê uma linha de entrada, imprime as palavras,
 * ordena os caracteres da string e ordena as palavras,
 * depois imprime os resultados.
 *
 * @return 0 Em caso de sucesso.
 */
int main() {
    char input[1024];
    char temp [1024];
    char word[32][32];
    int wordAmmount;
    fgets(input, sizeof(input), stdin);
    printf("Voce digitou:\n");
    printWord(input);
    printf("\n**ORDENACAO EM CHAR:\n\n");
    orderInChar(input, temp);
    printFull(temp);
    printf("\n**ORDENACAO EM STRING:\n\n");
    wordAmmount = storeWord(input, word);
    orderInString(word, wordAmmount);
    printFromWord(word, wordAmmount);
    return 0;
}