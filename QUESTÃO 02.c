#include <stdio.h>

void funcaoArray(int array[], int tamanho, int valorInicial, int razao) {

    int i;
    
    for (i = 0; i < tamanho; i++) {
        array[i] = valorInicial + i * razao;
    }
}

void printArray(int array[], int tamanho) {
    
    int i;
    
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    
    int array[100], tamanho, valorInicial, razao;
    
    printf("Digite o tamanho do array (max = 100): ");
    scanf("%d", &tamanho);
    
    if (tamanho > 100) {
        printf("Tamanho invalido.");
        return 1;
    }
    
    printf("Digite o valor inicial do array: ");
    scanf("%d", &valorInicial);
    
    printf("Digite a razao do array: ");
    scanf("%d", &razao);
    
    funcaoArray(array, tamanho, valorInicial, razao);
    
    printf("Resultado do array: ");
    printArray(array, tamanho);
    
    return 0;
}
