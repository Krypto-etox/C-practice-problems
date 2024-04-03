#include <stdio.h>
int main(){
    int n, i, even_count = 0, odd_count = 0;
    scanf("%d",&n);
    int numbers[n];
    for(i = 0; i < n; i++){
        scanf("%d",&numbers[i]);
    }

    for (i = 0; i < n; i++){
        if(numbers[i] % 2 == 0){
            even_count++;
        } else{
            odd_count++;
        }
    }
    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    return 0;
}