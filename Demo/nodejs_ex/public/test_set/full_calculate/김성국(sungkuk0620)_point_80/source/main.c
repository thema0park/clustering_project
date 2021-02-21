#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char u[9]={'0','0','0','0','0','0','0','0','0'};
    int i=0;

	scanf("%s %s", byte[0], byte[1]);
    for(i=8;i>-1;i--){

    if((byte[0][i]=='0'||byte[0][i]=='1')&&(byte[1][i]=='0'||byte[1][i]=='1')){
        if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==1){
            out[i]='1';

        }
        else if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==0){
            out[i]='0';
        }
        else if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==2){
            out[i]='0';
            u[i-1]='1';
        }
        else if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==3){
            out[i]='1';
            u[i-1]='1';
        }
    }
    }

   
	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
