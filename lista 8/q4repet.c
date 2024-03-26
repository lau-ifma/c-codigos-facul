// Escreva um algoritmo que determine o fatorial de um número. Para este problema, tem-se como
// entrada o valor do número do qual se deseja calcular o fatorial. O fatorial de 0 é igual a 1.
#include <stdio.h>

int fatorial( int num){
        int fat = 1;
        int i;
        for (i = 1; i <= num; i++){
            fat = fat * i;
        }
      return fat;
    }

int main() {

    int numero;
    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);
    
    printf("Fatorial = %d", fatorial(numero));

    return 0;
}
