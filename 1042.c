#include <stdio.h>
#include <math.h>

int main(){ //1042 simple sort

   int A, B, C, x, y, z;

    scanf("%d %d %d", &A, &B, &C);
    if( A > B && A > C){
        x = A;
        if (B> C){
            y = B;
            z = C;
        }
        else{
            y=C;
            z=B;
        }
    }
   else if( B > C){
        x = B;
        if (A> C){
            y = A;
            z = C;
        }
        else{
            y=C;
            z=A;
        }
    }else{
        x = C;
        if (B> A){
            y = B;
            z = A;
        }
        else{
            y=A;
            z=B;
        }
    }
    printf("%d\n",z);
    printf("%d\n",y);
    printf("%d\n\n",x);

    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
    return 0;
}
