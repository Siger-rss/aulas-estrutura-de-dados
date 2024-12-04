#include <stdio.h>
typedef struct  {
        float nota;
        int matri;
        char nome[50];
} Infor ;


int main() {

    Infor Aluno [3];

    for(int i=0; i<3;i++){
    printf("nome %i° aluno: ",i+1);
    fgets(Aluno[i].nome, 50, stdin);
  
    Aluno[i].nome[strcspn(Aluno[i].nome, "\n")] = 0;

    printf("matricula de %s: ", Aluno[i].nome);
    scanf("%i", &Aluno[i].matri);
    getchar();
  
    printf("nota de %s: ", Aluno[i].nome);
    scanf("%f", &Aluno[i].nota);
    getchar();
}

    for(int i=0; i<3; i++){

        printf("\n---aluno %s--- \nmatricula: %i \nnota: %.2f \n", Aluno[i].nome, Aluno[i].matri, Aluno[i].nota);

    }
       return 0;
}