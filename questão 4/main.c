/*4º) comentar funcionalidade do código*/
#include <stdio.h>
//aqui foram passados como passagem por referência, que a referência das variaveis podendo sobrescrever
void Prepara(const char *str, int **pt){
    //static int define que a variavel abaixo são permanentes, logo seu valor será guardado para a proxima vex que for chamado
    static int ar[5] = {1, 2, 1, 2, 1};
    int i;
    //como não tem {} só ira pegar na primeira linha o for 
    for (i = 0; i < 5; i++)
        ar[i] = str[i] - '0';//passa os 5 últimos digitos que escrevemos para ar
        
    
    *pt = ar;//aqui passamos o endereço de ar para pt
    
    //printf("%d", ar[1]);
   // printf("\n\n%d", *(pt));
}
int main(){
    int v[5];
    char mat[6];
    int *p, *q, c;
    printf("Digite os 5 ultimos digitos de sua matricula: ");
    scanf("%s", mat);
    //chama a função prepara
    Prepara(mat, &p);
    //p pegou somente o primeiro digito da matricula digitada
    printf("%d",*p);

    q = p + 5; //p será o primeiro digito que entrou, mas q será 0, pq ele somou p+ 5, avançando 5 endereços de memória, logo estará no digito 6, que não existe, logo q será 0
    printf("\n%d",*q);
    c = 0;//c==0 como mostra 
    while(q - p != 0){//0 - o primeiro digito diferente de 0
        v[q - p - 1] = *p; //v[0-primeiro digito-1] = *p
        c++ % 2 ? p-- : (p += 2); 
    }
    printf("%d",c);
    printf("\n\n%d", v[0]);
    printf("%d", v[1]);
    printf("%d", v[2]);
    printf("%d", v[3]);
    printf("%d", v[4]);
   
 return 0;
}