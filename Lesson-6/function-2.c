#include<stdio.h>

void namaste();
void bonjour();

int main(){
    printf("Enter F for french & I for india :");
    char ch;
    scanf("%c", &ch );

    if (ch == 'I'){
        namaste();
    } else {
        bonjour();
    }

    return 0 ;
}

void namaste(){
    printf("Namaste");
}

void bonjour(){
    printf("bonjour");
}