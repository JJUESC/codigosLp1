#include <stdio.h>
#include <math.h>

int main(){                                         //definicao: fonte = torre onde os discos comecam
                                                   //definicao: auxiliar = torre que ficara vazia no final                                                     
	int n; //numero de discos                      //definicao: destino = torre que ficara completa no final
	float min; //passos minimos para completar as torres
	printf("Digite a quantidade de discos a ser usada: ");
	scanf("%i", &n);
	printf("Algoritmo Torre de Hanoi para n = %i Discos: %0.f Passos minimos", n, min = (exp2(n)-1));
	for(int step = 1; step <= min; step++) { 
		if(n % 2 != 0){ //loop para as torres com numero de discos impares           
		    if(step == 1 || (step % 6) == 1 ){
			    printf("\nPasso %i: mover o disco %i para torre destino", step, 1);
		    }
		    if(step == 3 || (step % 6) == 3){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 1);
		    }
		    if(step == 5 || (step % 6) == 5){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 1);
		    }
		    if(step == 2 || (step % 12) == 2){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 2);
		    }
		    if(step == 6 || (step % 12) == 6){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 2);
		    }
		    if(step == 10 || (step % 12) == 10){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 2);
		    }
		    if(step == 4 || (step % 24) == 4){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 3);
		    }
		    if(step == 12 || (step % 24) == 12){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 3);
		    }
		    if(step == 20 || (step % 24) == 20){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 3);
		    }
		    if(step == 8 || (step % 48) == 8){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 4);
		    }
		    if(step == 24 || (step % 48) == 24){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 4);
		    }
		    if(step == 40 || (step % 48) == 40){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 4);
		    }
		    if(step == 16 || (step % 96) == 16){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 5);
		    }
		    if(step == 48 || (step % 96) == 48){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 5);
		    }
		    if(step == 80 || (step % 96) == 80){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 5);
		    }
		    if(step == 32 || (step % 192) == 32){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 6);
		    }
		    if(step == 96 || (step % 192) == 96){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 6);
		    }
		    if(step == 160 || (step % 192) == 160){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 6);
		    }
		    if(step == 64 || (step % 384) == 64){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 7);
		    }
		    if(step == 192 || (step % 384) == 192){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 7);
		    }
		    if(step == 320 || (step % 384) == 320){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 7);
		    }
		    if(step == 128 || (step % 768) == 128){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 8);
		    }
		    if(step == 384 || (step % 768) == 384){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 8);
		    }
		    if(step == 640 || (step % 768) == 640){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 8);
		    }
		    if(step == 256 || (step % 1536) == 128){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 9);
		    }
		} else { //loop para torres com numeros de discos pares
		    if(step == 1 || (step % 6) == 1 ){
			    printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 1);
		    }
		    if(step == 3 || (step % 6) == 3){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 1);
		    }
		    if(step == 5 || (step % 6) == 5){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 1);
		    }
		    if(step == 2 || (step % 12) == 2){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 2);
		    }
		    if(step == 6 || (step % 12) == 6){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 2);
		    }
		    if(step == 10 || (step % 12) == 10){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 2);
		    }
		    if(step == 4 || (step % 24) == 4){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 3);
		    }
		    if(step == 12 || (step % 24) == 12){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 3);
		    }
		    if(step == 20 || (step % 24) == 20){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 3);
		    }
		    if(step == 8 || (step % 48) == 8){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 4);
		    }
		    if(step == 24 || (step % 48) == 24){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 4);
		    }
		    if(step == 40 || (step % 48) == 40){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 4);
		    }
		    if(step == 16 || (step % 96) == 16){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 5);
		    }
		    if(step == 48 || (step % 96) == 48){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 5);
		    }
		    if(step == 80 || (step % 96) == 80){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 5);
		    }
		    if(step == 32 || (step % 192) == 32){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 6);
		    }
		    if(step == 96 || (step % 192) == 96){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 6);
		    }
		    if(step == 160 || (step % 192) == 160){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 6);
		    }
		    if(step == 64 || (step % 384) == 64){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 7);
		    }
		    if(step == 192 || (step % 384) == 192){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 7);
		    }
		    if(step == 320 || (step % 384) == 320){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 7);
		    }
		    if(step == 128 || (step % 768) == 128){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 8);
		    }
		    if(step == 384 || (step % 768) == 384){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 8);
		    }
		    if(step == 640 || (step % 768) == 640){
		        printf("\nPasso %i: mover o disco %i para torre fonte", step, 8);
		    }
		    if(step == 256 || (step % 1536) == 128){
		        printf("\nPasso %i: mover o disco %i para torre auxiliar", step, 9);
		    }
		    if(step == 768 || (step % 1536) == 768){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 9);
		    }
		    if(step == 512 || (step % 3072) == 512){
		        printf("\nPasso %i: mover o disco %i para torre destino", step, 10);
		    }
		}
	}

	return 0;
}