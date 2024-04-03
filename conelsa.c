#include <stio.h>
#include <math.h>
#define PI 3.14

int main(){
    float r, h, l, lsa;
    printf("radius, height : ");
    scanf("%f %f", &r, &h);

    lsa = PI*r*sqrt((r*r) + (h*h));
    printf("surface area : %f\n",lsa);
    return 0;
}