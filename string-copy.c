#include <stdio.h>
#include <string.h>
int main(){
    char ar1[54], ar2[54];
    int i;
    printf("Enter the first string : ");
    scanf("%s", ar1);
    for(i=0; i<strlen(ar1); i++){
        ar2[i] = ar1[i];
    }
    ar2[i] = '\0';
    printf("the given string is %s\n", ar2);
    return 0;
}