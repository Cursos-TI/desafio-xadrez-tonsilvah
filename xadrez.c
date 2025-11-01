/*
* Desafio de Programação - Movimentos do Xadrez
* Arquivo: xadrez.c
* * O objetivo é fazer as peças andarem usando os loops
* for, while e do-while.
*/

// Precisa disso pra usar o printf
#include <stdio.h> 
#include <stdlib.h> 

// Funcao principal
int main() {

    // Vou fazer uma parte pra cada peca
    printf("Iniciando simulacao de xadrez!\n\n");


    // --- 1. Torre (Vou usar o FOR) ---
    printf("--- Movimento da Torre (5 casas) ---\n");

    // 5 casas pra direita
    int passos_torre = 5;
    int i; // 'i' é o contador

    // Loop for: comeca em 0 e vai ate ser menor que 5
    for (i = 0; i < passos_torre; i++) {
        // A torre anda reto
        printf("Direita\n");
    }

    // Colocar um espaco pra separar
    printf("\n");


    // --- 2. Bispo (Vou usar o WHILE) ---
    printf("--- Movimento do Bispo (5 casas) ---\n");

    // O bispo tambem anda 5 casas
    int passos_bispo = 5;
    int contador_bispo = 0; // Preciso de um contador que comeca em zero

    // Loop while: enquanto o contador for menor que 5
    while (contador_bispo < passos_bispo) {
        
        // O bispo anda na diagonal
        printf("Cima, Direita\n");

        // IMPORTANTE: tenho que aumentar o contador!
        // Se eu esquecer isso, o programa trava (loop infinito)
        contador_bispo++; // Isso soma +1 no contador
    }

    // Mais um espaco
    printf("\n");


    // --- 3. Rainha (Vou usar o DO-WHILE) ---
    printf("--- Movimento da Rainha (8 casas) ---\n");

    // A rainha anda 8 casas pra esquerda
    int passos_rainha = 8;
    int j = 0; // Vou usar 'j' pra nao confundir com o 'i' la de cima

    // Loop do-while: ele faz primeiro e pergunta depois
    do {
        // A rainha anda pra esquerda
        printf("Esquerda\n");

        // Aumenta o contador 'j'
        j = j + 1; // (é a mesma coisa que j++)

    } while (j < passos_rainha); // Checa a condicao aqui no final


    // Avisar que acabou
    printf("\n--- Simulacao Terminada! ---\n");

    // Retorna 0 pra dizer que o programa funcionou
    return 0; 
}
