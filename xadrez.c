#include <stdio.h>


void movimentarBispo(){
    /* Função recursiva para a movimentação do Bispo, usando
    loops aninhados
    */
    int bispo = 5;

    printf("Bispo se movendo\n"); // coloquei esse printf para ficar claro quem ta se movendo
    for (int i = 0; i < bispo; i++)
    {
        for (int j = 0; j == 0; j++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    

};


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int torre = 5;
    int rainha = 8;
    int cavalo = 4;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    movimentarBispo();

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre se movendo\n"); // coloquei esse printf para ficar claro quem ta se movendo
    while (torre > 0)
    {
        printf("Direita\n");
        torre--;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha se movendo\n"); // coloquei esse printf para ficar claro quem ta se movendo
    while (rainha > 0)
    {
        printf("Direita\n");
        rainha--;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Cavalo se movendo\n"); // coloquei esse printf para ficar claro quem ta se movendo    
    while (cavalo == 4)
    {
        printf("Cima\nCima\nCima\nEsquerda\n");
        cavalo--;
        
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
