#include <stdio.h>

int fibonacci(int n) {
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    
    int n;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    printf("O numero na posicao %d da seguencia de fibonacci é o numero: %d", n, fibonacci(n));
    
    return 0;
}
