//Generating fibonacci series
#include<stdio.h>
int main(){

    int num1=0,num2=1,num3;
    printf("Please enter number for printing fibonacci series: \n");
    scanf("%d",&num3);

    if(num3>=1){
        printf("0 ");
    }
    if(num3>=2){
        printf (" 1 ");
    }
    for(int i = 3;i<num3;i++){
        int sum = num1 + num2;
        printf(" %d ",sum);
        num1=num2;
        num2=sum;
    }

    return 0;
}