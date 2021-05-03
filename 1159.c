#include <stdio.h>
#include <math.h>

int main() {

    int  n, i, contr;
    scanf("%d",&n);

   for(;n!=0;){
        if(n%2==0){}

        else n=n+1;

        contr = n;
        n=0;
        for(i=0;i<5;i++){

            n= n + contr;
            contr= contr +2;
        }

        printf("%d\n",n);
        scanf("%d",&n);
   }
    return 0;
}
