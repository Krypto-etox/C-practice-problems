// #include <stdio.h>
// int main(){
//     float amount, rate, simple_interest;
//     int months;
//     printf("Provide amount and interest in the format $amount rate%% : ")
//     scanf("$%f %f%", &amount, &rate);
//     printf("Enter the period in months: ");
//     scanf("%d", &months);
//     simple_interest = (amount*rate*months)/100;
//     printf("\nSimple interest : %f\n", simple_interest);
//     return 0;
// }



#include <stdio.h>

int main() {
    float amount, rate, simple_interest;
    int months;

    printf("Provide amount and interest in the format $amount rate%% : ");
    scanf("$%f %f%%", &amount, &rate);  // Fixing the format specifier here
    printf("Enter the period in months: ");
    scanf("%d", &months);

    simple_interest = (amount * rate * months) / 100;

    printf("\nSimple interest : %f\n", simple_interest);

    return 0;
}

// Read a 3 digit int value, 5 digits float value and a character using scanf()

// int num1 = 12;
// int num2 = 45;
// num1 = num1 + num2;
// num2 = num1 - num2;


//Testing code
#include <stdio.h>

int main() {
    int n,i,sum=0, sum2=0;
    printf("n : ");
    scanf("%d",&n);
    
    // Sum
    for (i = 0; i <= n; i++) {
        sum = sum + i;
    
    }
    printf("Sum : %d\n", sum);
    
    // SUM OF SQUARES:
    for (i = 0; i<=n; i++){
        sum2 = sum2 + i*i;
    }
    printf("Sum of squres : %d", sum2);
    return 0;
}

// alter above code to get average 70.333336 instead of 70.333333  when input numbers are 121, 34, 56.

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a>b) && (a>c)){
        printf("%d is largest\n",a);
        // printf("%d is smallest")
    } else if((b>a) && (b>c)){
        printf("%d is largest\n",b);
    } else{
        printf("%d is largest\n",c);
    }
    
    // smallest
    if((a<b) && (a<c)){
        printf("%d is smallest\n",a);
    } else if((b<a) && (b<c)){
        printf("%d is smallest\n",b);
    } else{
        printf("%d is smallest\n",c);
    }
    
    return 0;