#include <stdio.h>

int funcao (int n) {
    
    if (n == 1) {

        return 1;

    } else {

        return n + funcao(n - 1);

    }

}

int main() {
    
    int n;
    
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido");
    } else {
    
        printf("A soma de todos os numeros de 1 a %d é: %d", n, funcao(n));
    }
    return 0;
}
