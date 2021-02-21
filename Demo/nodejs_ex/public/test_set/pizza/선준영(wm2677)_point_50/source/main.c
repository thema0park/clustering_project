#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50


int yaksu(int a,int b){
    if(b==0){
        return a;
    }
    if(b==1 || a==b){
        return 1;
    }
    if(a>b){
       return yaksu(b, a%b);
    }
    else{
       return yaksu(b,a);
    }
}


int main()
{
    int count;
    int i,j;
    int arr[50];
    int warn[50];
    scanf("%d",&count);
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
        warn[i]=0;
    }
   
    
        for(i=0;i<count;i++){
            for(j=0;j<count;j++){
             
                if(yaksu(arr[i],arr[j])==1 && i!=j){
                    warn[i]++;warn[j]++;
                }
                else{
                    continue;
                }
            }
        }
    
    
    int warn1=0;
    int big;
    for(i=0;i<count;i++){
        if(warn[i]>warn1){
            warn1=warn[i];
            big=i;
        }
    }
    printf("%d\n",arr[big]);
}