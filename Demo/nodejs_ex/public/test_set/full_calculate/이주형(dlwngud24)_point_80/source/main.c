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
    

    int j;
    int up=0;
    for(j=8;j>=0;j--){
        if(byte[0][j]=='0' && byte[1][j]=='0'){
            if(up==1){
                out[j] = '1';
                up =0;
            }else{
                out[j] = '0';
            }
        }else if(byte[0][j]=='0' && byte[1][j]=='1'){
            if(up==1){
                out[j] = '0';
                up=1;
            }else{
                out[j] = '1';
            }
        }else if(byte[0][j]=='1' && byte[1][j]=='0'){
            if(up==1){
                out[j] = '0';
                up=1;
            }else{
                out[j] = '1';
            }
        }else if(byte[0][j]=='1' && byte[1][j]=='1'){
             if(up==1){
                out[j] = '1';
                up=1;
            }else{
                out[j] = '0';
                up =1;
            }
        }
    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
