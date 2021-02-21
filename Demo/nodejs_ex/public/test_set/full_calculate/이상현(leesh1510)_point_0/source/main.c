#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
    int i, j;
    char input[IN_NUM][BYTE_SIZE+1];
    char out[BYTE_SIZE+1];
    scanf("%s %s",input[0],input[1]);
    for (i=0;i<8;i++){
        out[i]=input[0][i]+input[1][i];
    }
    for (j=7;j>0;j--){
        if (out[j]==2){
            out[j]=0; out[j-1]=out[j-1]+1;
        }
    }
    if (out[0]==2) out[0]==0;
    atoi(out);
    printf("%d",out);

	return 0;
}
