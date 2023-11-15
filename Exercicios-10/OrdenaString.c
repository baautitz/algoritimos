#include <stdio.h>
#include <string.h>

void sortString(char *vet, int tl) {
	char aux;
	int i, j;
	for (i = 0; i < tl - 1; i++) {
		for (j = i + 1; j < tl; j++) {
			if (vet[i] > vet[j]) {
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux; 
			}
		}
	}
}

int main() {
	char palavra[50];
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	sortString(palavra, strlen(palavra));
	
	printf("Resultado: %s\n", palavra);
}
