#include <stdio.h>
#include <string.h>

int upperCASE(char text[]){

    int i;
    for(i=0;text[i]!='\0';i++){
        if(text[i]>=97 && text[i]<=122){
            text[i] = text[i] - 32;
        }
    }
    return 0;
}

int main(){

    int i,alt = 0;
    char text[6000],aux = '\0';

    while(scanf(" %[^\n]",text) != EOF){
        upperCASE(text);
// boa boba oba oba oba p p

        for(i=0; text[i]!='\0' ;i++){

            if(text[i]== ' '){

                if(text[0]==text[i+1] && aux!=text[i+1] && i+1!='\0'){
                    alt++;
                    text[0] = text[i+1];
                    aux =text[0];
                }
                if(text[0]!=text[i+1]){
                    aux = '\0';
                }

                text[0] = text[i+1];
            }
        }
        printf("%d\n",alt);
        alt = 0;
        aux = 0;
    }
    return 0;
}
