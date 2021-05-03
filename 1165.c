#include <stdio.h>
#include <math.h>

int main(){

    int x,i,a,p=1;

    scanf("%d", &x);
    int n[x];

    for(i=0;i<x;i++){
        scanf("%d",&n[i]);
    }

    for(i=0;i<x;i++){

        for(a=2; a<n[i];a++){
           // printf("a = %d, n[%d] = %d\n",a,i,n[i]);

            if(n[i]%a!=0){
                p=1;
            }
            else {
                p=0;
                goto nao_primo;
            }
        }
        
        nao_primo:
        if(p==1 || n[i]==2){
            printf("%d eh primo\n",n[i]);
        }
        else if(p==0){
            printf("%d nao eh primo\n",n[i]);
        }
    }

    return 0;
}
