#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int INS(char TEXT[],char NEW[],int K){
    int i = strlen(TEXT);
    int j = strlen(NEW);
    for(int n = 0 ; n < i ; n++){
        if(n==K){
            for(int l = 0; l < j; l++){
                cout<<NEW[l]; //printing the string NEW
            }
            cout<<TEXT[K]; //printing started from where we stopped
        }
        else{
             cout<<TEXT[n]; // printing when K ! = n
            }

        }
    }

int main(){
    char arr1[100],arr2[50];
    gets(arr1);
    gets(arr2);
    int k;
    scanf("%d", &k);
    getchar();
    INS(arr1,arr2,k);
}
