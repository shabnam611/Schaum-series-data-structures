#include<stdio.h>
#include<math.h>

int divi(int l,int m){
    int a,prime[m+10],i,j,k,flag=0;
    for(a=0;a<(m+10);a++){
        prime[a]=1;
    } // initializing all the index as 1 , assuming that all the numbers are prime
    if((m%2)==0){
        flag = 0;
    }
    else{
    if(m>l){
    int b = m+10;
    prime[0]=0;
    prime[1]=1; // setting the first two prime numbers
    for(j=10;j<sqrt(b);j++){
        for(k=j*j;k<b;k=k+j){
           prime[k] = 0; // making all those index 0 where there is a factor of another number or crossing out those positions where there is no prime
        }
    }
    if(prime[m]==1){
        flag = 1;
    }
    else{
        flag = 0;
    }
  }
}

    return flag;
}

int main(){
    int n,ans, s = 10; //according to question,  s = 10
    printf("enter the number to check : ");
    scanf("%d", &n);
    ans = divi(s,n);

    if(ans==1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

}
