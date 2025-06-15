#include <stdio.h>

int main()
{
	double earn;
	unsigned int emp;
	double pay;
	double DAS;
	double FGTS;
	double INSS;
	unsigned int fire;
	unsigned int fireAmmount;
	unsigned int just;
	unsigned int fireDay;
	unsigned int fireMonth;
	unsigned int sVac;
	double saldo;
	double vFerias;
	double propFerias;
	double multa;
	printf("Insira sua renda bruta mensal: R$");
	scanf("%lf", &earn);
	printf("Insira a quantidade de empregados: ");
	scanf("%i", &emp);
	if(emp > 0) {
		printf("Insira o salario medio de seus empregados: R$"); //assumindo que todos ganham mesmo salario
		scanf("%lf", &pay);
		for(pay; pay < 1518;) {
			printf("Salario menor que 1 salario minimo (R$1518)\n");
			printf("Insira o salario medio de seus empregados: R$");
			scanf("%lf", &pay);
		}
	}
	if(emp > 0) {
		FGTS = pay*emp*0.08;
		printf("Nao = 0 / Sim = 1\n");
		printf("Planeja demitir algum funcionario?: ");
		scanf("%i", &fire);
		for(fire; fire != 0 && fire != 1;) {
			printf("Nao = 0 / Sim = 1\n");
			printf("Planeja demitir algum funcionario?: ");
			scanf("%i", &fire);
		}
	}
	if(fire == 1) {
		printf("Quantos funcionarios planeja demitir?: ");
		scanf("%u", &fireAmmount);
		for(fireAmmount; fireAmmount > emp;) {
			printf("Quantidade de demissoes impossivel\n");
			printf("Quantos funcionarios planeja demitir?: ");
			scanf("%u", &fireAmmount);
		}
		printf("Nao = 0 / Sim = 1\n");
		printf("A demissao tem causa justa?: ");
		scanf("%u", &just);
		for(just; just != 0 && just != 1;) {
			printf("Nao = 0 / Sim = 1\n");
			printf("A demissao tem causa justa?: ");
			scanf("%u", &just);
		}
		printf("Quantos dias o empregado trabalhou no mes da demissao: ");
		scanf("%u", &fireDay);
		for(fireDay; fireDay > 31;) {
			printf("Quantidade de dias invalida\n");
			printf("Quantos dias o empregado trabalhou no mes da demissao: ");
			scanf("%u", &fireDay);
		}
		printf("Quantos meses o empregado trabalhou no ano da demissao?: ");
		scanf("%u", &fireMonth);
		for(fireMonth; fireMonth > 12;) {
			printf("Quantidade de meses invalida");
			printf("Quantos meses o empregado trabalhou no ano da demissao?: ");
			scanf("%u", &fireMonth);
		}
		printf("Nao = 0 / Sim = 1\n");
		printf("O funcionario tem ferias vencidas?: ");
		scanf("%u", &sVac);
		for(sVac; sVac != 0 && sVac != 1;) {
			printf("Nao = 0 / Sim = 1\n");
			printf("O funcionario tem ferias vencidas?: ");
			scanf("%u", &sVac);
		}
		saldo = pay/30*fireDay;
		if(just == 0) {
		    propFerias = (pay/12)*fireMonth;
		    multa = pay*0.08*fireAmmount*0.4;
			printf("Saldo Salario: R$%.2lf\n", saldo);
			if(sVac == 1) {
			    vFerias = pay+(pay/3);
				printf("Ferias Vencidas: R$%.2lf\n", vFerias);
			}
			printf("Ferias Proporcionais: R$%.2lf\n", propFerias);
			printf("Decimo Terceiro Proporcional: R$%.2lf\n", propFerias);//equacao e igual a ferias proporcionais
			printf("Multa FGTS: R$%.2lf\n", multa);
		}
		if(just == 1) {
		    emp = emp - fireAmmount;
			printf("Saldo Salario: R$%.2lf\n", saldo);
			if(sVac == 1) {
			    vFerias = pay+(pay/3);
				printf("Ferias Vencidas: R$%.2lf\n", vFerias);
			}
		}
	}
	printf("Reserva FGTS: R$%.2lf\n", FGTS);
	if(pay == 1518) {
		INSS = pay*0.075;
		printf("Reserva INSS: R$%.2lf\n", INSS*emp);
	} else if(pay > 1518 && pay <= 2793.88) {
		INSS = 113.85+((pay - 1518)*0.09);
		printf("Reserva INSS: R$%.2lf\n", INSS*emp);
	} else if(pay > 2793.88 && pay <= 4190.83) {
		INSS = 228.68+((pay - 2793.88)*0.12);
		printf("Reserva INSS: R$%.2lf\n", INSS*emp);
	} else if(pay > 4190.83 && pay <= 8157.41) {
		INSS = 396.32+((pay - 4190.83)*0.14);
		printf("Reserva INSS: R$%.2lf\n", INSS*emp);
	} else {
		INSS = 951.64;
		printf("Reserva INSS: R$%.2lf\n", INSS*emp);
	}
	if(earn <= 15000) {
		DAS = earn*0.04;
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	} else if(earn > 15000 && earn <= 30000) {
		DAS = 600+((earn - 15000)*0.073);
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	} else if(earn > 30000 && earn <= 60000) {
		DAS = 1695+((earn - 30000)*0.095);
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	} else if(earn > 60000 && earn <= 150000) {
		DAS = 4545+((earn - 60000)*0.107);
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	} else if(earn > 150000 && earn <= 300000) {
		DAS = 14175+((earn - 150000)*0.143);
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	} else if(earn > 300000 && earn <= 400000) {
		DAS = 35625+((earn - 300000)*0.19);
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	} else {
		DAS = 54625;
		printf("Documento de Arrecadacao do Simples Nacional: RS$%.2lf\n", DAS);
	}
	printf("Renda Liquida Mensal: R$%.2lf", earn-((pay*emp)+DAS+FGTS+(INSS*emp)+saldo+vFerias+(propFerias*2)+multa));
	return 0;
}