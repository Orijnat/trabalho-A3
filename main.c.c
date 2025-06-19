#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALOR 10
//funcao bubblesort de forma crescente
void bubble_sort_crescente(int *numeros, int tamanho) {
    int *copia = (int *)malloc(tamanho * sizeof(int));
    if (copia == NULL) {
        printf("Erro ao alocar memória!\n");
        
    }

    for (int i = 0; i < tamanho; i++) {
        copia[i] = numeros[i];
    }

    int aux;
    for (int contador = 1; contador < tamanho; contador++) {
        for (int i = 0; i < tamanho - 1; i++) {
            if (copia[i] > copia[i + 1]) {
                aux = copia[i];
                copia[i] = copia[i + 1];
                copia[i + 1] = aux;
            }
        }
    }

    printf("\n------------------------------------------------------\n");
    printf("Vetor organizado de forma crescente com Bubble Sort:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %d\n", i, copia[i]);
    }

    
}
//funcao bubblesort de forma decrescente

void bubble_sort_decrescente(int *numeros, int tamanho) {
    int *copia = (int *)malloc(tamanho * sizeof(int));
    if (copia == NULL) {
        printf("Erro ao alocar memória!\n");
        
    }

    for (int i = 0; i < tamanho; i++) {
        copia[i] = numeros[i];
    }

    int aux;
    for (int contador = 1; contador < tamanho; contador++) {
        for (int i = 0; i < tamanho - 1; i++) {
            if (copia[i] < copia[i + 1]) {
                aux = copia[i];
                copia[i] = copia[i + 1];
                copia[i + 1] = aux;
            }
        }
    }

    printf("\n------------------------------------------------------\n");
    printf("Vetor organizado de forma decrescente com Bubble Sort:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %d\n", i, copia[i]);
    }

    
}
//funcao insertion sort crescente
void insertion_sort_crescente(int *numeros, int tamanho) {
    int *copia = (int *)malloc(tamanho * sizeof(int));
    if (copia == NULL) {
        printf("Erro ao alocar memória!\n");
        
    }

    for (int i = 0; i < tamanho; i++) {
        copia[i] = numeros[i];
    }

    int chave, j;
    for (int i = 1; i < tamanho; i++) {
        chave = copia[i];
        j = i - 1;
        while (j >= 0 && copia[j] > chave) {
            copia[j + 1] = copia[j];
            j--;
        }
        copia[j + 1] = chave;
    }

    printf("\n------------------------------------------------------\n");
    printf("Vetor organizado de forma crescente com Insertion Sort:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %d\n", i, copia[i]);
    }

    
}
//funcao insertion sort decrescente

void insertion_sort_decrescente(int *numeros, int tamanho) {
    int *copia = (int *)malloc(tamanho * sizeof(int));
    if (copia == NULL) {
        printf("Erro ao alocar memória!\n");
        
    }

    for (int i = 0; i < tamanho; i++) {
        copia[i] = numeros[i];
    }

    int chave, j;
    for (int i = 1; i < tamanho; i++) {
        chave = copia[i];
        j = i - 1;
        while (j >= 0 && copia[j] < chave) {
            copia[j + 1] = copia[j];
            j--;
        }
        copia[j + 1] = chave;
    }

    printf("\n------------------------------------------------------\n");
    printf("Vetor organizado de forma decrescente com Insertion Sort:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %d\n", i, copia[i]);
    }

    
}
//iniciando o codigo
int main() {
    srand(time(NULL));

    int *numeros = (int *)malloc(VALOR * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("\n------------------------------------------------------\n");
    printf("Vetor desorganizado:\n");
    for (int i = 0; i < VALOR; i++) {
        numeros[i] = rand() % 100;
        printf("%d - %d\n", i, numeros[i]);
    }
//chamando as funcoes para execucao
    bubble_sort_crescente(numeros, VALOR);
    bubble_sort_decrescente(numeros, VALOR);
    insertion_sort_crescente(numeros, VALOR);
    insertion_sort_decrescente(numeros, VALOR);

   
    return 0;
}
