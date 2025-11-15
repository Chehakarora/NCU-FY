//C program to print a binary pyramid pattern
#include <stdio.h>

int main() {

    int i, j;

    for(i=1;i<=5;i++) {

        for(j=1;j<=i;j++) {
            if(j%2==0)
                printf("1");
            else
                printf("0");
        }

        if(i!=5) {

            for(j=1;j<=(5-i);j++) {
                printf("  ");
            }

            for(j=1;j<=i;j++) {
                if(j%2==0)
                    printf("1");
                else
                    printf("0");
            }
        }

        else {
            for(j=1;j<=i;j++) {
                if(j%2==0)
                    printf("1");
                else
                    printf("0");
            }
        }

        printf("\n");
    }
    return 0;
}