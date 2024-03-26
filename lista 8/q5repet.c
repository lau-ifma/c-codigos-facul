//5. Desenvolva a calculadora da Lista 7, apenas com a diferença que, ela vai se manter aberta
//enquanto o usuário não digitar ZERO

#include <stdio.h>
#include <stdlib.h> //função system()

int main(){
    int i = 0;
    while (i==0)
    { 
       printf("====== CALCULADORA ======\n");
        float n1,n2;
        printf("Digite um valor: ");
        scanf("%f", &n1);

        printf("Digite outro valor: ");
        scanf("%f", &n2);
        
        int op;
        printf("\nQual operacao deseja realizar? \n");
        printf("1 - Soma\n");
        printf("2 - Multiplicacao\n");
        printf("3 - Subtracao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf(">> ");
        scanf("%d", &op);

        if(op == 1){
            printf("resultado = %.2f\n", (n1+n2));
        }
        else if(op == 2){
            printf("resultado = %.2f\n", (n1*n2));
        }
        else if(op == 3){
            printf("resultado = %.2f\n", (n1-n2));
        }
        else if(op == 4){
            printf("resultado = %.2f\n", (n1/n2));
        }
         else if(op == 0){
            printf("==== Fim do programa ====");
            break;
        }
        else {
            printf("Operacao invalida\n");
        };
        system("pause");
        system("cls");
    }
     
    return 0;
}
