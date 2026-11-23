#include<stdio.h>

int sum(int a , int b);
void printTable(int n);
 
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    
    printTable(n); //Argument / actual Parameter
    return 0;
}

int sum(int x , int y ){
    return x + y ;
}

void printTable(int n ){  //Parameter / formal parameter
    for(int i = 1 ; i < 11 ; i++){
        printf("%d\n" , i*n);
    }
}