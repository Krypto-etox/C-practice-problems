#include <math.h>
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter five digit number: ");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    int result = a+b+c+d+e;
    printf("%d",result);
    return 0;
}