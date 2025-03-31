#include <stdio.h>

int main(){

int linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //Vetor para colunas

    int matriz[10][10];        //Matriz montada
        for (int l = 0; l < 10; l++){
            for (int c = 0; c < 10; c++){

                if(c > 2 && c <6 && l == 8 - 1){ // Barco na horizontal
                    matriz[l][c] = 3;

                } else if (l > 3 && l <7 && c == 1 - 1){ // Barco na vertical
                    matriz[l][c] = 3;

                } else if (l == c && l < 3) { // Barco na diagonal esquerda
                    matriz[l][c] = 3;

                } else if (l + c == 10 && c > 4 && c < 8) { // Barco na diagonal direita
                    matriz[l][c] = 3;

                } else
                matriz[l][c] = 0; // Mar
            } 
        }
    
    printf("  "); //Espaço para identação ficar correta no terminal

    for (int i = 0; i < 10; i++) {   //Declaração das colunas
        printf(" %c", linhas[i]);
    }

    for(int j = 1, x = 0; j <= 10 && x < 10; j++, x++){ //Declaração linhas
        
        if (j < 10){
        printf("\n %d ", j);
        } else{
        printf("\n%d ", j);
        }
            
            for (int y = 0; y < 10; y++) {        
               printf("%d ", matriz[x][y]);
            }
    }
    return 0;
}


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

