/*A building has F floors with a floor height of H meters each. A ball is 
dropped brom the top of the building.
Find the time taken by the ball to reach each floor. (Use the formula 
s = ut + (1/2)at*t where u and a are the initial velocity in m/sec(=0) 
and acceleration = 9.8 meter per second square."

input and output is as follows.
"Enter number of the floors : 10 //input
Enter height of each floor : 3 // input
The time taken by the ball to reach floor - 10: 0.782461
The time taken by the ball to reach floor - 9: 1.106567*/

#include <stdio.h>
#include <math.h>

int main() {
    int floors;
    double height, acceleration, time;

    // Input
    printf("Enter number of floors: ");
    scanf("%d", &floors);

    printf("Enter height of each floor: ");
    scanf("%lf", &height);

    // Constants
    acceleration = 9.8;  // Acceleration due to gravity

    // Calculate time for each floor
    for (int i = floors; i >= 0; i--) {
        time = sqrt((2 * height * ((floors+1) - i)) / acceleration);
        printf("The time taken by the ball to reach floor - %d: %0.6lf\n", i, time);
    }

    return 0;
}