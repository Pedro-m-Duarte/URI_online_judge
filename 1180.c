#include <stdio.h>
#include <math.h>

int main(){

    int x,i,m,p=0;
    scanf("%d",&x);
    int n[x];

    for(i=0;i<x;i++){
        scanf("%d",&n[i]);
    }
    m =n[0];
  //  printf("\ni: %d, m:  %d\n\n",i,m);

    for(i=0;i<x;i++){
        if(m>n[i]){
            m=n[i];
            p = i;
        }
   // printf("p: %d, m:  %d\n",p,m);
    }
    printf("Menor valor: %d\n",m);
    printf("Posicao: %d\n",p);

    return 0;
}
