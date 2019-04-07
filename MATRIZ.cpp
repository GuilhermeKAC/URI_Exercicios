#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int L,C;
	int Linha, Coluna;
	
	printf("Defina o valor das Linhas [L]: ");
	scanf("%i", &L);
	printf("Define o valor das Colunas[C]: ");
	scanf("%i", &C);
	
	int Matriz_[L][C];	
	
	for(Linha = 0; Linha < L; Linha++ ){
		for(Coluna = 0; Coluna < C; Coluna++ ){
			printf("Digite o Valor [%d][%d]: ",Linha,Coluna);
			scanf("%d", &Matriz_[Linha][Coluna]);
		}	
	}
	printf("\tMATRIZ [%i][%i]\n",L,C);
	
	for (Linha = 0; Linha < L; Linha++ ){
		for (Coluna = 0; Coluna < C; Coluna++ ){
			printf("%i\t", Matriz_[Linha][Coluna]);
		}
		printf("\n");
	}
	system("PAUSE");
}
