#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
void lembreteNivel(){
	printf("Quanto maior seu nivel, menos chance voce tem de ganhar!\n\n\n");
	}

 void ok (){
 	printf("Digite OK se leu as regras");
 }
 int main(){
	printf("\n****************************************\n");
	printf("*Seja bem-vindo ao Jogo de Adivinhacao!*\n");
	printf("****************************************\n\n");

	printf("> Esse e um jogo onde voce vai precisar acertar o numero secreto!\n");
	printf("> Ele esta escondido entre o 0 ate o 100\n\n");
	printf("> Voce ira precisar escolher o nivel de dificuldade, pois: \n");
	lembreteNivel();


	//printf("Quanto maior seu nivel, menos chance voce tem de ganhar\n\n\n");


	int segundos = time(0);
	srand(segundos);
	int numerogrande = rand();

	int numeroSecreto = numerogrande % 100;
	int chute;
	int tentativas = 1;
	double pontos = 1000 ; 

	int acertou = 0;
		

	int nivel;

	printf("Qual nivel de dificuldade?\n\n");
	//printf("__Lembre-se: quanto maior o nivel, menos tentativas voce ira tr.e__\n\n");
	lembreteNivel();
	printf("\n> (1) - Facil \n> (2) - Medio \n> (3) - Dificil\n");
	printf("\nEscolha: ");
	scanf("%d", &nivel);


	int numerotentativas;
	

	/*if(nivel == 1){
		numerotentativas = 20;
	}
	else if(numerotentativas == 2){
		numerotentativas = 15;
	}
	else {numerotentativas = 6;

	}*/

	switch(nivel){
    	case 1:
    		numerotentativas = 20;
    		break;
    	case 2:
    		numerotentativas = 15;
    		break;
    	default: 
    		numerotentativas = 6;	
    		break;
    }

	for(int i = 1; i <= numerotentativas; i++){

		printf("\n____Tentativa %d____\n", tentativas);
		printf("Qual e o seu chute?\n");

		scanf("%d", &chute);
		printf("\nSeu chute foi: %d\n", chute);

		if(chute < 0){
			printf("Voce nao pode chutar numeros negativos.\n");
			continue;
		}

		acertou = (chute==numeroSecreto);
		int maior = chute > numeroSecreto;

		
		if(acertou){

			break;
		} 

		else if (maior) {
			printf("\n~~Seu chute ultrapassou o numero secreto! Tente novamente.~~\n");
		} 

		else{
			printf("\n~~Seu chute foi menor que o numero secreto! Tente novamente.~~\n");
		}


		tentativas ++;
		double pontosperdidos = abs(chute - numeroSecreto) / (double)2;

		pontos = pontos - pontosperdidos;
	}
			

	if(acertou){
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~~~~Parabens!! Voce acertou!~~~~\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~~~~Voce e um bom jogador!~~~~~~~~~~\n");
	printf("~~~~Voce ganhou em %d tentativas~~~~~\n", tentativas);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nTotal de pontos: %.2f\n", pontos);


	} else{

		printf("\n****************************************\n");
		printf("*************Fim do Jogo!***************\n");
		printf("****************************************\n");

		printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

    } 


}