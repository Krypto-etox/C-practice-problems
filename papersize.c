#include <stdio.h>
int main(){
    int a,width=1189,height=841;
    for (a=1; a<=8; a +=1){
        int newwidth = (a%2==0) ? width:height;
        int newheight = (a%2==0) ? height/2:width/2;
        width = newwidth;
        height = newheight;
        printf("A%d = %d X %d\n",a,width,height);
    }
    return 0;
}