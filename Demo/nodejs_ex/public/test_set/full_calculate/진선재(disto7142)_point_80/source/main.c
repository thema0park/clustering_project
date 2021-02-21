#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i;
    for(i=0;i<8;i++) out[i]='0';
    for(i=7;i>=0;i--){
        out[i]+=(byte[0][i]-'0')+(byte[1][i]-'0');
        if(out[i]=='2'){
            out[i]='0';
            out[i-1]='1';
        }
        else if(out[i]=='3'){
            out[i]='1';
            out[i-1]='1';
        }
    }



	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
