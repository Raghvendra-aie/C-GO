#include<stdio.h>

//declaration /prototype
void printhello();
void printbye();


int main(){
    printhello();   //Function call 
    printbye();
    return 0;
}

//function defination
void printhello(){
    printf("hello\n");
}

void printbye(){
    printf("bye :)");
}