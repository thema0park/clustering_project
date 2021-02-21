#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    int j;
    int s;
	scanf("%s %s", byte[0], byte[1]);
    for(i=7;i>=0;i++) {
        if(byte[1][i]==0 && byte[2][i]==0 || byte[1][i]==1 && byte[2][i]==0 || byte[1][i]==0 && byte[2][i]==1) {
            byte[0][i]=0;
            for(j=7;j>=0;j++) {
                if(byte[1][j]==0 && byte[2][j]==0) {
                    out[j]=0;
                }
                if(byte[1][i]==1 && byte[2][i]==0 || byte[1][i]==0 && byte[2][i]==1) {
                    out[j]=1;
                }
            }
        }
        if(byte[1][i]==1 && byte[2][i]==1) {
            byte[0][i]=1;
            
        }
        else {
            printf("Input Error");
        }
    }

	return 0;
}
