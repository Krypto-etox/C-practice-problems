#include <stdio.h>
int main(){
    int c,d,num;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&c,&d);
    num = c;
    c = d;
    d = num;
    printf("value 1: %d  value 2: %d", c,d);
    return 0;

}


// Interchanging two variable without temp variable.
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two integers a and b : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping : x = %d, y = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping : x = %d, y = %d\n", a, b);
    return 0;
}