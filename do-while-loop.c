/*
#============================================================
do-while loop : statement is used to execute a section of code atleast once and then repeatedly execute the same section of code as long as certain condition is true.

Here while loop ends with ; so as to end the loop with the necessary conditons.

*/
#include <stdio.h>
void main(){
    int num = 1;
    do{
        printf("%d\n",num);
        num++;
    } while (num <= 5);
}

