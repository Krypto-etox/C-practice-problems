#include <stdio.h>
int main(){
    int tsp,prof,cp,cpo;
    printf("Enter TSP and Profit: ");
    scanf("%d %d",&tsp,&prof);
    cp = tsp - prof;
    cpo = cp/15;
    printf("Cost Price per piece: %d",cpo);
    return 0;
}