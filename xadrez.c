#include <stdio.h>

void movertorre(int casa1){
    if (casa1 > 0)
    {
       printf("direita\n");
       movertorre(casa1 - 1);
    }
}
void moverbispo(int casa2){
    
    if (casa2 > 0){
    moverbispo(casa2 - 1);
       int movimentocompleto = 1;

    while (movimentocompleto--)
    {
        for (int i = 0; i < 5; i++){
            printf("Diagonal\n");
        }
        printf("Direita\n");
    }
    }
}
void moverRainha(int casa3){
    if (casa3 > 0)
    {
        printf("Esquerda\n");
        moverRainha(casa3 - 1);
    }
    
}
    
    
    


int main() {
   //Fiz um menu interativo, para proveitar e treinar outras coisas que aprendir e para dar uma melhorada e mais atrativo.
int jogador1, i2 = 0, i3, j, numero;
char rainha, bispo, torre;

 printf("******Bem-vindo ao jogo de xadrez******\n");
 printf("Escolha qual peça que deseja mover:\n");
 printf("1 para TORRE.\n");
 printf("2 para BISPO.\n");
 printf("3 para RAINHA\n");
 printf("4 para CAVALO\n");
 scanf("%d", &jogador1 );
//Coloquei um switch para dar uma interação bacana para o jogador. aproveitei para treinar também.
 switch (jogador1)
 {
 case 1:
    printf("Torre:\n");
    movertorre(5);
break;  
 case 2: //juntoi a estrutura alinhada com a recursiva.
printf("Bispo:\n");
 moverbispo(1);

   
 break;
 case 3://Aqui fiz a rainha andar 8 casas, dando a opção para o jogador escolher qual número. sendo que 8 e o verdadeiro.
   printf("Rainha:\n");
   moverRainha(8);

 break;
 case 4: /*Aqui o jogador escolhe a opção do cavalo e com isso o cavalo se movimenta duas vezes para baixo e uma para esquerda. 
usando a opção for para fazer o loop alinhada*/
  for( i3 = 1; i3 <= 1; i3++){

       printf("Cavalo\n");
           
        for (  j = 1; j <= i3; j++)
        {
          printf("Cima\n");
          
          printf("Cima\n");
          
          printf("Direita\n");
        }
        printf("\n");
    }
break;
 default:
     printf("Saindo do jogo...\n");
     break;
 }
 

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
