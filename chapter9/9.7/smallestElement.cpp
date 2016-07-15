#include<stdio.h>
int MIN(int A[], int LB , int UB , int LOC){
    int j,minimum;
    minimum = A[0];
    LOC = 0 ;
    for(j=LB;j<UB;j++){
        if(A[j]<minimum){
            minimum = A[j];
            LOC = j;
        }
    }
    printf("the location of the smallest element is : %d\n", LOC);
    return 0;
}
int main(){
    int n,loc,ub,lb;
    printf("enter the length of the array: \n");
    scanf("%d", &n);
    int arr[n],i;
    lb = 0;
    ub = n-1;
    printf("enter the values: \n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    MIN(arr,lb,ub,loc);
    return 0;
}
