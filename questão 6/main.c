/*entendi que deveria criar structs e tal, mas não entendi o que eu deveria fazer depois de conseguir o nome dos produtos, já em relação a cod e essas coisas eu realmente não entendi
os valores são confusos, creio que pq eu nunca utilizei em formato.bin, mas valeu a tentativa, comecei tarde essa questão por motivos bem bestas*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char ch[2000];
    int valor [2000], i=0;
    FILE *ptr;
    ptr=fopen("compra.bin","rb");//como o arquivo é .bin, temos que utilizar o rb

    //verificamos se o ptr é nulo
    if(ptr != NULL){
            //caso não seja mostrara a mensagem a seguir
        printf("Arquivo binario.bin foi aberto\n\n");

    }else{
        //caso seja mostrara mensagem erro e fechará o programa
        printf("Erro");
        exit(1);
    }
    
    fread(ch, sizeof(ch),1, ptr);
    fread(valor, sizeof(valor),1,ptr);



    printf("Vetor de caracteres: \n");
    for(i=0; i<2000; i++){
        printf("%c",ch[i]);

    }
    printf("\nvetor inteiros:\n ");
    for(i=0; i<2000; i++){
        printf(" %d",valor[i]);

    }




fclose(ptr);


 return 0;
}
