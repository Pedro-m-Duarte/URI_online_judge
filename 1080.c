#include <stdio.h>

int main()
{
    unsigned int n[100], c = 100;
    int maior , pos, i ;


    for(i = 0; i < c; i ++)
    {
        scanf("%d", &n[i]);
    }

    maior = n[0];
    pos = 0;
    for(i = 1; i < c; i ++)
    {
        if(maior>n[i]){
            maior = maior ;
        }
        else {
            maior =n[i];
            pos = i;

        }
    }


    printf("%d\n", maior);
    printf("%d\n", pos+1);


  return 0;
}
