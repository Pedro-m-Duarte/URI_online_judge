#include <stdio.h>
#include <math.h>

int main(){

    int n[10],i;

    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++){
        if(n[i]>0){
            printf("X[%d] = %d\n",i,n[i]);
        }
        else printf("X[%d] = 1\n",i);
    }
    return 0;
}
