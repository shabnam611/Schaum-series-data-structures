#include<stdio.h>
#include<stdlib.h>
int INSERTCOUNT(int A[] , int N , int NUMB){
    int maxi = 0 ;
    int k,temp,l;
    for (l=1;l<=(N-1);l++){
    d = c;
    while ((d> 0)&&(A[d]<A[d-1])) {
      temp = A[d];
      A[d]   = A[d-1];
      A[d-1] = t;
      d--;
    }
  }
    for(k=1;k<=(N-1);k++){
        printf("%d", A[k]);
    }
}
int main(){
    int i,j,com = 0;
    scanf("%d", &i);
    int arr[i];
    for(j=1;j<=(i-1);j++){
        scanf("%d", &arr[j]);
    }
    INSERTCOUNT(arr,i,com);
    return 0;
}
