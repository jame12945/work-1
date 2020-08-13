#include<stdio.h>


int main() {
    int a, i, j;
    int ArrayA[10][10];
    printf("input your first number :");
    scanf_s("%d", &ArrayA[0][0]);
    printf("input your second number :");
    scanf_s("%d", &ArrayA[1][0]);
    printf("Output 1 is %d\n", ArrayA[0][0]);
    printf("Output 2 is %d\n", ArrayA[1][0]);
    a = ArrayA[0][0] + ArrayA[1][0];
    if (ArrayA[0][0] + ArrayA[1][0] >= 0) {
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                if (j <= i) {
                    printf("%d", a);

                }
                else {
                    printf(" ");
                }


            }
            printf("\n");

        }

    }
    else if (ArrayA[0][0] + ArrayA[1][0] < 0) {
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                if (j <= 6 - i) {
                    printf("%d", a);
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }


    }




}