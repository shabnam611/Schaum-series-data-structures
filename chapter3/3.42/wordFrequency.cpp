#include<stdio.h>
#include<string.h>
int main(){
    char TEXT[100],WORD[10];
    int C = 0;
    gets(TEXT);
    gets(WORD);
    int i,j,k,l,n=0;
    i = strlen(TEXT);
    k = strlen(WORD);
    for(j = 0 ; j < i ; j++){
        if(TEXT[j]==WORD[n]){
                l = j;
            while(n!=k){
                    if(TEXT[l]==WORD[n]){
                       l++;
                       n++;
                    }
            }
            if(n==k){
                C++;
                j = j + l;
                n=0;
            }
        }
    }
    printf("%d\n", C);
    return 0;
}
