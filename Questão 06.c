#include <stdio.h>

int maiorDeTres(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int maior = maiorDeTres(num1, num2, num3);
    printf("O maior número é: %d\n", maior);
    
    return 0;
}
