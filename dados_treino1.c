#include <stdio.h>

typedef struct {
    char nome[30];
    char cidade[20];
    unsigned long int CEP;
} endereco;

int main() {
    endereco pessoa[3];

    for (int i = 0; i < 3; i++) {
        printf("nome: ");
        fgets(pessoa[i].nome, 30, stdin);

        printf("cidade: ");
        fgets(pessoa[i].cidade, 20, stdin);

        printf("CEP: " );
        scanf("%lu", &pessoa[i].CEP);
        getchar();
    }
    
    for (int i = 0; i < 3; i++) {
        printf("\n\nPessoa %d:\n", i + 1);
        printf("Nome: %s", pessoa[i].nome);
        printf("Cidade: %s", pessoa[i].cidade);
        printf("CEP: %lu\n", pessoa[i].CEP);
        printf("\n");
    }

    return 0;
}
