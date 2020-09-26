#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf ("Numero: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf ("Numero par");
    else
        printf("Numero impar");
    return 0;
}
