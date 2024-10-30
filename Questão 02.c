#include <stdio.h>
#include <stdlib.h>

int* criarProgressaoAritmetica(int quantidade, int valorInicial, int razao) {
    int* array = (int*)malloc(quantidade * sizeof(int));
    for (int i = 0; i < quantidade; i++) {
        array[i] = valorInicial + i * razao;
    }
    return array;
}

void imprimirArray(int* array, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int quantidade, valorInicial, razao;
    
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &quantidade);
    
    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    
    printf("Digite a razão da progressão aritmética: ");
    scanf("%d", &razao);
    
    int* array = criarProgressaoAritmetica(quantidade, valorInicial, razao);
    
    printf("Array da progressão aritmética: ");
    imprimirArray(array, quantidade);
    
    free(array);
    
    return 0;
}
