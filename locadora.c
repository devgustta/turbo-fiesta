#include <stdio.h>

int main(int argc, char **argv)
{
	int popular[20], luxo[20],  i, cont = 0, op, op2, cont2 = 0;
	
	for(i=0;i<20;i++){
		popular[i] = 0;
		luxo[i] = 0;
		}
	
	do{
		printf("-------------------\n");
		printf("| L O C A D O R A |\n");
		printf("-------------------\n");
		printf("Escolha a classe do carro\n");
		printf("1 - Popular\n");
		printf("2 - Luxo\n");
		printf("3 - Sair\n");
		scanf("%d", &op);
		
		if(op == 1){
			printf("1 - Alugar\n");
			printf("2 - Devolver\n");
			scanf("%d", &op2);
			if(op2 == 1){
				if(popular[cont] == 0){
					popular[cont] = 1;
					cont = cont + 1;
					cont2 = cont2 + 1;
					if(cont2 == 20){
						printf("Carros Esgotados\n");
						}
					}
				}else if(op2 == 2){
					if(popular[cont] == 1){
						popular[cont] = 0;
						cont = cont - 1;
						cont2 = cont2 - 1;
						}
					}
			}else if(op == 2){
				printf("1 - Alugar\n");
				printf("2 - Devolver\n");
				scanf("%d", &op2);
				if(op2 == 1){
					if(luxo[cont] == 0){
						luxo[cont] = 1;
						cont = cont + 1;
						cont2 = cont2 + 1;
						if(cont2 == 20){
							printf("Carros Esgotados\n");
							}
						}
					}else if(op2 == 2){
						if(luxo[cont] == 1){
							luxo[cont] = 0;
							cont = cont - 1;
							cont2 = cont2 - 1;
							}
					}
				}
		}while(op != 3);
	
	
	return 0;
}

