/*
strcmp() is used for comparison of two strings and it alsways returns the numberic data. this function compares strings character by chacter usig their ASCII values.
syntax = variable_name = strcmp(string1, string2);
variable name return  integer value.
if function strcmp() returns zero, both strings are equal.
if function strcmp() returns value less than 0, string 2 is higher thann string1
if function strcmp() returns value greater than 0, string 1 is higher than string2

*/

#include <stdio.h>
#include <string.h>
void main(){
    char a[20], b[20];
    int i, j;
    printf("Enter the first string : ");
    scanf("%s", a);
    printf("Enter the second string : ");
    scanf("%s", b);
    j = strcmp(a,b);
    if(j == 0){
        printf("Equal\n");
    } else if(j > 0){
        printf("String 1 is greater than 2");
    } else{
        printf("String 2 is greater than string 1\n");
    }
    
}