/*
char name[no. of elements in string][lenght of that particular elments];
^^^ above is an example of 2d array;

*/

#include <stdio.h>
void main(){
    char name1[10] = {'c', 'o', 'd', 'e', 'T', 'a', 'n', 't', 'r', 'a'};
    char name2[3][10] = {"Computers", "Softwares", "Hardware"};
    int i;
    printf("Given 1-D character array is : %s\n", name1);
    printf("Given strings are\n");
    for(i= 0; i< 3; i++){
        printf("%s\n", name2[i]);
    }
}


// Check don't use below'
#include <stdio.h>
void main(){
    char p[] = "%d\n";
    p[1] = 'c';
    printf(p, 66);
}

#include <stdio.h>
int main(){
    char str[] = "code\0Tantra\0India";
    printf("%s\n", str);
}