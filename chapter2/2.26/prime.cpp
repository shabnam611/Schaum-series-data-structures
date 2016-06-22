#include<bits/stdc++.h>

void sieve(int prime[],int m){
    int a;
    for(a=0;a<m;a++){
        prime[a]=1;
    } // initializing all the index as 1 , assuming that all the numbers are prime
    prime[0]=0;
    prime[1]=1; // setting the first two prime numbers
    int j,k;
    for(j=2;j<sqrt(m);j++){
        for(k=j*j;k<m;k=k+j){
           prime[k] = 0; // making all those index 0 where there is a factor of another number or crossing out those positions where there is no prime
        }
    }

}

int main(){
    int n=0;
    printf("enter range of the primes should be displayed:\n");
    scanf("%d",&n);
    int valid[n] ; // this array is used to identify those positions where primes are located
    sieve(valid,n);
    int i;
    for(i=0;i<n;i++){
        if(valid[i]==1){
            printf("%d ", i); // print the value of i if it has 1 in the valid[n] array at ith position
        }
    }
}

//author : Mushrit Shabnam

