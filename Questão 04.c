#include <stdio.h>

int buscaBinaria(int array[], int inicio, int fim, int valor) {
    if (inicio > fim) {
        return -1;
    }
    
    int meio = (inicio + fim) / 2;
    
    if (array[meio] == valor) {
        return meio;
    } else if (array[meio] > valor) {
        return buscaBinaria(array, inicio, meio - 1, valor);
    } else {
        return buscaBinaria(array, meio + 1, fim, valor);
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valor, resultado;
    
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);
    
    resultado = buscaBinaria(array, 0, tamanho - 1, valor);
    
    if (resultado != -1) {
        printf("Valor encontrado no índice %d\n", resultado);
    } else {
        printf("Valor não encontrado\n");
    }
    
    return 0;
}
