#include <stdio.h>

int main() {
    // criando uma matriz para representar o tabuleiro
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    // Declarando dois vetores para cada navio e atribuindo o tamanho para 3 e o valor para 3
    int navio1[3]= {3,3,3}, navio2[3] = {3,3,3};
    // Declarando variaveis para declarar quais casas o primeiro navio irá ocupar
    int coluna1 = 2, linha1 = 4;
    // Declarando variaveis para declarar quais casas o segundo navio irá ocupar
    int coluna2 = 7, linha2 = 9;
    // Usada para contar as casas já preenchidas
    int preenchimento = 0;

    // Verificando se a posição do navio 1 é valida
    if (coluna1 <= 9 && linha1 + 3 <= 10){
        // Mudando o valor das colunas do tabuleiro para o valor de navio até realizar 3 colunas
        for(preenchimento; preenchimento < 3; preenchimento++){
            tabuleiro[coluna1][linha1 + preenchimento] = navio1[preenchimento];

        }
    }  else{
        printf("Posição invalida para o návio 1\n");
    }
    // Verificando se a posição do navio 2 é valida
    if (coluna2 + 3 <= 10 && linha1 <= 9){
       // Mudando o valor das colunas do tabuleiro para o valor de navio até realizar 3 colunas
        for(preenchimento = 0; preenchimento < 3; preenchimento++){
            // Parando o processo caso o navio esteja sobrepondo o outro
            if(tabuleiro[coluna2 + preenchimento][linha2] != 0) break;
            tabuleiro[coluna2 + preenchimento][linha2] = navio2[preenchimento];
          
        }
    }  else{
        printf("Posição invalida para o návio 2\n");
    }
    // Imprimindo as letras do cabeçario do tabuleiro
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J',};
    for(int k = 0; k < 1; k++){
    for(int h = 0; h < 10; h++){
        printf(" %c", colunas[h]);
    }
    printf("\n");
    }
    // exibindo o tabuleiro e as numerações de cada linha
    for(int posicaoV = 0; posicaoV < 10; posicaoV++){
        printf("%d ", posicaoV + 1);
        for(int posicaoH = 0; posicaoH < 10; posicaoH++ ){
        printf(" %d", tabuleiro[posicaoV][posicaoH]);
        
    }
        printf("\n");
        }   
    
    
    return 0;
    
    }





    



    
    




    



    





