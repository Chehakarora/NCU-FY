//C program to find the first occurrence of the score “99” in an array
#include<stdio.h>
int main(){
    //for 2D array
    int n,m;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of columns:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter %d,%d element:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==99){
                printf("99 occurs at %d,%d in the array\n",i,j);
            }
        }
    }
    // for 1D array
    int n1;
    printf("Enter number of elements in the array:");
    scanf("%d",&n1);

    int arr1[n1];
    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<n1; i++){
        if(arr1[i]==99){
            printf("99 occurs at %d in the array\n",i);
        }
    }
    return 0;
}
