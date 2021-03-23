
#include <stdio.h>

int main()
{
    int n, i, fat;
    
    printf("Informe um numero: ");
    scanf("%d", &n);
    
    i = 1;
    fat = 1;
    
    while(i<=n) {
        fat = fat * i;
        i = i + 1;
    }
    
    printf("Fatorial: %d", fat);
    //n! = n * n-1 * n-2 * ... * 1
    
    return 0;
}


