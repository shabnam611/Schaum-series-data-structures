#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int INS(char TEXT[] , int K){
     int j,l=0;
     j =strlen(TEXT);
     //cout<<TEXT<<" "<<K<<" "<<j<<endl;
     while(l<j){
        if((l>=K && TEXT[l]!=' '&&l<j))
        {
            printf("%c", TEXT[l]);
            if(TEXT[l+1]==' ')
                break;
        }
        else if(l<K){
            printf("%c", TEXT[l]);
        }
        l++;
     }
}
int main(){
    char str[50];
    printf("enter the text: \n");
    gets(str);
    int i,j;
    //cout<<str<<endl;
    printf("enter the position for print: ");
    scanf("%d", &i);
    //cout<<i<<endl;
    INS(str,i);
    return 0;
}
