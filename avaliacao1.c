
#include <stdio.h>

float soma (float n1, float n2){
	return n1+n2;
}

float sub (float n1, float n2){
	return n1-n2;
}

float mult (float n1, float n2){
	return n1*n2;
}

float div (float n1, float n2){
	return n1/n2;
}

float fatorial(float n1){
    int i, f = 1;
    for (i = 1; i <= n1; i++)
        f = f * i;
    return f;
}

float potenciacao(float n1, float n2){
	float x ;
	float res = 0;
	for (x = 1; x <n2; x++){
		res+= n1 * n1;
	}
	return res;
}

void main(){

	printf("======== VAMOS CALCULAR ========\n");
	
	float n1,n2;
	printf("Digite um valor: ");
	scanf("%f", &n1);

	printf("Digite outro valor: ");
	scanf("%f", &n2);
	

	int op;
	printf("\nQual operacao deseja realizar? \n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Fatoracao\n");
	printf("6 - Potenciacao\n");
	printf("0 - Sair\n");
	printf(">>>  ");
	scanf("%d", &op);

	if(op == 1){
		printf("\nOperacao selecionada: Adicao");
		printf("\nResultado = %.2f", soma(n1,n2));
	
	}
	else if(op == 2){
		printf("\nOperacao selecionada: Subtracao");
		printf("\nResultado = %.2f", sub(n1,n2));
	}
	else if(op == 3){
		printf("\nOperacao selecionada: Multiplicacao");
		printf("\nResultado = %.2f", mult(n1,n2));
	}
	else if(op == 4){
		printf("\nOperacao selecionada: Divisao");
		printf("\nResultado = %.2f", div(n1,n2));
	}
	else if(op == 5){
		int operacao;
		printf("\nOperacao selecionada: Fatoracao \n");
		printf("Deseja realizar a operacao para qual dos valores?\n 1. %.2f \n 2. %.2f \n >> ", n1, n2);
		scanf("%i", &operacao);
		if (operacao == 1){
			printf("Resultado = %.2f", fatorial(n1));
		} else if (operacao == 2){
			printf("Resultado = %.2f", fatorial(n2));
		}else{
			printf("\nOpcao invalida, tente novamente!");
		}
		
	}
	else if(op == 6){
		printf("\nOperacao selecionada: Potenciacao");
		printf("\nResultado = %.2f", potenciacao(n1,n2));
	}
	else if(op == 0){
		printf("\n ==== PROGRAMA ENCERRADO ====\n");

	}
	else {
		printf("Operacao invalida, tente novamente!");
	};
	
	printf("\n");
	
}
