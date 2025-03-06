#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

        int j = 1;
        char colunaLetra = 'A';
        int linha, coluna, linhaNum = 0;

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // iniciando a matriz:
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,3,3,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,3,0,0,0,3,0},
        {0,0,0,0,3,0,0,0,0,3},
        {0,0,0,0,3,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}

    };
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Exibindo o tabuleiro sem os navios :
    while (j <= 10){
        printf(" %c", colunaLetra++);//Exibindo as letras da coluna
        j++;
        }
      
       printf("\n");
       
       while (linhaNum <= 9){
      
        for (int i = 0; i < 10; i++)//loop para exibição do tabuleiro
        {
          printf(" 0");//Exibindo os zeros do tabuleiro
        }
          printf(" |%d\n", linhaNum);//Exibindo os números das linhas
        linhaNum++;
       }

    printf("\n");//Entrada do jogador:
    printf("Digite o numero da linha de 0 à 9\n");
    scanf ("%d", &linha);
    printf("Digite o numero da coluna de 0 à 9\n");
    scanf ("%d", &coluna);
       //Exibindo a escolha do jogador:
    printf("Encontrado %d...\n", tabuleiro[linha][coluna]);
    printf("\n");
       //Guardando a cordenada inserida pelo usuario e exibindo o local com o 1:
       if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10 ){
          int tiro = 1;
          tabuleiro[linha][coluna]=tiro;
       }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    // Exibindo o tabuleiro com os navios e o local do disparo do usuario:
       printf("Exibindo o tabuleiro completo...\n \n");
       int m = 1, n = 1;
       char colunaLetra2 = 'A';

       while (m <= 10){
        printf("%c ", colunaLetra2++);//Exibindo as letras da coluna
        m++;
        }
      
       printf("\n");


       
        for (int k = 0, linhaNum2 = 0; k < 10; k++)
        {
          for (int l = 0; l < 10; l++)
          {
            printf("%d ", tabuleiro[k][l]);
          }
          printf("|%d\n", linhaNum2);//Exibindo os números das linhas
          linhaNum2++;

        }


        printf("_______________________________________________________________\n");
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.

    
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
