/*4º) comentar funcionalidade do código*/
#include <stdio.h>
//aqui foram passados como passagem por referência, que a referência das variaveis podendo sobrescrever
void Prepara(const char *str, int **pt){
    //static int define que a variavel abaixo são permanentes, logo seu valor será guardado para a proxima vez que for chamado
    static int ar[5] = {1, 2, 1, 2, 1};
    int i;
    //como não tem {} só ira pegar na primeira linha o for 
    for (i = 0; i < 5; i++)
        ar[i] = str[i] - '0';//passa os 5 últimos digitos que escrevemos para ar
        
    
    *pt = ar;//aqui passamos o endereço de ar para pt
    
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
   // printf("%d",*p);

    q = p + 5; //p será o primeiro digito que entrou, mas q será 0, pq ele somou p+ 5, avançando 5 endereços de memória, logo estará no digito 6, que não existe, logo q será 0
    c = 0;//c==0 como mostra 
    int d;
    while(q - p != 0){//0 - o primeiro digito diferente de 0
        v[q - p - 1] = *p;     
        c++ % 2 ? p-- : (p += 2); //c+1 é divisivel por 2? se sim p-1, caso não p+2                      
       /* fiz na folha e vou repassar aqui para melhor entender 
        explicar o v e o c ao mesmo tempo
        q sempre será 6
          q | p | -1                                                                            essa posição é da mémoria 
 1º   v[  6 - 1   -1] = v[4] = *p posição 1 de p                     c=1 é divisivel por 2? n => p+2=3 p vai para posição 3 ----aqui p vai pra 2ª v[]
 2ª   v[  6 - 3   -1] = v[2] = *p posição 3 de p                     c=2 é divisivel por 2? s => p-1=2 p vai para posição 2 ----aqui p vai pra 3º v[]
 3º   v[  6 - 2   -1] = v[3] = *p posição 2 de p                     c=3 é divisivel por 2? n => p+2=4 p vai para posição 4 ----aqui p vai pra 4º v[]
 4º   v[  6 - 4   -1] = v[1] = *p posição 4 de p                     c=4 é divisivel por 2? s => p-1=3 p vai para posição 3 ----aqui p vai pra 5º v[]
 5º   v[  6 - 3   -1] = v[2] = *p posição 3 de p                     c=5 é divisivel por 2? n => p+2=5 p vai para posição 5 ----aqui p vai pra 6º v[]
 6º   v[  6 - 5   -1] = v[0] = *p posição 5 de p                     c=6 é divisivel por 2? s => p-1=4 p vai para posição 4 ----aqui p vai pra 7º v[]
 7º   v[  6 - 4   -1] = v[1] = *p posição 4 de p                     c=7 é divisivel por 2? n => p+2=6 p vai para posição 6 logo terá valor 0, assim q-p=> 0-0 ==0, sairá do while

        */
        
    }
    //o programa inverte a ordem dos números digitados   
   
 return 0;
}