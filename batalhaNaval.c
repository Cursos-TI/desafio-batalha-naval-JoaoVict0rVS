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

    int Hab;
    int l1, l2;
    int c1, c2;

    int Cone[3][5] = {      // Matriz do cone
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
        };

    int Octaedro[3][5] = {     // Matriz do octaedro
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
        };

    int Cruz[3][5] = {        // Matriz da cruz
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
        };

    // Escolha da habilidade e endereço
    printf("\n\n"); 
    printf("Escolha qual habilidade usar:\n1. Cone\n2. Octaedro\n3. Cruz\n");
    scanf("%d", &Hab);
    
    printf("\n");
    printf("Escolha em qual linha aplicar: ");
    scanf("%d", &l1);

    printf("\n");
    printf("Escolha qual coluna usar: ");
    scanf("%d", &c1);

    l2 = l1 - 2;
    c2 = c1 - 3;


    if (Hab == 1){   // Chamada do cone
        for (int cx = 0; cx < 3; cx++){
                for (int cy = 0; cy < 5; cy++){
                if (matriz[cx + l2][cy + c2] + Cone[cx][cy] == 3)
            {
                Cone[cx][cy] = matriz[cx + l2][cy + c2];
            } else (
                matriz[cx + l2][cy + c2] = Cone[cx][cy]);
                }
            }

            } else if (Hab == 2){ // Chamada do octaedro
                    for (int ox = 0; ox < 3; ox++) {
                        for (int oy = 0; oy < 5; oy++) {
                        if (matriz[ox + l2][oy + c2] + Octaedro[ox][oy] == 3)
                    {
                        Octaedro[ox][oy] = matriz[ox + l2][oy + c2];
                    } else (
                        matriz[ox + l2][oy + c2] = Octaedro[ox][oy]);
                    }
                }

                } else if (Hab == 3){ // Chamada da cruz
                                for (int crx = 0; crx < 3; crx++) {
                                    for (int cry = 0; cry < 5; cry++) {
                                    if (matriz[crx + l2][cry + c2] + Cruz[crx][cry] == 3)
                                {
                                    Cruz[crx][cry] = matriz[crx + l2][cry + c2];
                                } else (
                                    matriz[crx + l2][cry + c2] = Cruz[crx][cry]);
                                    }
                                }
                    }
        
        
          else {
            printf("Opção inválida! Nenhuma habilidade aplicada.\n\n");
          }

// Chamada da matriz principal após habilidade

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

