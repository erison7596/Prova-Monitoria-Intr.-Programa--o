#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char ch[10000];
    int i=0;

    FILE *ptr;
    ptr=fopen("compra.bin","rb");

    if(ptr != NULL){
        printf("Arquivo binario.bin foi aberto\n\n");

    }else{
        printf("Erro");
        system("pause");
        exit(1);
    }

    fread(ch, sizeof(ch),1, ptr);

    printf("Vetor de caracteres: \n");
    for(i=0; i<1000; i++){
        printf("%c",ch[i]);

    }
    

fclose(ptr);


 return 0;
}