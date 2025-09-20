#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    //O loop for executa o printf iniciando em t=1 , condição t<=5 e com incremento 1 em t++.
    /*
    printf("[Movimento da Torre]\n5 casas para a direita.\n");
    for (int t = 1; t <= 5; t++) { // movimento da Torre
        printf("Direita\n");}


     
    O while executa o printf iniciando em b=1 , condição b<=5 e com incremento 1 em b++.
      
    printf("[Movimento do Bispo]\n5 casas em diagonal para cima e direita.\n");
    int b=1;
    while (b<=5){ // movimento do Bispo
        printf("Cima,Direita\n");
        b++;}  



     
    O do while executa o printf iniciando em r=1 , condição while r<=8 e com incremento 1 em r++.
         
    printf("[Movimento da Rainha]\n8 casas para a esquerda.\n");  
    int r =1;
    do{printf("Esquerda\n");// movimento da Rainha
        r++;}while (r<=8); 
    
    O do while executa o printf uma vez em c<=1 e o for 2x com incremento 1 em c++.
    

    printf("[Movimento do Cavalo]\n2 casas para baixo e uma para a esquerda.\n");  
    int c;  
    for (c=0;c<=1;c++){// movimento do Cavalo
        printf("Baixo\n");}
          do {printf("Esquerda\n");              
            }while (c<=1);// imprime pois c=1, mas com c=2 não imprime.

    */   

    /*
    19/09/2025
    Implementação dos movimentos com recursividade e loop aninhados  
    
    */

# include <stdio.h>    
//Procedimento para a movimentação da Torre
void movimTorre(int t){
    if (t>0){
        printf("Direita\n");
        movimTorre(t-1);
    }     
}   

//Procedimento para a movimentação do Bispo
//Foi observado que a recursividade não funiona dentro do for, por isso o if.
void movimBispo(int b){
    if (b>0){
     for (int v=1; v>0; v--){//executa 1x - loop externo
       printf("cima\n");    
         for (int h = 1; h>0;h--){//executa 1x a cada execução do for anterior - loop interno
        printf("direita\n");        
         }    
       }
       movimBispo(b-1); 
   }    
       
  }

//Procedimento para a movimentação da Rainha
void movimRainha(int r){
    if (r>0){
        printf("Esquerda\n");
        movimRainha(r-1);
    }     
}   

   

int main(){



//[Movimento da Torre]
 //5 casas para a direita
   printf("[Movimento da Torre - 5 casas para a Direita]\n");
   movimTorre(5);

 //[Movimento do Bispo]
 //5 casas em diagonal para cima e direita
   printf("[Movimento do Bispo - 5 casas para a Cima Direita]\n");
   movimBispo(5);



//[Movimento da Rainha]
//8 casas para a esquerda
   printf("[Movimento da Rainha - 8 casas para a Esquerda]\n");
   movimRainha(8);



 //[Movimento do Cavalo]
 //Em "L" (duas casas para cima e uma para a direita).

  printf("[Movimento do Cavalo - 2 casas para a Cima e uma para a Direita]\n");
   for (int v=0, h=2;v<=2 && h<=2;v++,h--){    
      printf("Cima\n");
        if (h==1){
          printf("Direita");
          break;
        }
          
        }
            


  return 0;


}  

    return 0;
}
