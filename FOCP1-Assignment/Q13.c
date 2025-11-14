//C program to find a peak element that is not smaller than its neighbours
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d value:",i);
        scanf("%d",&arr[i]);
    }

    printf("Peak value(s) in the array:\n");

    if(n > 1 && arr[0] > arr[1]){
        printf("%d ", arr[0]);
    }

    for(int i=1; i<n-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            printf("%d ", arr[i]);
        }
    }

    if(n > 1 && arr[n-1] > arr[n-2]){
        printf("%d", arr[n-1]);
    }

    if(n == 1){
        printf("%d", arr[0]);
    }

    return 0;
}