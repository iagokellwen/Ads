#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");

    int ano;
    printf("informe o ano: ");
    scanf("%i",&ano);

    if (ano % 4 == 0 && ano %100 !=0 || ano % 400 == 0 )//para verificar os anos 1700 e 1900 que n�o s�o bissextos
        {
        printf("O ano � bissexto");
    }
    else
        {printf("O ano n�o � bissexto");
        }
    return 0;
}
