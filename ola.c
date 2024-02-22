#include <stdio.h>

int main(){


	int escolhido;
	int tabuada = 0;

	printf("Ola, escolha um numero: \n");
	scanf("%d", &escolhido);

	for(tabuada = 0; tabuada<= 10; tabuada++){
		printf("%d x %d = %d\n", escolhido, tabuada, escolhido*tabuada);
	}


}