#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int RANDOM(int DATA[],int N,int K){
    int a,b,c,flag=0 ,k;
    memset(DATA,0,sizeof(DATA));
    for(a=0;a<N;a++){
        //scanf("%d", &b);
        int temp = rand()%(K+1);
        while(temp<=0){
                   temp = (rand())%(K+1);
            }
        DATA[a]=temp;
        }
    printf("the array is : ");
    for(a=0;a<N;a++){
        printf(" %d", DATA[a]);
    }
    return 0;
}
int main(){
    int i,j,k,l,n;
    printf("enter the array length (N) and the highest value (K)\n");
    scanf("%d,%d", &n,&j);
    int arr[n];
    RANDOM(arr,n,j);
    return 0;

}
