#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	char movimento;
	int aux=0;
	
	printf("Voce esta em um labirinto: \n");
	
	while (aux==0){
	printf("Voce tem caminho para frente (F)\n");
	scanf(" %c",&movimento);
	
	if(movimento=='F'){
	printf("Otimo agora ha caminhos para a esquerda(E) e para a direira(D)?\n");
	scanf(" %c",&movimento);
	if(movimento=='D'){
		printf("Sem saida Voce ira reiniciar o labirinto\n ");	
		getch();
		system ("cls");
	}
	if(movimento=='E'){
		printf("Boa escolha  agora voce tem caminhos para frente(F) e para tras(T) \n");
		scanf(" %c",&movimento);
		if(movimento =='T'){
		printf("Sem saida Voce ira reiniciar o labirinto\n ");
		getch();
		system ("cls");
	}
		if(movimento =='F'){
			movimento=10;
			printf("Agora voce pode ir para a esquerda(E),direita(D) e para frente(F)\n");	
			scanf(" %c",&movimento);
			
			if(movimento=='E'){
				printf("Sem saida Voce ira reiniciar o labirinto\n ");
				getch();
				system ("cls");	
			}
			if(movimento =='D'){
				printf("Voce so tem caminho para frente(F)\n");
				scanf(" %c",&movimento);
				if(movimento =='F'){
						printf("Sem saida Voce ira reiniciar o labirinto\n ");
						getch();
						system ("cls");
						movimento=10;
				}
			}
			if(movimento =='F'){
				printf("Agora voce so tem caminho para a Esquerda (E) \n");
				scanf(" %c",&movimento);
				if(movimento =='E'){
					printf("Agora voce pode ir para frente(F) e para esquerda(E)\n");
					scanf(" %c",&movimento);
					if(movimento =='E'){
						printf("Agora voce tem caminhos para frente(F) e para tras(T) \n");
						scanf(" %c",&movimento);
						if(movimento =='F'){
							printf("Sem saida Voce ira reiniciar o labirinto\n ");
							getch();
							system ("cls");
							movimento=10;	
						}
						if(movimento =='T'){
							printf("Sem saida Voce ira reiniciar o labirinto\n ");
							getch();
							system ("cls");	
						}
					}
					if(movimento =='F'){
						printf("Voce so pode ir para a direira(D) e comeca ver a saida ");
						scanf(" %c",&movimento);
						if(movimento =='D'){
							printf("============= Parabens voce chegou ao fim do labirinto =============\n");						
							aux=1;		
}
}
}
}
	}
	}
	}	
	else{
	printf("Voce errou e ira reiniciar o labirinto // Poxa era so ir para frente :( \n");
	getch();
	system ("cls");
}
}
getch();
}
