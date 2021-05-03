#include <stdio.h>
#include <string.h>

int main(){

    int i,j,k,nt,ne;
    char num1[1001],num2[10001];

    scanf("%d",&nt);

    for(i=0;i<nt;i++){
        ne=0;
        scanf("%s %s",num1,num2);

       j=strlen(num1);
       k=strlen(num2);
      // printf("j:%d k:%d\n",j,k);
        for(;k>=0;){
            //printf("in\n");
            if(num1[j]!=num2[k]){
                ne++;
            }
            j--;
            k--;
        }
        if(ne==0) printf("encaixa\n");
        else printf("nao encaixa\n");
    }


    return 0;
}
