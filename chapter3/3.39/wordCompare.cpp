#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char WORD[10],SENTENCE[100];
    gets(WORD);
    gets(SENTENCE);
    int j,k;
    int l=0;
    getchar();
    i = strlen(SENTENCE);
    k = strlen(WORD);
    int counter = 0;
    for(j=0;j<i;j++){
        if(SENTENCE[j]==WORD[0]){
                int flag = 1;
        for(l=0;l<k;l++){
                if(SENTENCE[j+l]!=WORD[l]){
                    flag = 0;
                    break;
                }
        }
        if(flag==1){
            counter++;
        }

    }
}
printf("%d\n", counter);

}
