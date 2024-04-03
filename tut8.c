#include <stdio.h>
int main(){
    int a,b,c,d,e,result,agg;
    printf("Enter the marks of five subjects with space: ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    agg = (a+b+c+d+e);
    result = (agg/5);
    printf("Agrregate is: %d  and Percentage is: %d",agg, result);
    return 0;
}