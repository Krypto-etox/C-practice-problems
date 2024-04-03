/*
write a c program to convert the given distance in inches into the distancein YARDS, FEET and INCHES.

>>> distance : 99 // input
>>> equal to 2 yards 2 feet and 3 inches
*/ 

#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("distance : ");
    scanf("%d", &a);
    
    b = (a / 36);
    c = ((a % 36) / 12);
    d = ((a % 36) % 12);
    
    printf("equal to %d yards %d feet and %d inches",b, c, d);
    return 0;
}