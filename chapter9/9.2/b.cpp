#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int INSERTSORT(int A[] , int N){
    int k,temp,l,j,c ;
    for(l=0;l<N;l++){
            if((l==0)&&(A[l+1]<A[l])){
               temp = A[l];
               A[l] = A[l+1];
               A[l+1] = temp;
               //printf("A[l] = %d , A[l-1] = %d\n", A[l],A[l+1]);
            }
            else if((l>0)&&(A[l]<A[l-1])){
                    j=l;
                    k=j-1;
                while((k>=0)&&(j>=1)){
                    if(A[j]<A[k]){
                       temp = A[k];
                       A[k] = A[j];
                       A[j] = temp;
                    }
                    k--;
                    j--;
                    //printf("A[j] = %d , A[k] = %d , k = %d , j = %d\n", A[j],A[k],k,j);
                }
                j=0;
                k=0;
            }
    }

            printf("the sorted array will be : \n");
            for(c=0;c<N;c++){
               printf("%d ", A[c]);
            }
            printf("\n");
            //printf("the number of comparisons are: %d\n", NUMB);
            return 0;
}
int main(){
    int i,j,c,d;
    printf("enter the length of the array: \n");
    scanf("%d", &i);
    char arr[i],str[i];
    getchar();
    printf("enter the elements of the array: \n");
    gets(arr);
    j=strlen(arr);
    int a = 0;
    INSERTSORT(str,a);
    return 0;
}
