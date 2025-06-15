#include <stdio.h>

int main() {
    float gasP;
    float ethP;
    unsigned short gCar;
    float useGas;
    float useEth;
    printf("Qual o valor da gasolina?: R$");
    scanf("%f", &gasP);
    printf("Qual o valor do etanol?: R$");
    scanf("%f", &ethP);
    printf("Qual a media de consumo de gasolina, em litros por km rodado, de seu veiculo? ");
    scanf("%f", &useGas);
    printf("Qual a media de consumo de etanol, em litros por km rodado, de seu veiculo? ");
    scanf("%f", &useEth);
    float div1 = ethP/gasP;
    float useDiv1 = useEth/useGas;
    printf("Nao = 0 / Sim = 1\n");
    printf("Seu veiculo aceita gas natural veicular(GNV)?");
    scanf("%hu", &gCar);
    for(gCar; gCar != 0 && gCar != 1;) {
        printf("Nao = 0 / Sim = 1");
        printf("Seu veiculo aceita gas natural veicular(GNV)?");
        scanf("%hu", &gCar);
    }
    if(gCar == 1) {
        float gnvP;
        float useGnv;
        printf("Qual o valor do GNV?: R$");
        scanf("%f", &gnvP);
        printf("Qual a media de consumo de GNV, em metros cubicos por km rodado, de seu veiculo? ");
        scanf("%f", &useGnv);
        float div2 = gasP/gnvP;
        float div3 = ethP/gnvP;
        float useDiv2 = useGas/useGnv;
        float useDiv3 = useEth/useGnv;
        printf("Razao entre preco Etanol por Gasolina: Etanol e %.2f vezes mais caro\n", div1);
        printf("Razao entre preco Gasolina por GNV: Gasolina e %.2f vezes mais cara\n", div2);
        printf("Razao entre preco Etanol por GNV: Etanol e %.2f vezes mais caro\n", div3);
        if(div2 > useDiv2 && div3 > useDiv3) {
            printf("Compensa abastecer com GNV");
        } else if(div1 > useDiv1) {
            printf("Compensa abstecer com Gasolina");
        } else {
            printf("Compensa abastecer com etanol");
        }
    } else {
            printf("Razao entre preco Etanol por Gasolina: Etanol e %.2f vezes mais caro", div1);
            if(div1 > useDiv1) {
                printf("Compensa abastecer com gasolina");
            } else {
                printf("Compensa abastecer com etanol");
            }
        }
    }