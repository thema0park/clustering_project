#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{   
    char byte[IN_NUM][BYTE_SIZE + 1]={0};
    int inbyte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1]={0};
    int error=0;

	scanf("%s %s", byte[0], byte[1]);
	////////////////////////////////////////
    int k=BYTE_SIZE;
    for(k;k>0;k--){
        inbyte[0][k]=byte[0][k-1]-48;
        inbyte[1][k]=byte[1][k-1]-48;
        if ((inbyte[0][k]!=0)&&(inbyte[0][k]!=1)){
            printf("Input Error\n");
            error=-1;
            break;
        }
    }
    if (error==-1)
        return 0;

    int i=BYTE_SIZE;
    for(i;i>0;i--){
        out[i] = out[i]+inbyte[0][i]+inbyte[1][i];
        if (out[i]==2){
            out[i-1]=out[i-1]+1;
            out[i]=0;
        }
        if(out[i]==3){
            out[i-1]=out[i-1]+1;
            out[i]=1;
        }
    }


	////////////////////////////////////////
    int j=1;
    for (j;j<BYTE_SIZE+1;j++){
	    printf("%d", out[j]);
    }
    printf("\n");
	return 0;
}
