#include<stdio.h>
#include<math.h>

int LINEAR(int ARRAY[] , int LB , int UB , int ITEM , int LOC){
    int a,flag = 0;
    for(a=LB;a<=UB;a++){
            if(ARRAY[a]==ITEM){
                flag++;
                printf("LOC =  %d\n", a);
                return 0;
            }
    }
    if(flag==0){
        printf("LOC = 0\n");
    }

}

int main(){
    int i,j,k,l,n,m;
    printf("enter the length of array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the numbers of array: \n");
    for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
    }
    printf("enter the item to find: \n");
    scanf("%d", &k);
    printf("enter lower bound and upper bound:\n");
    scanf("%d %d", &j,&m);
    LINEAR(arr,j,n,k,l);
    return 0;
}
