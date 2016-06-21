#include<bits/stdc++.h>


 void divi(int k,int l){

    if((k%l)==0){
        printf("1\n");
    }
    else if((k%l)!=0){
        printf("0\n");
    }
}
int main(){
    int i,j;
    scanf("%d %d", &i,&j);
    divi(i,j);
    return 0;
}
