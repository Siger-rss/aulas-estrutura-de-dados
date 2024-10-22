#include <stdio.h>
int main() {
int n; 
float *nota; 

    printf("Qual o número de notas? ");
    scanf("%d",&n);
    nota = (float *) malloc(sizeof(float));

    if(nota!=NULL){
    

        for(int i=0;i<n;i++) {
        scanf("%f", &nota[i]);
    }   

        for(int i=0;i<n;i++) {
        printf("\n %.2f ", nota[i]);
    }
    
    }else{
    printf("chora noob");
}

free(nota);

return 0;
}
