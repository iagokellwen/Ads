#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
int x = 1;
while (x !=0){
	printf("Digite a opção desejada: \n");
	printf("1 - Futebol \n");
	printf("2 - Vôlei \n");
	printf("3 - Handebol \n");
	printf("4 - Tênis \n");
	printf("5 - Natação \n");
	printf("6 - Futsal \n");
	printf("7 - Video game \n");
	printf("8 - Skate \n");
	printf("9 - Judô \n");
	printf("0 - Sair \n\n");
	printf("Digite a opção desejada: \n");
	scanf("%d", &x);
	switch(x){
		case 0:
			printf("até logo!");
			break;
		case 1:
			printf("você escolheu Futebol!\n\n");
			break;
		case 2:
			printf("você escolheu Vôlei!\n\n");
			break;
		case 3:
			printf("você escolheu Handebol!\n\n");
			break;
		case 4:
			printf("você escolheu Tênis!\n\n");
			break;
		case 5:
			printf("você escolheu Natação!\n\n");
			break;
		case 6:
			printf("você escolheu Futsal!\n\n");
			break;
		case 7:
			printf("você escolheu Video game!\n\n");
			break;
		case 8:
			printf("você escolheu Skate!\n\n");
			break;
		case 9:
			printf("você escolheu Judô!\n\n");
			break;
		default:
			printf:("opção desejada inexistente. n\n");
			break;
		}
		}
		printf("\a");

	return 0;
}
