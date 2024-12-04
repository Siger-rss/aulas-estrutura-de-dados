#include <stdio.h>
typedef struct  {
        char autor[50],titulo[100];
        int ano
    
} Livro ;


int main() {

    Livro livro [2];

    for(int i=0; i<2;i++){
    printf("nome %i° livro: ",i+1);
    fgets(livro[i].titulo, 50, stdin);
  
    livro[i].titulo[strcspn(livro[i].titulo, "\n")] = 0;

    printf("autor de %s: ", livro[i].titulo);
    fgets(livro[i].titulo, 50, stdin);
    
     livro[i].autor[strcspn(livro[i].autor, "\n")] = 0;
  
    printf("ano de %s: ", livro[i].titulo);
    scanf("%d", &livro[i].ano);
    getchar();
}

    printf("\n livros lançados após 2000's:");
    for(int i=0; i<2; i++){
        if(livro[i].ano>2000){
        printf("\n%s", livro[i].titulo);
    }
    }
       return 0;
}