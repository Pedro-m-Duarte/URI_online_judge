#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void conver(int i,char aux3[]){
    int a=0, j=10, k=1, num[10];

    while(i/j !=0){

        num[a++] = i%j;
        i -= num[a-1];
        j*=10;
    }
    num[a++] = i%j;

    for(j=0;j<a;j++){
        aux3[j]=(num[j]/k)+'0';
        k*=10;
    }
    aux3[j]='\0';


}

int main(){

    char n1[10],n2[10],aux3[10];
    int i, j, k ,tam, cont, equal, aux1, aux2;

    while(scanf("%s %s",n1, n2)!=EOF){
        equal =0;


        aux1=atoi(n1);
        aux2=atoi(n2);

        for(i=aux1;i<=aux2;i++){

            conver(i,aux3);
            tam=strlen(aux3);

          // printf("",aux3);
            for(j=0,cont=0;j<tam;j++){

                for(k=0;k<tam;k++){

                    if(aux3[j]==aux3[k]&&j!=k){
                        cont++;
                    }
                }
            }
            if(cont==0){
                equal++;
            }
        }
        printf("%d\n",equal);
    }


    return 0;
}
