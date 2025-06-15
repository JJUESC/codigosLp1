#include <stdio.h>

int main()
{
    float peso = .0, altura = .0;
    float imc= .0;
    
    
    printf("Entre com o seu peso: ");
    scanf("%f", &peso);
    
    printf("Entre com sua altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    printf("Seu peso = %3.2f e sua altura = %3.2f\n", peso, altura);
    printf("Seu IMC = %3.2f", imc);
    
    if (imc < 18.5) {
        printf(", Magreza");
    } else if (imc >= 18.5 && imc < 25) {
        printf (", Normal");
    } else if (imc >= 25 && imc < 30) {
        printf(", Sobrepeso");
    } else if (imc >= 30 && imc <= 40) {
        printf(", Obesidade");
    } else {
        printf(", Obesidade Grave");
    }
    
    
    
    return 0;
}