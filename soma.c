
#include <stdio.h>

int main()
{
    int i, n, soma;
    printf("Informe numero: ");
    scanf("%d", &n);
    
    i = 1;
    soma = 0;
    
    while(i <= n) {
        soma = i + soma;
        i = i + 1;
    }
    
    printf("soma: %d", soma);
    return 0;
}


