#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    (a>b) && (a>c)? printf("%d is the highest number",a) : (b>c)? printf("%d is highest number",b) : printf("%d is the highest number",c); 
}
