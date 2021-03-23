
#include <stdio.h>

int main()
{
    
    int dividendo, divisor, resultado;
    
    printf("Informe dividendo: ");
    scanf("%d", &dividendo);
    printf("Divisor: ");
    scanf("%d", &divisor);
    
    resultado = 0;
    
    while(dividendo-divisor >=0) {
        dividendo = dividendo-divisor;
        resultado = resultado + 1;
    }
    
    
    printf("Resulado: %d\n", resultado);
    printf("Resto: %d", dividendo);
    

    return 0;
}


