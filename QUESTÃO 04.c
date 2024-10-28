#include <stdio.h>

int busca_binaria(int array[], int inicio, int fim, int elemento) {
    if (inicio > fim) {
        return -1; 
    }

    int meio = inicio + (fim - inicio) / 2;

    if (array[meio] == elemento) {
        return meio;
    } else if (array[meio] > elemento) {
        return busca_binaria(array, inicio, meio - 1, elemento);
    } else {
        return busca_binaria(array, meio + 1, fim, elemento);
    }
}

int main() {
    int array[] = {2, 4, 7, 10, 23, 34, 45, 56, 78, 89};
    int tamanho = 10;
    int elemento;

    printf("Digite o elemento a ser procurado: ");
    scanf("%d", &elemento);

    int resultado = busca_binaria(array, 0, tamanho - 1, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado no índice %d.\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
