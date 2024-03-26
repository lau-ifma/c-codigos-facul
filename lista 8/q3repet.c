//  Crie um programa que peça 10 números inteiros e apresente: 
// a média, o maior o menor.
#include <stdio.h>

int main() {

    int i, num, media, maior, menor, x;

    printf("Digite um valor: ");
    scanf("%d", &x);
    media = x;
    maior = x;
    menor = x;
    
    for (i = 1; i <= 9; i++){
        printf("Digite um valor: ");
        scanf("%d", &num);
        media+=num;
        if (num > maior){
            maior=num;
        }
        if (num < menor){
            menor = num;
        }
    }
    
    printf("maior = %i\n", maior);
    printf("menor = %i\n", menor);
    printf("media = %i\n", media/10);
    return 0;
}
