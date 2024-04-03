#include <stdio.h>
int main(){
    float fehtemp,celtemp;
    printf("Enter the feherenheit temperature: ");
    scanf("%f",&fehtemp);
    celtemp=((fehtemp-32)*5)/9;
    print("Temperature in degree Celcius: %f",celtemp);
    return 0;
}