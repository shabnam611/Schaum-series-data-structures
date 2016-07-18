#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int i,j,k,l,flag = 0,m,n;
    char word1[50],word2[50],text[100];
    gets(word1);

    gets(word2);

    gets(text);

    i=strlen(word1);
    j=strlen(word2);
    k=strlen(text);
    for(l=0;l<k;l++){
            flag = 0;
        if(text[l]==word1[0]){
                n=l;
            while(text[l]==word1[l-n]){
                flag++;
                l++;
            }
            if(flag==i){
                    for(m=0;m<j;m++){
                        printf("%c", word2[m]);
                    }
                    l--;
            }
            else{
                printf("%c", text[n]);
                l = l - flag;


            }
        }
        else{
            printf("%c", text[l]);
        }
    }
    return 0;
}

