// completo
#include <stdio.h>

void main(){
    int N, n, d, A;
    printf("Digite o valor de (N): ");
    scanf("%d", &N);

    n = N;
    d = 1;
    A = 0; 
    
    while (d<= N)
    {
        A = A + (n/d);
        n-= 1;
        d+= 1;  
    }

    printf("Valor de A = %i", A );

}
