#include<stdio.h>
#include<stdlib.h>
int SELECTSORT(int A[] , int N){
    int j,k,l,check=0,MIN=0,temp=0,flag = 0;
    for(j=0;j<N-1;j++){
            MIN = j;          // let the choice is A[j] element , for the safety of loop , we take the position only
         for(k=j+1;k<N;k++){
            if(A[k]<A[MIN]){ // choosing the minimum in the remaining elements
                MIN = k;
                //printf("j = %d ,MIN = %d\n", j,MIN);
            }
            }
             if(MIN!=j){ // check if the new position of MIN is same as where we started , if not , swap
                temp = A[j];
                A[j] = A[MIN];
                A[MIN] = temp ;
        }
}
    for(l = 0 ; l<N ; l++){
        printf("%d ", A[l]);
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    SELECTSORT(arr,n);
    return 0;
}
