#include <stdio.h>

int main() {


    //REPRESENTA O TABULEIRO
    int tabuleiro[10][10] = {0};
    
    int tamanho_navio = 3;

    
    // --- NAVIO HORIZONTAL ---
    int navio_h_linha = 2;
    int navio_h_coluna_inicio = 1;
    
    // Colocamos o valor 3 nas 3 posições horizontais seguidas

    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navio_h_linha][navio_h_coluna_inicio + i] = 3;
    }

    // --- NAVIO VERTICAL ---
    // Ele vai começar na Linha 5, Coluna 6. Vai ocupar as Linhas 5, 6 e 7 na mesma coluna.

    int navio_v_linha_inicio = 5;
    int navio_v_coluna = 6;
    
    // Colocamos o valor 3 nas 3 posições verticais seguidas

    for(int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navio_v_linha_inicio + i][navio_v_coluna] = 3;
    }

    // EXIBI O TABULEIRO
    printf("TABULEIRO DE BATALHA NAVAL\n\n");

    
    // Loop para percorrer as linhas
    for(int linha = 0; linha < 10; linha++) {

        // Loop para percorrer as colunas
        for(int coluna = 0; coluna < 10; coluna++) {


            // Imprime o número e um espaço em branco para ficar organizado
            printf("%d ", tabuleiro[linha][coluna]);
            
        }
        // Quando termina uma linha, pula para a próxima
        printf("\n");
    }

    return 0;
}