/*1ª) short int var tem 2 bytes de memória
abaixo estará um explicação com código para melhor entendimento */


#include <stdio.h>
 
 int main(){
     //abaixo fazemos as declarações de variáveis 
     //aconselho usar short int caso vá armazenar algo pequeno como idade, então evite o desperdício de memória
     short int var; //short int var nada mais faz do que colocar um inteiro curto em var
     //aqui declaro o int normal para vermos a diferença de mémoria de ambos
     int int1;

     /*utilizamos a função printf para escrever na tela, iremos utilizar a função sizeof
      para mostrar o tamanho em bytes da variável, para utilizar usamos sizeof(variável_desejada) */
     printf("tamanho da variável int em bytes: %zu\n", sizeof(int1)); 
     
     printf("tamanho da variável short int em bytes: %zu\n", sizeof(var));
     /*como mostrado com print, podemos ver que short int irá retornar uma variável menor que a int pelo simples motivo
     de termos usado o short antes do int, isso faz com que a variável declarada tenha uma porção do valor de int*/ 
     return 0;
 }