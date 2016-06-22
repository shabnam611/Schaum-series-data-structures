
#include<stdio.h>
#include<math.h>

int counter(int A[],int n,int c){
   int j,maxi=0,mini=0,temp1=0,temp2=0,flag = 0;
   for(j=0;j<n;j++){
        if(j==0){
            maxi = A[j];
            //temp1 = j;
            flag++;
        }
        else if(j>0){
            if((maxi<A[j])&&(mini<A[j])){
                //temp2 = temp1;
                //temp1 = j;
                flag++;
                mini = maxi;
                maxi = A[j];
            }
            else if((maxi>A[j])&&(A[j]>mini)){
                    mini=A[j];
                    //temp2 = j;
                }
            }
        }
    printf("LOC is updated %d times to find the largest element in the list \n", flag);
    return 0;
}
int main(){
    //printf("entered in main\n");
    int b=0,d=0;
    printf("enter the number of the elements: ");
    scanf("%d", &b);
    printf("enter the elements: ");
    int k,arr[b];
    for(k=0;k<b;k++)
    {
        scanf("%d", &arr[k]);
        //printf("%d ", a[k]);
    }
    counter(arr, b ,d);
    return 0;
}
//author: Mushrit Shabnam

