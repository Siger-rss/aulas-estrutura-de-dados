int main()
{
    /*Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
     Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.
    */

   int  menor, linha=1;
   int mat[2][2];
   mat[0][0]=3 ;
   mat[0][1]= 2;
   mat[1][0]= 3;
   mat[1][1]= 0;

    menor=mat[0][0];

    for(int i=0;i<2;i++){
        for (int j = 0;  j< 2; j++)
        {
            if (mat[i][j]<menor)
            {
                menor=mat[i][j];
                linha=i+1;
            }
        }
    }
    
    printf("o menor ta na linha %d",linha);


    return 0;
}
