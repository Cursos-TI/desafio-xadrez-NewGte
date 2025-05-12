#include <stdio.h>

int main() {
   //Fiz um menu interativo, para proveitar e treinar outras coisas que aprendir e para dar uma melhorada e mais atrativo.
int jogador1, i2 = 0, numero;
char rainha, bispo, torre;

 printf("******Bem-vindo ao jogo de xadrez******\n");
 printf("Escolha qual peça que deseja mover:\n");
 printf("1 para TORRE.\n");
 printf("2 para BISPO.\n");
 printf("3 para RAINHA\n");
 scanf("%d", &jogador1 );

 switch (jogador1)
 {
 case 1:
     printf("Torre\n");
         for ( int i = 0; i < 5; i++){
             printf("Direita\n");}
break;  
 case 2:
 printf("Bispo\n");
       while (i2 <= 5)
    {
        if(i2 != 0)
        {
            printf("direita, cima!\n");
        }
        
        i2++;
    }
     break;
 case 3://Aqui fiz a rainha andar 8 casas, dando a opção para o jogador escolher qual número. sendo que 8 e o verdadeiro.
    do {
        printf("Digite o numero 8 para a rainha andar 8 casas.\n");
        scanf("%d", &numero);

        if(numero == 8){
            printf("Rainha: 8 casas para a esquerda\n");
        } else {
            printf("Saindo do jogo...\n");
        }
        
    } while(numero < 8 && numero > 8);
     
     printf("Obrigado por jogar!\n");

 break;
 default:
     printf("Saindo do jogo...\n");
     break;
 }
 
 
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
