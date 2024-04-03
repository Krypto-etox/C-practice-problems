#include <stdio.h>
int main(){
    int i, j, k, r1, r2, c1, c2;
    int a[100][100], b[100][100], product[100][100];
    printf("Enter Number of Rows and Columns of Matrix 1 : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter Elements of Matrix 1 : \n");
    for (i = 0; i < r1; i++){
        for (j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Number of Rows and Columns of Matrix 2 : ");
    scanf("%d %d", &r2, &c2);
    printf("Enter Elements of Matrix 2 : \n");
    for (i = 0; i < r1; i++){
        for (j = 0; j < c1; j++){
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2){
        printf("Can't be Multiplied !\n");
        return 1;
    }

    for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            product[i][j] = 0;
            for (k = 0; k < c1; k++){
                product[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
   
}
