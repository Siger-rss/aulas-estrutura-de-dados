    
/*Faça um programa que preenche um vetor aleatoriamente com 10 inteioros, mas a saída deve ser um vetor com valores ordenados.
    */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int vet[10];
    printf("valores aleatorios:\n\n");
   
        for (int i = 0; i < 10; i++){   
        vet[i]= rand() %100;
        printf("%d ", vet[i]);
    }

    int aux, i, j;
    while(j<10){
    i=0;
    while (i<10)
    {
        if (vet[i]>vet[i+1])
        {
            aux=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=aux;
        }
        
        i++;
    }
    j++;
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++){   
        
        printf("%d ", vet[i]);
    }

    getch();
    return 0;
}


