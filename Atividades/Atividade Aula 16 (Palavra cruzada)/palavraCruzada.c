#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * @brief Inicializa um array de respostas com o caractere '_'.
 *
 * Esta função percorre os índices definidos em `wordSelect`, acessa as palavras 
 * correspondentes no `wordList`, e preenche os arrays `answers` com '_' em cada
 * posição correspondente ao tamanho da palavra selecionada.
 *
 * @param answers Array 2D de strings onde cada palavra será preenchida com '_'.
 * @param wordList Lista de palavras originais.
 * @param wordSelect Array 2D de índices, onde cada wordSelect[a][0] representa 
 *                   o índice da palavra em wordList a ser considerada.
 */
void setChar(char answers[][13], char wordList[][13], int wordSelect[][1]) {
    for(int a = 0; a < 10; a++) {
        for(int b = 0; b < strlen(wordList[wordSelect[a][0]]); b++) {
            answers[a][b] = '_';
        }
    }
}
/**
 * @brief Obtem numeros aleatorios sem repeticao
 * 
 * Essa funcao obtem numeros aleatorios de 0 a 77, que correspondem a quandidade
 * de palavras em 'wordList', e os armazena em 'wordSelect' para serem 
 * utilizados como indices
 * 
 * @param wordSelect Array 2D de indices que correspondem a palavras de 'wordList'
 * 
 */
void randWord(int wordSelect[][1]) {
    int check = 0;
    int check2 = 0;
    for(int a = 0; a < 10; a++) {
        wordSelect[a][0] = rand() % 78;
    }
    for(int Nrep = 0; Nrep != 1;) {
    	if(check != check2 && wordSelect[check][0] == wordSelect[check2][0]) {
            wordSelect[check][0] = rand() % 79;
            check = 0;
            check2 = 0;
    	} else {
        	check2++;
        	if(check2 == 10) {
            	check++;
            	check2 = 0;
            	if(check == (10 - 1)) {
                	Nrep = 1;
            	}
        	}
    	}
	}
}
/**
 * @brief Imprime um vetor bidimensional de caracteres em formato de palavras cruzadas.
 *
 * Esta função percorre o array `answers`, e para cada entrada, imprime os caracteres
 * um a um, separados por espaços, simulando a visualização de uma palavra cruzada.
 * O índice da palavra (1 a 10) é mostrado antes de cada linha.
 *
 * @param answers Array 2D de caracteres representando as respostas (com '_' ou letras).
 * @param wordSelect Array 2D de índices que indicam quais palavras estão sendo usadas 
 *                   a partir do `wordList`.
 * @param wordList Lista completa de palavras usadas para obter os comprimentos corretos.
 */
void printAsCross(char answers[][13], int wordSelect[][1], char wordList[][13]) {
    for(int a = 0; a < 10; a++) {
        printf("%i. ", a + 1);
        for(int c = 0; c < strlen(wordList[wordSelect[a][0]]); c++) {
            printf("%c   ", answers[a][c]);
        }
        printf("\n");
    }
}
/**
 * @brief Programa principal que simula a palavra cruzada.
 *
 * inicializa vetores bidimensionais de palavras e os utiliza
 * para criar a palavra cruzada
 *
 * @return 0 Em caso de sucesso.
 */
