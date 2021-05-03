#include <stdio.h>
#include <math.h>

int main(){ //1040 average 3

   float a, b, c, d, m, m2, ex;
   scanf("%f %f %f %f", &a, &b, &c, &d);
    m = ((a*2)+( b*3)+( c*4)+d)/10;

   if( m >= 7.0){
        printf("Media: %.1f\n",m);
        printf("Aluno aprovado.\n");
   }

   else if ( m >= 5 && m<= 6.9 ){
        printf("Media: %.1f\n",m);
        printf("Aluno em exame.\n");
        scanf("%f", &ex);
        printf("Nota do exame: %.1f\n",ex);
        m2 = (m + ex)/2;

        if( m2 >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",m2);
        }
        else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",m2);
        }

   }
   else if( m < 5){
        printf("Media: %.1f\n",m);
        printf("Aluno reprovado.\n");
   }

    return 0;
}
