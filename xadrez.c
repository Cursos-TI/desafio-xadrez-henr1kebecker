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

void movimentarTorre(){
    int torre = 5;

    printf("Torre se movendo\n"); // coloquei esse printf para ficar claro quem ta se movendo
    while (torre > 0)
    {
        printf("Direita\n");
        torre--;
    }

};

void movimentarRainha(){

    int rainha = 8;
    printf("Rainha se movendo\n"); // coloquei esse printf para ficar claro quem ta se movendo
    
    while (rainha > 0)
    {
        printf("Esquerda\n");
        rainha--;
    }

}

void movimentarCavalo(){
    int cavalo = 1;
    int controle = 2;
    printf("Cavalo se movendo\n");
    for (int i = 0; i < cavalo; i++)
    // Como o cavalo se move em forma de L o primeiro loop so pode ser executado 1x
    // indicando a curva do L. 
    {
        while (controle >= 0)
        // já o while executa 3x indicando o avanço de 3 casas contando com a que ele está.
        {
            printf("Cima\n");
            controle--;
        }
        printf("Esquerda\n");

    };
};


int main() {
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    movimentarBispo();

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    movimentarTorre();

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    movimentarRainha();
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    movimentarCavalo();
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
