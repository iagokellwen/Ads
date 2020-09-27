#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");

    float fat= 1, n;
    printf("informe o número: ");
    scanf("%f", &n);
    for(float i=2.0;i<=n;i++){
        fat = fat * i;
    }
    printf ("Fatorial de %.2f = %.2f",n,fat);
    return 0;
}
