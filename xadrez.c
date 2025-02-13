#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int Bispo;               // Nível Novato - Movimentação das Peças
    int Torre;               // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int Rainha;
    int Cavalo1;
    int Cavalo2;

    printf("### Primeiros Movimentos do Bispo ###\n");
    printf("\n");

    for(int Bispo =1; Bispo <= 5; Bispo++)
    {
        printf("O bispo se moveu %d casas na diagonal\n", Bispo);               // Implementação de Movimentação do Bispo
        printf("\n");                                                                   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    }                                                       

    printf("### Primeiros Movimentos da Torre ###\n");
    printf("\n");   

    for(int Torre =1; Torre <= 6; Torre++)                                                            // Implementação de Movimentação da Torre
    {   
        printf("A torre se moveu %d casas para direita\n", Torre);    
        printf("\n");                                   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita
    }                                                            

    printf("### Primeiros Movimentos da Rainha ###\n");                                           // Implementação de Movimentação da Rainha
    printf("\n");                                                                                                // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
 
    for(int Rainha = 1; Rainha<= 8; Rainha++)
    {
        printf("A Rainha se moveu %d casas para esquerda\n", Rainha); 
        printf("\n");     
    }
    
    printf("### Primeiros Movimentos do Cavalo ###\n"); 
    printf("\n");
    
    for( int Cavalo1 =2,Cavalo2=2; Cavalo1 <= 2,Cavalo2 <=2; Cavalo1++, Cavalo2++)

    printf("O cavalo se moveu %d casas para frente e %d casas para o lado\n", Cavalo1, Cavalo2);
    printf("\n");                                                                                                   // Nível Aventureiro - Movimentação do Cavalo
                                                                                                                                                        // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
                                                                                                                                                // Um loop pode representar a movimentação horizontal e outro vertical.

                                                                                                                                                     // Nível Mestre - Funções Recursivas e Loops Aninhados
                                                                                                                                            // Sugestão: Substitua as movimentações das peças por funções recursivas.
                                                                                                                                            // Exemplo: Crie uma função recursiva para o movimento do Bispo.

                                                                                                                                                    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
                                                                                                                                            // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
