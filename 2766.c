#include <stdio.h>
#include <string.h>

int main(){

    char nomes[10][31];
    int i;

    for(i=0;i<10;i++){
        scanf("%s",nomes[i]);
        if (i==2 || i== 6 || i == 8){
            printf("%s\n",nomes[i]);
        }

    }
    return 0;
}
