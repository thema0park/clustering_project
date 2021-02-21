#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char temp[BYTE_SIZE]={0};
    int i=0,j=0,k=0;

	scanf("%s %s", byte[0], byte[1]);
  
	////////////////////////////////////////
   
    for(i;i<BYTE_SIZE;i++){
        if (byte[0][i]+byte[1][i]=='0'+'0'){
            out[i]='0';
        }
        else if (byte[0][i]+byte[1][i]=='1'+'0'){
            out[i]='1';
        }
        else{
            out[i]='0';
            temp[i-1]='1';
        }
    }
    for(k;k<7;k++){
        for(i;i<7;i++){
            if(out[i]+temp[i]=='0'+'0'){
                out[i]='0';
            }
            else if(out[i]+temp[i]=='1'+'0'){
                out[i]='1';
            }
            if(out[i]+temp[i]=='1'+'1'){
                out[i]='0';
                temp[i-1]='1';
            }
        }
    }
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
