#include <stdio.h>
#include <math.h>

int main(){

    int n, i=0, contr;
    scanf("%d", &n);
    if(n>0 && n<46){
        int f[n];
        f[0]=0;
        f[1]=1;
        f[2]=1;
        for(i=3;i<=n-1;i++){
             f[i]=f[i-2]+f[i-1];
            // printf("%d ",f[i]);
        }
      // printf("\nn : %d, i: %d \n",n,i);
       for(i=0;i<n;i++){

        if(i<n-1){
            printf("%d",f[i]);
            printf(" ");
        }
        else  printf("%d\n",f[i]);
        }
}
    return 0;
}
