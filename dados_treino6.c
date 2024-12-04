#include <stdio.h>
#include <string.h>
typedef struct  {
        float altura, peso;
        int cpf;
        char nome[50], gen;
} Prod ;
float IMC(float altura, float peso) 
{
  float imc;
  imc = peso/(altura*altura);
  return(imc); 
  
}


const char *Mtab(float pimc) {

    if ((pimc>20.7 && pimc<26.4) || pimc==20.7) {
        return ("no peso normal");
    }
    if ((pimc>26.4 && pimc<27.8) || pimc==26.4) {
        return ("marginalmente acima do peso");
    }
    if ((pimc>27.8 && pimc<31.1) || pimc==27.8) {
        return ("acima do peso ideal");
    }
    if (pimc>31.1) {
        return ("obeso");
    }else{
    return ("abaixo do peso");
    }
}

const char *Ftab(float pimc) {

    if ((pimc>19.1 && pimc<25.8) || pimc==19.1) {
        return ("no peso normal");
    }
    if ((pimc>25.8 && pimc<27.3) || pimc==25.8) {
        return ("marginalmente acima do peso");
    }
    if ((pimc>27.3 && pimc<32.3) || pimc==27.3) {
        return ("acima do peso ideal");
    }
    if (pimc>32.3) {
        return ("obeso");
    }else{
    return ("abaixo do peso");
    }
}

int main() {
    char esc, condi[50], *ccondi=&condi[0];
    int find;
    Prod pessoa [5];

    for(int i=0; i<5;i++){
    printf("nome pessoa %i: ",i+1);
    fgets(pessoa[i].nome, 50, stdin);
  
    pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = 0;

    printf("genero %s:(m/f) ", pessoa[i].nome);
    scanf("%c", &pessoa[i].gen);
    getchar();

    printf("CPF de %s: ", pessoa[i].nome);
    scanf("%i", &pessoa[i].cpf);
    getchar();
  
    printf("altura de %s: ", pessoa[i].nome);
    scanf("%f", &pessoa[i].altura);
    getchar();

    printf("peso de %s: ", pessoa[i].nome);
    scanf("%f", &pessoa[i].peso);
    getchar();

}
float pimc;
int t=0;
    while(t!=1){
    printf("\n deseja pesquisar IMC de alguem?(s/n) ");
    
    scanf(" %c",&esc);
    if(esc=='s'||esc=='S'){
        printf("\nbusque pelo cpf: ");
        scanf("%i",&find);
        t=1;
    }else if(esc=='N'||esc=='n'){
        return 0;
    }

    }
    for(int i=0; i<5; i++){
        if(pessoa[i].cpf==find){
        pimc=IMC(pessoa[i].altura,pessoa[i].peso);
        if(pessoa[i].gen=='m' || pessoa[i].gen=='M'){
             ccondi = Mtab(pimc);
        }else{
             ccondi = Ftab(pimc);
        }

        printf("sexo: %c\t nome: %s\t IMC: %f\t condicao: %s", pessoa[i].gen, pessoa[i].nome, pimc, ccondi);
    
    }else{
        printf("cpf nao encontrado");
    }
    }
    
       return 0;
}