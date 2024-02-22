#include <stdio.h>
/* #include <stdio.h> é uma biblioteca de arquivo
//e cabeçalho que nos permite trabalhar com funções
//de entrada e saída, como printf()


//main(). Isso é chamado de função . 
//Qualquer código dentro de suas chaves {}será executado.


	float myFloatNum = 3.5;
  	double myDoubleNum = 19.99;

	printf("%.1f\n", myFloatNum); // Outputs 3.5
	printf("%lf", myDoubleNum); // Outputs 19.990000

int main(){

	int userVarX; 
	int userVarY;
	
	printf("Ola, tudo bem? Seja bem vindo!\n");
	printf("Por favor, digite o 1 numero...\n");
	scanf("%d", &userVarX);
	printf("Por favor, agora digite 2 numero...\n");
	scanf("%d", &userVarY);	
	printf("Seu resultado e: %d ", userVarX*userVarY);

}

int main(){
	int numeros;

	printf("Ola! Irei contar de 1 a 100 para voce!\n");
	printf("Comecando....\n");

	for(numeros = 1; numeros <= 100; numeros++){
		printf("\n%d", numeros);

	}
	
}

int main(){
	
	int numero = 1;

	printf("Ola! Irei contar de 1 a 100 para voce!\n");
	printf("Comecando....\n");

	while(numero <= 100){
		printf("\n%d", numero);
		numero++;

	}	~~~~~~while(numero <= 100){
		printf("\n%d + ", numero);
		numero++;
	
}

int main(){

	
	int numero = 1;
	int sum = numero + 1;


	printf("Abaixo voce vera a nossa calculadora do operador de adicao:");

	for(numero = 1; numero <= 100; numero++){

		printf("\n%d + %d ", numero, sum);
		
	}

	//if(sum)


	

}

int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma eh %d", soma);
}

#converter variaveis
#include <stdio.h>

int main() {

    int a = 3;
    int b = 2;
    double pontos = 3 / (double)b;
    printf("%f\n", pontos);

        double pi = 3.1415;
    int piconvertido = (int)pi;

}

