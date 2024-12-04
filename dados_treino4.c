#include <stdio.h>
typedef struct  {
        float prec;
        int cod;
        char nome[50];
} Prod ;


int main() {

    Prod produto [5];

    for(int i=0; i<5;i++){
    printf("nome %i° produto: ",i+1);
    fgets(produto[i].nome, 50, stdin);
  
    produto[i].nome[strcspn(produto[i].nome, "\n")] = 0;

    printf("código de %s: ", produto[i].nome);
    scanf("%i", &produto[i].cod);
    getchar();
  
    printf("preço de %s: ", produto[i].nome);
    scanf("%f", &produto[i].prec);
    getchar();
}

    printf("\n produtos acima de 50 R$:");
    for(int i=0; i<5; i++){
        if(produto[i].prec>50.0){
        printf("\n%s", produto[i].nome);
    }
    }
       return 0;
}