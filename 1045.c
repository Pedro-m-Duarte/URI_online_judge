#include <stdio.h>
#include <math.h>

int main(){ //1045 average 3

    double A, B, C, x, y, z;

    scanf("%lf %lf %lf", &A, &B, &C);
    
    { // ordenador 
    
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
}


    
    if( x >= y + z){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if( pow(x,2) == pow(y,2) + pow(z,2)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if( pow(x,2) > pow(y,2) + pow(z,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if( pow(x,2) < pow(y,2) + pow(z,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if( x == y && x== z){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if( x == y || x== z || y == z){
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
}
