//Logical opertors 
// There are 3 types of logical operators 1. && AND , 2. || OR , 3. ! NOT

#include<stdio.h>

int main(){

    //AND , denoted by - &&
 
    printf("%d \n", (6>2) && (9>8)); 

    printf("%d \n", (6<3) && (9>8));

    printf("%d \n", (6<3) && (9>10));

    //OR , denoted by - ||

    printf("%d \n", (6<3) || (9>10));

    printf("%d \n", (6<3) || (9>8));

    printf("%d \n", (6>2) || (9>8));

    //NOT , denoted by - "!"

    printf("%d \n" , !(9>6) && (8>2)); /*we know that 9 is greater than 
    6 but if we use "!" this then the statements get wrong from insdie , then it will return 0 */

    return 0 ;
}