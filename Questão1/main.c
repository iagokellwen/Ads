#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
int x = 1;
while (x !=0){
	printf("Digite a op��o desejada: \n");
	printf("1 - Futebol \n");
	printf("2 - V�lei \n");
	printf("3 - Handebol \n");
	printf("4 - T�nis \n");
	printf("5 - Nata��o \n");
	printf("6 - Futsal \n");
	printf("7 - Video game \n");
	printf("8 - Skate \n");
	printf("9 - Jud� \n");
	printf("0 - Sair \n\n");
	printf("Digite a op��o desejada: \n");
	scanf("%d", &x);
	switch(x){
		case 0:
			printf("at� logo!");
			break;
		case 1:
			printf("voc� escolheu Futebol!\n\n");
			break;
		case 2:
			printf("voc� escolheu V�lei!\n\n");
			break;
		case 3:
			printf("voc� escolheu Handebol!\n\n");
			break;
		case 4:
			printf("voc� escolheu T�nis!\n\n");
			break;
		case 5:
			printf("voc� escolheu Nata��o!\n\n");
			break;
		case 6:
			printf("voc� escolheu Futsal!\n\n");
			break;
		case 7:
			printf("voc� escolheu Video game!\n\n");
			break;
		case 8:
			printf("voc� escolheu Skate!\n\n");
			break;
		case 9:
			printf("voc� escolheu Jud�!\n\n");
			break;
		default:
			printf:("op��o desejada inexistente. n\n");
			break;
		}
		}
		printf("\a");

	return 0;
}
