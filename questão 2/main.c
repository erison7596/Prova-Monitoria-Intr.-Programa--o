/*2ª) Por que str1 é um array em char, cada valor de char tem 1 byte 'explicar' tem 8 caracteres mais o \0 no final, por isso aparecem 8 bytes de tamanho
já o *str2 é um ponteiro que guarda um endereço de memória e todos os endereços tem o mesmo tamanho, independente do tipo escolhido e tamanho
4 bytes em arquitetura de 32 bits e 8 bytes em arquitetura de 64 bits 
abaixo vou explicar como funciona com exemplos
*/
//lembrando que cada char tem valor de 1byte

#include <stdio.h>
int main(){
 char str1[] = "explicar";
 char *str2 = "explicar";
 //abaixo veremos ambos str1 e *str2 sendo impressos o tamanho em bytes
 printf("sizeof str1 = %zu\n", sizeof(str1)); 
 printf("sizeof str2 = %zu\n", sizeof(str2));
 
 char nome[]="Erison";
 char *nome2="Erison";
 //como podemos ver, meu nome só tem 6 caracteres, mas apresenta 7 bytes em nome 1 por terminar com \0
 printf("sizeof nome = %zu\n", sizeof(nome)); 
 printf("sizeof nome2 = %zu\n", sizeof(nome2)); //aqui como falei sempre será um tamanho único
 
 char sobrenome[]="Cavalcante"; 
 char *sobrenome2= "Cavalcante"; 
 printf("sizeof sobrenome = %zu\n", sizeof(sobrenome)); //novamente vemos que temos 10 caracteres e apresenta 11 bytes
 printf("sizeof sobrenome2 = %zu\n", sizeof(sobrenome2)); // confirmando o que vimos, aqui permanece em 8 bytes independente da quantidade de caracteres 
 
 
 return 0;
}