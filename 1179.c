#include <stdio.h>
#include <math.h>
#define pos 15

int main(){

    int n[pos],p=0,i=0,par[5],imp[5],a,b,c;

    for(a=0;a<pos;a++){ // digita os n numeros e dimensiona os vetores impar e par

            scanf("%d", &n[a]);

            if(n[a]%2 == 0){
                par[p]=n[a];
               // printf(" p = %d, par[p] = %d,  n[a] = %d, a = %d\n",p,par[p],n[a],a);
                p++;

            }
            else if(n[a]%2 != 0){
                imp[i]=n[a];
              //  printf("i = %d,imp[i] = %d  n[a] = %d, a = %d\n",i,imp[i],n[a],a);
                i++;

            }
            if(p>4){
                for(b=0;b<5;b++){
                    printf("par[%d] = %d\n",b,par[b]);
                }
            p=0;
           // printf("p = %d\n",p);
            }
            else if(i>4){
                for(b=0;b<5;b++){
                  printf("impar[%d] = %d\n",b,imp[b]);
                }
            i=0;
           // printf("i = %d\n",i);
            }
            else if(a+1==pos){
              //  printf("a = %d, p = %d, i = %d\n",a,p,i);
                if(n[a-1]%2 == 0){
                    for(b=0;b<p;b++){
                        printf("par[%d] = %d\n",b,par[b]);
                    }

                    for(b=0;b<i;b++){
                        printf("impar[%d] = %d\n",b,imp[b]);
                        }
                }
                    else {
                        for(b=0;b<i;b++){
                            printf("impar[%d] = %d\n",b,imp[b]);
                        }
                        for(b=0;b<p;b++){
                            printf("par[%d] = %d\n",b,par[b]);
                        }
                    }
            }
    }


    return 0;
}
