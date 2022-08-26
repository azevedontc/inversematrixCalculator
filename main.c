#include <stdio.h>
//Constantes
#define MAX 50
void leMatriz(float matriz[][MAX], int l, int c);
void imprimeMatriz(float matriz[][MAX], int l, int c);


//Função principal
int main(){
    //Declaração de variáveis
	int m, n;
	float mat[MAX][MAX];
	
	//Apresentação
	printf("Ola, este programa ira ler e imprimir uma matriz em ordem inversa.\n");
	
	//Obtendo tamanho
	do{
		printf("- Informe o tamanho da matriz no formato mxn (no maximo 50x50):\n");
		scanf("%dx%d", &m, &n);
	} while (m<1 || m>50 || n<1 || n>50);
	
	//Lendo matriz
	leMatriz(mat, m, n);
	
	//Imprimindo matriz
	imprimeMatriz(mat, m, n);
	
    //Encerrando programa
	printf("Obrigado por utilizar o programa!\n");
    return 0;
}


//Função que lê a matriz
void leMatriz(float matriz[][MAX], int l, int c){
	//Variáveis auxiliares
	int i, j;
	
	//Loop de leitura
	for (i=0; i<l; i++){
		for (j=0; j<c; j++){
			printf("Informe o elemento (%d,%d): ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
}

//Função que imprime a matriz em ordem inversa
void imprimeMatriz(float matriz[][MAX], int l, int c){
	//Variáveis auxiliares
	int i, j;
	
	//Loop de impressão
	printf("\n----- MATRIZ INVERTIDA -----\n");
	for (i=l-1; i>=0; i--){
		for (j=c-1; j>=0; j--){
			printf("%.1f\t",  matriz[i][j]);		//Imprimindo com uma casa decimal e tabulação
		}
		printf("\n");	//Quebra de linha
	}
}