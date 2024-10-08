#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    //<time.h> para usar o rand
    //Leia uma matriz de 4 x 4 elementos. Preencha a matriz com dados aleatóreso e calcule a soma dos elementos que estao abaixo da diagonal principal

int main()
{
int mat[4][4];
int soma=0;
srand(time(0));
 for(int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            mat[i][j]=rand()%100;
            if(i>j){
                soma+=mat[i][j];
            }
        }
    }
printf("soma da diagonal: %d",soma);

    return 0;
}
