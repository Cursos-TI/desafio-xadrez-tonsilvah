/*
* Desafio de Programação - Movimentos do Xadrez
* Arquivo: xadrez.c
*
* Nível: Aventureiro
* Peças: Torre, Bispo, Rainha e Cavalo.
*/

// Biblioteca padrao de entrada/saida (para o printf)
#include <stdio.h> 
// Biblioteca padrao (para funcoes gerais)
#include <stdlib.h> 

// Funcao principal do programa
int main() {

    // Inicio da simulacao
    printf("Iniciando simulacao de xadrez!\n\n");


    // --- 1. Torre (usando FOR) ---
    printf("--- Movimento da Torre (5 casas) ---\n");

    int passos_torre = 5;
    int i; // 'i' eh a variavel de contagem

    // Loop 'for' para repetir 5 vezes
    for (i = 0; i < passos_torre; i++) {
        // Imprime o movimento da Torre
        printf("Direita\n");
    }

    // Pula uma linha para organizar
    printf("\n");


    // --- 2. Bispo (usando WHILE) ---
    printf("--- Movimento do Bispo (5 casas) ---\n");

    int passos_bispo = 5;
    int contador_bispo = 0; // Contador para o loop 'while'

    // Loop 'while' executa enquanto contador < 5
    while (contador_bispo < passos_bispo) {
        
        // Imprime o movimento diagonal
        printf("Cima, Direita\n");

        // Incrementa o contador para evitar um loop infinito
        contador_bispo++; 
    }

    // Pula uma linha para organizar
    printf("\n");


    // --- 3. Rainha (usando DO-WHILE) ---
    printf("--- Movimento da Rainha (8 casas) ---\n");

    int passos_rainha = 8;
    int j = 0; // Novo contador 'j'

    // Loop 'do-while' executa pelo menos uma vez
    do {
        // Imprime o movimento da Rainha
        printf("Esquerda\n");

        // Incrementa o contador
        j = j + 1;

    } while (j < passos_rainha); // Condicao checada no final

    // Pula uma linha para organizar
    printf("\n");


    // --- 4. Cavalo (usando FOR e WHILE - Nível Aventureiro) ---
    printf("--- Movimento do Cavalo (2 Baixo, 1 Esquerda) ---\n");

    // O movimento é 2 casas para baixo, depois 1 para esquerda.
    // O desafio pede loops aninhados, mas para essa saida
    // os loops sao sequenciais (um depois do outro).

    int passos_baixo = 2;
    int passos_esquerda = 1;
    
    int k; // contador para o 'for'

    // 1. Movimento para baixo (usando 'for')
    // Repete 2 vezes
    for (k = 0; k < passos_baixo; k++) {
        printf("Baixo\n");
    }

    // 2. Movimento para esquerda (usando 'while')
    int m = 0; // contador para o 'while'
    
    // Repete 1 vez
    while (m < passos_esquerda) {
        printf("Esquerda\n");
        m++; // atualiza o contador do while
    }

    // Pula uma linha
    printf("\n");


    // Fim da simulacao
    printf("\n--- Simulacao Terminada! ---\n");

    // Indica que o programa terminou com sucesso
    return 0; 
}
