#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);
    
    int resultado = mcd(a, b);
    printf("O mínimo comum divisor de %d e %d é %d\n", a, b, resultado);
    
    return 0;
}
