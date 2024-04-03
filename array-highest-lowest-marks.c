#include <stdio.h>
int main(){
    int marks[5], i, highest, lowest;
    printf("Enter 5 subject marks : ");
    for (i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    highest = lowest = marks[0];
    for (i = 0; i < 5; i++){
        if (marks[i] >= highest){
            highest = marks[i];
        }
        if (marks[i] < lowest){
            lowest = marks[i];
        }
    }
    printf("Highest marks : %d\nLowest marks : %d\n", highest, lowest);
}