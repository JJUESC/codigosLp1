int main() {
    float gasP;
    float ethP;
    printf("Qual o valor da gasolina?: R$");
    scanf("%f", &gasP);
    printf("Qual o valor do etanol?: R$");
    scanf("%f", &ethP);
    float div = ethP/gasP;
    printf("Razao entre preco etanol por gasolina: %.2f%%\n", div*100);
    if(div > 0.7) {
        printf("Compensa Abastecer com gasolina\n");
    } else {
        printf("Compensa abastecer com etanol\n");
    }