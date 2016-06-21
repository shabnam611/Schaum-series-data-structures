#include<bits/stdc++.h>
using namespace std;
int find(int data[],int n,int loc1,int loc2){
   int j,maxi=0,mini=0,temp1=0,temp2=0;
   for(j=0;j<n;j++){
        if(j==0){
            maxi = data[j];
            temp1 = j;
        }
        else if(j>0){
            if((maxi<data[j])&&(mini<data[j])){
                temp2 = temp1;
                temp1 = j;
                mini = maxi;
                maxi = data[j];
            }
            else if((maxi>data[j])&&(data[j]>mini)){
                    mini=data[j];
                    temp2 = j;
                }
            }
        }
    loc1 = temp1;
    loc2 = temp2;
    printf("position of largest value : %d , position of second-largest value: %d\n", loc1,loc2);
    return 0;
}
int main(){
    //printf("entered in main\n");
    int b=0,c=0,d=0;
    printf("enter the number of the elements: ");
    scanf("%d", &b);
    printf("enter the elements: ");
    int k,a[b];
    for(k=0;k<b;k++)
    {
        scanf("%d", &a[k]);
        //printf("%d ", a[k]);
    }
    find(a , b ,c , d);
    return 0;
}
//author: Mushrit Shabnam
