#include <stdio.h>

void trocarQuick(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int v[], int inicio, int fim){

    int pivo = v[fim];

    int i = inicio - 1;

    for(int j = inicio; j < fim; j++){

        if(v[j] < pivo){

            i++;

            trocarQuick(&v[i], &v[j]);
        }

    }

    trocarQuick(&v[i+1], &v[fim]);

    return i + 1;

}

void quickSortRec(int v[], int inicio, int fim){

    if(inicio < fim){

        int indicePivo = partition(v, inicio, fim);

        quickSortRec(v, inicio, indicePivo - 1);

        quickSortRec(v, indicePivo + 1, fim);

    }

}

void quickSort(int v[], int n){

    quickSortRec(v, 0, n - 1);

}