/*3º) Lembrando que foi pedido os dois primeiros números iguais a 1*/
#include <stdio.h>
//estou utilizando log pois não sei qual número sera digitado, podendo ser até infinito
long PosicaoDeFibonacci(int i){
    //declaro as variavéis da função
    int f=0; 
    int primeiro = 1, segundo = 1; //primeiro e segundo são 1 como pedido
    //como o valor 1 tem na posição 1 e 2, usamos if deixando fixo 2 para retornar a posição 3 
    if(i==2){
        return 3;
    }else{
        //aqui utilizamos o laço de repetição for começando o valor em 3 e indo até o digitado+1 para poder verificar os valores
        for(int cont=3;cont<=i+1; cont++){
            //aqui passamos para função o valor do primeiro e do segundo valor já setado
            f = primeiro + segundo;
            //aqui passamos o valor do segundo para o primeiro, sempre será assim, o valor 2 passa para o 1
            primeiro = segundo;
            //aqui pegamos o valor da função e passamos para o segundo valor e ela meio que acaba sendo o terceiro valor, ja que foi a soma do f1 e f2
            segundo = f;
            //verificamos se a função é igual ao valor digitado pelo usuário 
            if (f==i)
            {
                //caso seja igual, criamos a variável abaixo e colocamos a posição cont(possui a ordem do for, ou seja, a posição que ele está) nela
                int retorno_posicao = cont;
                //aqui retornamos o valor da função com a posição em retorno_posicao
                return retorno_posicao;
            }
            if(f>i){ //para caso o valor de f esteja maior que i, ele terá de retornar -1 pq logo não constará em fibonacci, assim evitando um loop quase infinito
                return -1;
            }
        }
    }
    //caso não retorne em nenhum caso acima, ele não estará em fibonacci e retornará -1
    return -1;
}

int main(){
    int i;
    printf("Digite o numero de fibonacci para retornar a posicao do mesmo: ");
    scanf("%d",&i);
    int posicao = PosicaoDeFibonacci(i);

    printf("------------------------------------------------\n");

    if (i==1)
    {
        //como não tem como voltar 2 valores inteiros em um int, fiz um print para caso seja numero 1
        printf("Ele pode estar tanto na posicao 1 como na 2");

    }else{
        if (posicao>0) //caso a posição seja maior que 0(positiva) ele entrará e mostrará a posição do numero digitado em fibonacci
        {
            printf("Posicao do numero em fibonacci: %d", posicao);
        }else{//caso não irá mostrar que o numero não está em fibonacci
            printf("O numero nao estava na sequencia de fibonacci");
        }

    }



    return 0;
}