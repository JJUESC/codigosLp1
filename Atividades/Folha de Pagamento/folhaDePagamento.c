#include <stdio.h>

double calcINSS(double earn) {
    int a = 0;
    if(earn == 1518) {
        a = earn*0.075;
    } else if(earn > 1518 && earn <= 2793.88) {
        a = 113.85+(earn - 1518)*0.09;
    } else if(earn > 2793.88 && earn <= 4190.83) {
        a = 228.68+(earn - 2793.88)*0.12;
    } else if(earn > 4190.83 && earn <= 8157.41) {
        a = 396.32+(earn - 4190.83)*0.14;
    } else {
        a = 951.64;
    }
    return a;
}
double calcIR(double base, double earn) {
    double a = 0;
    if(base > 2259.2 && base <= 2826.65) {
		a = (base - 2259.2)*0.075;
		printf("Imposto de Renda: R$%.2lf\nApesar de se encontrar na faixa de 7.5%%, sua aliquota efetiva e %.2lf%%\n", a, a/earn*100);
	} else if(base > 2826.65 && base <= 3751.05) {
		a = 42.55+((base - 2826.65)*0.15);
		printf("Imposto de Renda: R$%.2lf\nApesar de se encontrar na faixa de 15%%, sua aliquota efetiva e %.2lf%%\n", a, a/earn*100);
	} else if(base > 3751.05 && base <= 4664.68) {
		a = 181.21+((base - 3751.05)*0.225);
		printf("Imposto de Renda: R$%.2lf\nApesar de se encontrar na faixa de 22.5%%, sua aliquota efetiva e %.2lf%%\n", a, a/earn*100);
	} else if(base > 4664.68) {
		a = 386.78+((base - 4664.68)*0.275);
		printf("Imposto de Renda: R$%.2lf\nApesar de se encontrar na faixa de 27.5%%, sua aliquota efetiva e %.2lf%%\n", a, a/earn*100);
	} else {
	    printf("Imposto de Renda: Isento\n");
	}
    return a;
}
int main() {
	double earn;
	int kid;
	double car;
	double food;
	printf("Digite sua renda tributavel: RS$");
	scanf("%lf", &earn);
	for(earn; earn < 1518;) {
		printf("Renda abaixo de 1 salario minimo (RS$ 1518)\nDigite sua renda tributavel: RS$");
		scanf("%lf", &earn);
	}
	printf("Digite a quantidade de dependentes: ");
	scanf("%i", &kid);
	printf("Digite o valor de seu vale transporte: RS$");
	scanf("%lf", &car);
	printf("Digite o valor de seu vale alimentacao: RS$");
	scanf("%lf", &food);
    double INSS = calcINSS(earn);
    printf("Contribuicao INSS: R$%.2f\n", INSS);
	double base = earn-(INSS+(kid*189.6)); //base de calculo para imposto de renda
    double IR = calcIR(base, earn);
	printf("Salario Liquido: R$%.2lf", earn+car+food-(INSS+IR));
}