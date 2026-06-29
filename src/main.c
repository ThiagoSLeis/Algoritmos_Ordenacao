#include <stdio.h>

void selection(int v[], int n);

int main(){

    int vetor[] = {5,3,1,4,2};

    int n = 5;

    selection(vetor,n);

    printf("Vetor ordenado:\n");

    for(int i=0;i<n;i++){

        printf("%d ", vetor[i]);
    }

    return 0;
}