#include <stdio.h>

int funcaoMaior(int n1, int n2, int n3) {
    
    int maior = n1;
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    
    return maior;
    
}

int main() {
    
    int num1, num2, num3;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    
    printf("O maior numero é o: %d", funcaoMaior(num1, num2, num3));
    
    return 0;
}
