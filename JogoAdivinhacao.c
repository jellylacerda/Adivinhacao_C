#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

int main(){
	printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    //declarando numero aleatorio
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numeroSecreto = numerogrande % 100;

    //var
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0; 
	
	//declarando nivel
    int nivel;
    printf("Escolha o nivel de dificuldade:\n");
    printf("(1) - Facil (2) - Medio (3) - Dificil\n"); 
    printf("Escolha: \n");
    scanf("%d", &nivel);
    int numerodetentativas;

    /*if(nivel == 1){
    	numerodetentativas = 20;
    }
    else if(nivel == 2){
    	numerodetentativas = 15;
    }
    else{
    	numerodetentativas = 6;
    }*/

    switch(nivel){
    	case 1:
    		numerodetentativas = 20;
    		break;
    	case 2:
    		numerodetentativas = 15;
    		break;
    	default: 
    		numerodetentativas = 6;	
    		break;
    }
    

    //loop para acerto/erro 
    for(int i = 1; i<= numerodetentativas; i++){

    	printf("Tentativa %d\n", tentativas);
    	printf("Qual eh o seu chute? ");
    	scanf("%d", &chute);
    	printf("Seu chute foi: %d\n", chute);

    	if(chute < 0){
    		printf("Voce nao pode chutar numeros negativos!\n");
    		continue;
    	}

    	acertou = (chute == numeroSecreto);
    	int maior = chute > numeroSecreto;

    	if (acertou){
    		break;
       	}
       	else if (maior){
       		printf("Seu chute foi maior que o numero secreto!\n");
       	}
       	else{
       		printf("Seu chute foi menor que o numero secreto!\n");
       	}

       	tentativas++;

       	double pontosperdidos = abs(chute - numeroSecreto) / (double)2;
       	pontos = pontos - pontosperdidos; 

    }

    printf("Fim do Jogo!\n");

    if(acertou){
    	printf("Voce ganhou!\n");
    	printf("Voce acertou em %d tentativas!\n", tentativas);
    	printf("Total de pontos: %.1f\n", pontos);
    } else {
    	printf("Voce perdeu! Tente de novo!\n");
    }
}