#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1]={0};

	scanf("%s %s", byte[0], byte[1]);
    int i;
	////////////////////////////////////////
    int ch=0;
    for(i=BYTE_SIZE;i>=1;i--){
        if(!((byte[0][i-1]=='0' || byte[0][i-1]=='1') && (byte[1][i-1]=='0' || byte[1][i-1]=='1'))){
            ch=1;
            break;
        }
        out[i]+=(byte[0][i-1]-'0')+(byte[1][i-1]-'0');
        if(out[i]>=2){
            out[i]-=2;
            out[i-1]++;
        }
    }
    if(ch==1)
        printf("Input Error\n");
    else{
     for(i=1;i<=BYTE_SIZE;i++)
	////////////////////////////////////////
    
	     printf("%d", out[i]);
     printf("\n");
    }
	return 0;
}
