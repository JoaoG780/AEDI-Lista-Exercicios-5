#include <stdio.h>

int mdc(int n1, int n2) {
    if (n2 == 0) {
        return n1;
    } else {
        return mdc(n2, n1 % n2);
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("O MDC de %d e %d e: %d", num1, num2, mdc(num1, num2));

    return 0;
}
