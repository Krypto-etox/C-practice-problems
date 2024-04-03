#include <stdio.h>
void main(){
    int x = 1;
    if (x == 1)
        if(x == 0)
            printf("inside if");
        else
            printf("inside else if");
    else
        printf("inside else");
}

#include <stdio.h>
int main(){
    #if (!5>=5)
        int a = 5;
    #elif -1
        int a = 10;
    #else
        int a = 15;
    #endif
    printf("%d",a);
    return 0;
}
