#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declaração da matriz
    int Tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // As variáveis das coordenadas
    int VertLinha;
    int VertColuna;
    int HorzLinha;
    int HorzColuna;
    int Diag1Linha; // A diagonal com formato da barra invertida (\)
    int Diag1Coluna;
    int Diag2Linha; // A diagonal com formato de barra (/)
    int Diag2Coluna;

    // Sistema simples para entrada de comando, para compensar não ter realizado o nível Mestre
    printf("\n=== ENTRADA ===\n");
    printf("Digite a linha do navio vertical: ");
    scanf("%d", &VertLinha);

    printf("Digite a coluna do navio vertical: ");
    scanf("%d", &VertColuna);

    printf("Digite a linha do navio horizontal: ");
    scanf("%d", &HorzLinha);

    printf("Digite a coluna do navio horizontal: ");
    scanf("%d", &HorzColuna);

    printf("Digite a coluna do primeiro navio diagonal: ");
    scanf("%d", &Diag1Linha);
    
    printf("Digite a linha do primeiro navio diagonal: ");
    scanf("%d", &Diag1Coluna);

    printf("Digite a coluna do segundo navio diagonal: ");
    scanf("%d", &Diag2Linha);
    
    printf("Digite a linha do segundo navio diagonal: ");
    scanf("%d", &Diag2Coluna);

    // Posicionamento dos navios
    printf("\n=== COORDENADAS ===\n");
    for (int i = 0; i < 3; i++) { // Aqui, 3 significa o comprimento do navio
        Tabuleiro[VertLinha + i][VertColuna] = 3; // Basicamente, ao colocar as coordenadas desejadas, o sistema muda o valor de três posições (partindo da selecionada) para 3, representando a parte de um navio. 
        printf("Coordenada do Navio Vertical: (%d, %d)\n", VertLinha + i, VertColuna); // "+ i" muda a linha onde está o ponto a alterar
    }

    for (int i = 0; i < 3; i++) {
        Tabuleiro[HorzLinha][HorzColuna + i] = 3; // Mesma coisa, mas agora o "+ i" muda a coluna
        printf("Coordenada do Navio Horizontal: (%d, %d)\n", HorzLinha, HorzColuna + i);
    }
    
    for (int i = 0; i < 3; i++) { 
        Tabuleiro[Diag1Linha + i][Diag1Coluna + i] = 3; // "+ i" em ambas linha e coluna fazem o navio sair na diagonal
        printf("Coordenada do primeiro Navio Diagonal: (%d, %d)\n", Diag1Linha + i, Diag1Coluna + i);
    }

    for (int i = 0; i < 3; i++) { 
        Tabuleiro[Diag2Linha - i][Diag2Coluna + i] = 3; // "- i" em um dos valores muda a rotação do outro navio diagonal
        printf("Coordenada do segundo Navio Diagonal: (%d, %d)\n", Diag2Linha - i, Diag2Coluna + i);
    }

    // Exibição do tabuleiro
    printf("\n=== TABULEIRO ===\n");
    for (int i = 0; i < 10; i++) { // 10 é o tamanho do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%d ", Tabuleiro[i][j]); // Para cada linha, imprima o valor de cada coluna
        }
        printf("\n");
    }


    return 0;
}
