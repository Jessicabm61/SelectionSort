#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v[10] = {45, 7, 86, 14, 5, 99, -3, 55, 100, 12};
	int i, n = 10;
	
	printf("Vetor original = ");
	for( i = 0 ; i < n ; i++ )
		printf("%d ", v[i]);
	printf("\n");
	
	printf("-------\nOrdenando o vetor...\n\n");
	
	for( i = 0 ; i < n-1 ; i++ ){ //varia o indice
		int j, i_menor = i;
		for( j = i+1 ; j < n ; j++ ){ //encontra o menor valor
			if( v[j] < v[i_menor] ){ 
				i_menor = j;
			}
		}
		int aux = v[i]; //troca o menor valor de posição
		v[i] = v[i_menor];
		v[i_menor] = aux;
		
		printf("Pivo em %d = ", i);
		for( j = 0 ; j < n ; j++ )
			printf("%d ", v[j]);
		printf("\n");
		
	}
	
	printf("\n--------\nVetor ordenado = ");
	for( i = 0 ; i < n ; i++ )
		printf("%d ", v[i]);
	printf("\n");

	return 0;
}
