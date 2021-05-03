#include <stdio.h>
#include <math.h>

int main(){

    int n[1000],i,a;
    scanf("%d", &a);

    n[0]=0;
    for(i=1;i<1000;i++){
        if(n[i-1]<a-1){
            n[i]=n[i-1]+1;
        }
        else n[i]=0;
    }


     for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }

    return 0;
}
