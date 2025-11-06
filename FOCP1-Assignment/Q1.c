//C program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int num1; int num1copy; int n=0; int sum=0;

    printf("Enter the number: \n");
    scanf("%d",&num1);

    num1copy=num1;

    while (num1copy!=0) //to calculate number of digits
    { 
        num1copy=num1copy/10;
        n++;
    }
    printf("Total digits in the number:%d \n",n);

    num1copy=num1;
    while (num1copy!=0) //calculating sum for armstrong number
    { 
        int remainder=num1copy%10;
        sum=sum + pow(remainder,n);
        num1copy=num1copy/10;
    }
    if(num1==sum)
     printf("The number is an armstrong number");
    else
      printf("The number is not an armstrong number");

return 0;
}