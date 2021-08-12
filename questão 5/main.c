#include <stdio.h>
#include <string.h> //adicionei a biblioteca string pq vamos precisar funções dessa biblioteca 
int main(){
    int i, vai=0;
    char palavra[1000];
    char sem_caractere_especial[1000];

    printf("Digite sua palavra para verificar se ela e palindrome: ");
    gets(palavra);//usando gets para pegar a palavra inteira com espaço
    
    //passo o tamanho da palavra com strlen para tamanho
    int tamanho = strlen(palavra);
    //passando a palavra digitada para outro array de caracteres, mas só passando as letras
    for(i=0;i<tamanho;i++){
        if (palavra[i]>='a' && palavra[i] <= 'z') //verifico se o que está em palavra[i] é mesmo caractere alfabético 
        {
            sem_caractere_especial[vai]=palavra[i]; //passo o caractere para o sem_caractere_especial, assim evitando qualquer espaço ou coisa do tipo
            vai++;           //incremento o sem_caractere_especial para ele espera a proxima letra 
        }       
    }
    //abaixo inverto a palavra já sem qualquer caractere especial
    int volta=0, j;
    char contrario[1000];
    //inverto abaixo utilizando for
    for(j=vai-1;j>=0;j--){
        contrario[volta]=sem_caractere_especial[j];
        volta++;
    }
    //abaixo uso o strcmp para verificar se minhas variavéis são iguais, caso seja a função retorna 0
    int valor = strcmp(sem_caractere_especial,contrario);
    if (valor==0)//abaixo só imprimo se é ou não palindroma 
    {
        printf("eh palindroma");
    }else{
        printf("nao e palindroma");
    }
    
   
 return 0;
}