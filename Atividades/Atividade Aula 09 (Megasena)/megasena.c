#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randNumNrep(int arrayStart[], int limit, int max) {
    int check = 0;
    int check2 = 0;
    for(int a = 0; a < limit; a++) {
        arrayStart[a] = rand() % (max) + 1;
    }
    for(int Nrep = 0; Nrep != 1;) {
    	if(arrayStart[check] == arrayStart[check2] && check != check2) {
            arrayStart[check] = rand() % (max) + 1;
            check = 0;
            check2 = 0;
    	} else {
        	check2++;
        	if(check2 == limit) {
            	check++;
            	check2 = 0;
            	if(check == (limit - 1) || (limit - 1) == 0) {
                	Nrep = 1;
            	}
        	}
    	}
	}
}
void numPrint(int arrayStart[], int limit) {
    for(int a = 0; a < limit; a++) {
    	printf("%i ", arrayStart[a]);
	}
}
int main() {
	srand(time(NULL));
	int max;
	int sort;
	int betAmmount;
	unsigned long long strike = 0;
    unsigned long long numGen = 0;
	int base[20];
	int bet[20];
    unsigned long long fact = 1;
    unsigned long long factBet = 1;
    unsigned long long factDiv = 1;
    unsigned long long factDiv2 = 1;
    int auxfactDiv = 0;
    unsigned long long chance;
    long double chanceP;
    printf("Quantos numeros quer usar no seu jogo? (1 a n): ");
    scanf("%i", &max);
    printf("Quantos numeros quer sortear? (maximo suportado 20): ");
    scanf("%i", &sort);
    for(sort; sort >= max || sort > 20;) {
        printf("Quantidade de numeros a sortear invalida, deve ser menor a quantidade de numeros no jogo\n");
        printf("Quantos numeros quer sortear? (maximo suportado 20): ");
        scanf("%i", &sort);
    }
    printf("Quantos numeros quer marcar? (maximo suportado 20): ");
    scanf("%i", &betAmmount);
    for(betAmmount; betAmmount >= max || betAmmount > 20;) {
    	printf("Quantidade de numeros a marcar invalida, deve ser menor a quantidade de numeros no jogo\n");
    	printf("Quantos numeros quer marcar? (maximo suportado 20): ");
    	scanf("%i", &betAmmount);
    }
    for(int a = max; a > (max - betAmmount); a--) { //Criar fatoriais para calculo de chance
     	fact *= a;
    }
    for(int a = 1; a <= betAmmount; a++) {
     	factBet *= a;
    }
    for(int a = betAmmount; a > sort; a--) {
		factDiv *= max - (sort + auxfactDiv);
		auxfactDiv++;
	}
	for(int a = 2; a <= auxfactDiv; a++) {
		factDiv2 *= a;
	}
    chance = ((fact/factBet)/(factDiv/factDiv2));
    chanceP = 1.0/chance*100.0;
    printf("Sua chance de acerto e 1 em %llu (aproximadamente %Lf%%)\n", chance, chanceP);
    randNumNrep(base, sort, max);
    randNumNrep(bet, betAmmount, max);
	printf("Numeros sorteados: ");
    numPrint(base, sort);
	system("timeout /t 20");
	printf("Numeros marcados: ");
    numPrint(bet, betAmmount);
	for(int win = 0; win != sort;) { //conferir se os numeros marcados sao iguais aos numeros sorteados
		win = 0;
        int check = 0;
        int check2 = 0;
    	for(check; check != (betAmmount);) {
        	if(bet[check] == base[check2]) {
            	check2++;
				win++;
				strike++;
            	if(check2 = sort) {
                	check++;
                	check2 = 0;
            	}
        	} else {
            	check2++;
            	if(check2 == sort) {
                	check++;
                	check2 = 0;
            	}
        	}
    	}
    	if(win != sort) {
			printf("\nNumeros marcados: ");
            randNumNrep(bet, betAmmount, max);
            numGen += betAmmount;
            numPrint(bet, betAmmount);
        	}
        }
	printf("\nParabens voce ganhou na loteria!\n");
	printf("Voce gerou um total de %llu numeros ate ganhar\n", numGen+betAmmount);
	printf("Isso e o mesmo que apostar %i vezes\n", (int)(numGen+betAmmount)/betAmmount);
	printf("Voce acertou um total de %llu numeros ate ganhar\n", strike);
	return 0;
}