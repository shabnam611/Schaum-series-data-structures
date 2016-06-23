#include<stdio.h>
#include<string.h>
using namespace std;

int RANDOM(int DATA[],int N,int K){
    int a,b,c,flag=0;
    memset(DATA,0,sizeof(DATA));
    for(a=0;a<N;a++){
        scanf("%d", &b);
            if((b>=1)&&(b<=K)){
                    flag++;
                    DATA[b]=b;
                    printf("index: %d , value: %d\n", b,DATA[b]);
            }

    }
    printf("the array is : ");
    for(a=0;a<=flag;a++){
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