int main() {
    srand(time(NULL));
    int wordSelect[10][1], input = 1;
    randWord(wordSelect);
    //Conjunto de palavras para a palavra cruzada
    char wordList[78][13] = {
        "amor", "beleza", "coragem", "destino", "esperanca", "felicidade", "harmonia", "imaginacao", "justica", "liberdade", "memoria", "natureza", "orgulho", "paixao", "respeito", "saudade", "ternura", "verdade", "vontade", "xale", "yoga", "zelo", "abraco", "bondade", "carinho", "desafio", "encanto", "forca", "gratidao", "honra", "jornada", "lealdade", "misterio", "nobreza", "olhar", "perdao", "quimica", "realizacao", "sabedoria", "talento", "universo", "vitoria", "xadrez", "amizade", "desejo", "entusiasmo", "fe", "honestidade",
        "inspiracao", "magia", "novidade", "paciencia", "qualidade", "trabalho", "valentia", "alvorecer", "brisa", "calma", "danca", "estrela", "fonte", "gesto", "horizonte", "ilha", "juventude", "karma", "lua", "melodia", "neblina", "orvalho", "pureza", "riacho", "trilha", "viagem", "wonder", "energia", "gentileza", "silencio"
    };
    char answers[10][13];
    setChar(answers, wordList, wordSelect);
    //Conjunto de dicas das palavras cruzadas
    char hintList[16][64] = {
        "Sentimento profundo de afeição",
        "Qualidade do que agrada os olhos",
        "Força para enfrentar o medo ou o perigo",
        "Caminho ou futuro determinado, muitas vezes inevitável",
        "Sentimento de confiança em algo bom no futuro",
        "Estado de satisfação e alegria",
        "Equilíbrio e paz entre elementos diferentes",
        "Capacidade de criar imagens e ideias novas",
        "Princípio do que é correto e imparcial",
        "Condição de agir ou pensar sem restrições",
        "Capacidade de lembrar eventos e informações",
        "Tudo o que compõe o mundo natural",
        "Sentimento de dignidade ou vaidade",
        "Emoção intensa, muitas vezes associada ao amor",
        "Ato de considerar e tratar bem o outro",
        "Sentimento de ausência de algo querido",
    };
    //Conjunto de dicas das palavras cruzadas
    char hintList2[16][64] = {
        "Afeição suave e delicada",
        "Aquilo que é real ou correto",
        "Desejo ou intenção firme de realizar algo",
        "Peça de roupa usada nos ombros geralmente de lã",
        "Prática corporal e mental originada na Índia",
        "Cuidado e dedicação em algo que se faz",
        "Gesto de envolver alguém com os braços",
        "Tendência a fazer o bem aos outros",
        "Manifestação de afeto e ternura",
        "Provação que testa as habilidades",
        "Qualidade que fascina ou atrai",
        "Poder físico ou emocional para agir",
        "Reconhecimento por algo recebido",
        "Conduta digna de respeito e admiração",
        "Caminho percorrido, literal ou metaforicamente",
        "Fidelidade e compromisso",
    };
    //Conjunto de dicas das palavras cruzadas
    char hintList3[16][64] = {
        "Aquilo que não pode ser facilmente explicado",
        "Qualidade de caráter elevado e digno",
        "Ato ou modo de ver com atenção",
        "Ato de desculpar uma ofensa",
        "Ciência que estuda a composição da matéria",
        "Concretização de um desejo ou plano",
        "Conhecimento aplicado com sensatez",
        "Habilidade natural ou adquirida em algo",
        "Conjunto de tudo que existe",
        "Ato de vencer ou superar algo",
        "Jogo de tabuleiro estratégico entre dois jogadores",
        "Relação afetiva entre pessoas com vínculo forte",
        "Vontade intensa de ter ou fazer algo",
        "Grande empolgação e energia por algo",
        "Crença forte em algo ou alguém",
        "Qualidade de quem age com verdade e justiça",
    };
    //Conjunto de dicas das palavras cruzadas
    char hintList4[16][64] = {
        "Estímulo criativo ou motivacional",
        "Prática ou ilusão de forças sobrenaturais",
        "Algo recente ou inédito",
        "Capacidade de suportar com calma e serenidade",
        "Grau de excelência ou valor de algo",
        "Atividade com esforço físico ou mental",
        "Coragem demonstrada diante do perigo",
        "Momento do nascer do dia",
        "Vento leve e agradável",
        "Estado de tranquilidade e serenidade",
        "Movimento corporal ritmado ao som de música",
        "Corpo celeste que brilha no céu",
        "Origem de algo, especialmente de água",
        "Movimento com significado, feito com o corpo",
        "Linha imaginária entre a terra e o céu",
        "Porção de terra cercada por água",
    };
    //Conjunto de dicas das palavras cruzadas
    char hintList5[16][64] = {
        "Período da vida entre a infância e a idade adulta",
        "Lei espiritual de causa e efeito",
        "Satélite natural da Terra",
        "Sequência de sons musicais agradáveis",
        "Nuvem baixa que reduz a visibilidade",
        "Gotas de água sobre superfícies ao amanhecer",
        "Estado de ser limpo ou sem mistura",
        "Curso pequeno de água corrente",
        "Caminho estreito, geralmente em meio à natureza",
        "Deslocamento de um lugar a outro",
        "Palavra inglesa para maravilha",
        "Capacidade de realizar trabalho ou movimento",
        "Ato de ser educado e atencioso",
        "Ausencia de qualquer ruido"
    };
    //Loop para resolver a palavra cruzada
    while(input != 0) {
        printAsCross(answers, wordSelect, wordList);
        printf("Qual das palavras quer resolver? (1-10) // 0 para conferir se ganhou: ");
        scanf("%i", &input);
        getchar();
        //Confere se as palavras estao corretos e encerra o loop
        if(input == 0) {
            int win = 0;
            for(int a = 0; a < 10; a++) {
                if(strncmp(answers[a], wordList[wordSelect[a][0]], strlen(answers[a])) == 0) {
                    win++;
                }
            }
            if(win == 10) {
                printf("Parabens voce acertou todas palavras!");
            } else {
                printf("Voce nao ganhou, acertou um total de %i palavras", win);
            }
            break;
        }
        printf("Dica: ");
        printHint(input - 1, wordSelect, hintList, hintList2, hintList3, hintList4, hintList5);
        printf("Palpite: ");
        fgets(answers[input - 1], sizeof(answers[input - 1]), stdin);
        answers[input - 1][strcspn(answers[input - 1], "\n")] = '\0';
        //Caso o numero de letras do palpite seja diferente do numero de letras da resposta
        while(strlen(answers[input - 1]) != strlen(wordList[wordSelect[input - 1][0]])) {
            int stop = 0;
            printf("Palpite incorreto, seu palpite deve conter %i letras\n", strlen(wordList[wordSelect[input - 1][0]]));
            printf("Digite um numero diferente de 0 se deseja escolher outra palavra: ");
            scanf("%i", &stop);
            getchar();
            if(stop != 0) {
                for(int b = 0; b < strlen(wordList[wordSelect[input - 1][0]]); b++) {
                    answers[input - 1][b] = '_';
                }
                break;
            }
            printf("Palpite: ");
            fgets(answers[input - 1], sizeof(answers[input - 1]), stdin);
            answers[input - 1][strcspn(answers[input - 1], "\n")] = '\0';
        }
    }
    return 0;
}