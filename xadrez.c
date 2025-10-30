#include <stdio.h>

/*
    ===============================================
    DESAFIO: NÍVEL MESTRE – CRIANDO MOVIMENTOS COMPLEXOS
    Autor: [Seu Nome]
    Linguagem: C
    Objetivo:
        - Substituir loops simples por funções recursivas (Torre, Bispo e Rainha)
        - Implementar loops aninhados e complexos para o Cavalo
        - Demonstrar domínio de recursão e controle de fluxo (break, continue)
    ===============================================
*/

// ==================================================
// Função recursiva: Movimento da TORRE
// ==================================================
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Condição de parada da recursão

    printf("Casa %d: Direita\n", atual);

    moverTorre(casas, atual + 1); // Chamada recursiva para a próxima casa
}

// ==================================================
// Função recursiva com loops aninhados: Movimento do BISPO
// ==================================================
void moverBispo(int linhaAtual, int colAtual, int movimentos) {
    if (movimentos == 0) return; // Condição de parada

    printf("Movimento %d:\n", movimentos);

    // Loop aninhado: simula o movimento diagonal (vertical + horizontal)
    for (int v = 1; v <= 1; v++) { // movimento vertical
        for (int h = 1; h <= 1; h++) { // movimento horizontal
            printf("Cima e Direita\n");
        }
    }

    // Chamada recursiva para continuar subindo na diagonal
    moverBispo(linhaAtual + 1, colAtual + 1, movimentos - 1);
}

// ==================================================
// Função recursiva: Movimento da RAINHA
// ==================================================
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Condição de parada da recursão

    printf("Casa %d: Esquerda\n", atual);

    moverRainha(casas, atual + 1); // Chamada recursiva
}

// ==================================================
// Função com loops complexos: Movimento do CAVALO
// ==================================================
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo em L (2 para cima, 1 para direita)\n");

    int movimentosEfetuados = 0;

    // Loops aninhados simulando a combinação de movimentos verticais e horizontais
    for (int vertical = 1; vertical <= 2; vertical++) { // duas casas para cima
        for (int horizontal = 1; horizontal <= 2; horizontal++) {
            // Condição para simular o movimento em "L"
            if (vertical == 2 && horizontal == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentosEfetuados++;
            } 
            else {
                // ignora movimentos inválidos
                continue;
            }

            // Se já realizou o número desejado de movimentos, sai do loop
            if (movimentosEfetuados >= movimentos) {
                break;
            }
        }

        if (movimentosEfetuados >= movimentos) {
            break;
        }
    }
}

// ==================================================
// Função principal
// ==================================================
int main() {
    printf("===============================================\n");
    printf("     DESAFIO MESTRE - MOVIMENTOS COMPLEXOS\n");
    printf("===============================================\n\n");

    // Variáveis que definem o número de movimentos de cada peça
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 6;
    int movimentosCavalo = 1;

    // ================= TORRE =================
    printf("=== Movimento da TORRE (Recursividade) ===\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // ================= BISPO =================
    printf("=== Movimento do BISPO (Recursividade + Loops Aninhados) ===\n");
    moverBispo(1, 1, casasBispo);
    printf("\n");

    // ================= RAINHA =================
    printf("=== Movimento da RAINHA (Recursividade) ===\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // ================= CAVALO =================
    printf("=== Movimento do CAVALO (Loops Complexos) ===\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    printf("=== Fim da Simulação ===\n");

    return 0;
}
