#include <stdio.h>

void bubbleSort(int v[], int n);
void selection(int v[], int n);
void insertion(int v[], int n);
void mergeSort(int v[], int n);
void quickSort(int v[], int n);
void heapSort(int v[], int n);

int verificarOrdenado(int v[], int n){

    for(int i=0;i<n-1;i++){

        if(v[i] > v[i+1]){
            return 0;
        }

    }

    return 1;
}

void testarBubble(){

    int v[] = {5,4,3,2,1};

    bubbleSort(v,5);

    if(verificarOrdenado(v,5))
        printf("Bubble PASSOU\n");

    else
        printf("Bubble FALHOU\n");
}

void testarSelection(){

    int v[] = {9,2,6,1,5};

    selection(v,5);

    if(verificarOrdenado(v,5))
        printf("Selection PASSOU\n");

    else
        printf("Selection FALHOU\n");
}

void testarInsertion(){

    int v[] = {7,3,8,1,2};

    insertion(v,5);

    if(verificarOrdenado(v,5))
        printf("Insertion PASSOU\n");

    else
        printf("Insertion FALHOU\n");
}

void testarMerge(){

    int v[] = {10,7,4,8,2};

    mergeSort(v,5);

    if(verificarOrdenado(v,5))
        printf("Merge PASSOU\n");

    else
        printf("Merge FALHOU\n");
}

void testarQuick(){

    int v[] = {6,1,9,3,2};

    quickSort(v,5);

    if(verificarOrdenado(v,5))
        printf("Quick PASSOU\n");

    else
        printf("Quick FALHOU\n");
}

void testarHeap(){

    int v[] = {12,4,8,2,1};

    heapSort(v,5);

    if(verificarOrdenado(v,5))
        printf("Heap PASSOU\n");

    else
        printf("Heap FALHOU\n");
}

int main(){

    testarBubble();
    testarSelection();
    testarInsertion();
    testarMerge();
    testarQuick();
    testarHeap();

    return 0;
}