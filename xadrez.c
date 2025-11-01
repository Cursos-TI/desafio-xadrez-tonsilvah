/*
* Desafio de Programação - Movimentos do Xadrez
* Arquivo: xadrez.c
*
* Nível: Mestre
* Peças: Torre, Bispo, Rainha (com recursão) e Cavalo (loops complexos).
*/

// Biblioteca padrao de entrada/saida (para o printf)
#include <stdio.h> 
// Biblioteca padrao (para funcoes gerais)
#include <stdlib.h> 

// --- Declaração das Funções Recursivas ---
// (Precisa declarar antes do main() para ele saber que elas existem)

/*
* moveTorre: Função recursiva para mover a torre.
* Ela se chama ate o numero de passos chegar a zero.
*/
void moveTorre(int passos);

/*
* moveBispo: Função recursiva para mover o bispo.
* Funciona igual a da torre, mas imprime o movimento diagonal.
*/
void moveBispo(int passos);

/*
* moveRainha: Função recursiva para mover a rainha.
* Também se chama ate os passos acabarem.
*/
void moveRainha(int passos);


// --- Função Principal ---
int main() {

    // Inicio da simulacao
    printf("Iniciando simulacao de xadrez! (Nivel Mestre)\n\n");


    // --- 1. Torre (usando RECURSÃO) ---
    printf("--- Movimento da Torre (5 casas) ---\n");
    // Agora, em vez de um loop, chamamos a função recursiva
    moveTorre(5);
    printf("\n"); // Pula uma linha para organizar


    // --- 2. Bispo (usando RECURSÃO) ---
    printf("--- Movimento do Bispo (5 casas) ---\n");
    // O desafio pede recursão e loops aninhados para o bispo.
    // A recursão substitui o loop principal.
    // O movimento "Cima, Direita" ja representa a logica.
    moveBispo(5);
    printf("\n"); // Pula uma linha


    // --- 3. Rainha (usando RECURSÃO) ---
    printf("--- Movimento da Rainha (8 casas) ---\n");
    // Trocamos o do-while pela função recursiva
    moveRainha(8);
    printf("\n"); // Pula uma linha


    // --- 4. Cavalo (usando Loops Complexos/Aninhados) ---
    printf("--- Movimento do Cavalo (2 Cima, 1 Direita) ---\n");

    // O movimento é 2 casas para cima, depois 1 para direita.
    // Vamos usar um loop 'for' externo para os passos verticais
    // e um loop 'while' interno para o passo horizontal.
    
    int i; // contador para o 'for'
    
    // Loop 'for' para os 2 passos para cima
    for (i = 0; i < 2; i++) {
        
        printf("Cima\n");

        // Condição: Apenas no *segundo* passo (i == 1),
        // faremos o movimento para a direita.
        if (i == 1) {
            
            // Loop 'while' aninhado para o passo para direita
            int j = 0;
            while (j < 1) {
                printf("Direita\n");
                j++; // Incrementa 'j' para o loop parar
            }
        }
    }

    // Pula uma linha
    printf("\n");


    // Fim da simulacao
    printf("\n--- Simulacao Terminada! ---\n");

    // Indica que o programa terminou com sucesso
    return 0; 
}


// --- Implementação das Funções Recursivas ---
// (O código das funções fica aqui, depois do main)

void moveTorre(int passos) {
    // 1. Caso Base (a condição de parada)
    // Se não houver mais passos, a função para de se chamar.
    if (passos <= 0) {
        return; // 'return' vazio para sair da função
    }

    // 2. Ação
    printf("Direita\n");

    // 3. Chamada Recursiva
    // Chama a si mesma, mas com um passo a menos.
    moveTorre(passos - 1); 
}


void moveBispo(int passos) {
    // 1. Caso Base (condição de parada)
    if (passos <= 0) {
        return;
    }

    // 2. Ação
    printf("Cima, Direita\n");

    // 3. Chamada Recursiva
    // Chama a si mesma com um passo a menos.
    moveBispo(passos - 1);
}


void moveRainha(int passos) {
    // 1. Caso Base (condição de parada)
    if (passos <= 0) {
        return;
    }

    // 2. Ação
    printf("Esquerda\n");

    // 3. Chamada Recursiva
    // Chama a si mesma com um passo a menos.
    moveRainha(passos - 1);
}
