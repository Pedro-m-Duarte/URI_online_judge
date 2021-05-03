#include <stdio.h>
#include <math.h>

int main(){

    int x,i=1;
    scanf("%d",&x);

    for(x;x!=0;){

        for(i=1;i<=x;i++){
            if(i<x){
                printf("%d ",i);
            }
            else if(i==x){
                printf("%d\n",i);
            }
        }
        scanf("%d",&x);
    }

    return 0;
}
