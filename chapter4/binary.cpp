#include<stdio.h>
#include<math.h>
//use the comments to understand the code.
int BINARY(int ARRAY[], int LB, int UB , int ITEM, int LOC){
    int mid=0;
    mid = (LB+UB)/2;
    int flag = 0;
        while(LB<=UB){
            if(ARRAY[mid]==ITEM){
            printf("the value is present in the list at location %d\n", mid);
                break;
            }
            else if(ARRAY[mid]>ITEM){
                UB = mid -1;
            }
            else if(ARRAY[mid]<=ITEM){
                LB = mid + 1;
            }
            mid = (LB+UB)/2;
            //printf("mid %d\n", mid);
            //printf("ARRAY[mid] %d\n", ARRAY[mid]);
            //printf("LB %d ,UB %d\n", LB,UB);
        }
        if(LB>UB){
            printf("The item is not present in the list\n");
        }
    return 0;
}

int main(){
    int i,j,k,n,m,l=-1;
    printf("enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
     printf("enter the values of ARRAY: ");
     for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the item to find: ");
    scanf("%d", &k);
    j=0;
    m=n-1;
    BINARY(arr,j,m,k,l);
    return 0;
}
