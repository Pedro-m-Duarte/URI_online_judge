#include <stdio.h>
#include <math.h>

int main (){ // age in days

    int dias;

    scanf("%d", &dias);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", dias/365, (dias%365)/30, (dias%365) %30);

    return 0;
}
