//Relational Operators 
//There are 4 Types of relational operators 1. == , 2. >,>= , 3. <,<= , 4. != 

#include<stdio.h>

int main(){

    printf("%d \n" , 6==6 ); //it returns 1 in C True = 1
    printf("%d \n", 8==7); //it returns 0 in C Compiler False = 0

    printf("%d \n", 6>2);
    printf("%d \n", 7>=8);
    printf("%d \n", 9>=9);

    printf("%d \n", 7<2);
    printf("%d \n", 7<=7);
    printf("%d \n", 1<2);

    printf("%d \n", 7!=9);//As we know it is false but we use != this so iw will become true
    printf("%d \n", 9!=9); //again we know it is true statement but as we use != so it will become false 
    /* So basically "!=" this statements is means "not equal to" so it do opposite we 
    do in programm 👌 */

    return 0;
}