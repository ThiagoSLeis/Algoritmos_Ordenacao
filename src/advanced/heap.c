#include <stdio.h>

void trocarHeap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void heapify(int v[], int n, int i){

    int maior = i;

    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if(esquerda < n && v[esquerda] > v[maior]){

        maior = esquerda;

    }

    if(direita < n && v[direita] > v[maior]){

        maior = direita;

    }

    if(maior != i){

        trocarHeap(&v[i], &v[maior]);

        heapify(v, n, maior);

    }

}

void heapSort(int v[], int n){

    for(int i = n/2 - 1; i >= 0; i--){

        heapify(v, n, i);

    }

    for(int i = n - 1; i > 0; i--){

        trocarHeap(&v[0], &v[i]);

        heapify(v, i, 0);

    }

}