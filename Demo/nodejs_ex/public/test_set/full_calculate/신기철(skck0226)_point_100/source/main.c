#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i,k=1;
	scanf("%s %s", byte[0], byte[1]);
    for(i=0;i<8;i++){
        if(byte[0][i]!='0'&&byte[0][i]!='1') k=0;
        if(byte[1][i]!='0'&&byte[1][i]!='1') k=0;
    }
	////////////////////////////////////////
    if(k==0) printf("Input Error\n"); 
    else{
        for(i=7;i>=0;i--){
            if(out[i]=='1'){
                if(byte[0][i]=='0'&&byte[1][i]=='0'){
                    out[i]='1';
                    out[i-1]='0';
                }
                else if(byte[0][i]=='0'||byte[1][i]=='0'){
                    out[i]='0';
                    out[i-1]='1';
                }
                else{
                    out[i]='1';
                    out[i-1]='1';
                }
            }
            else{
                if(byte[0][i]=='0'&&byte[1][i]=='0'){
                    out[i]='0';
                    out[i-1]='0';
                }
                else if(byte[0][i]=='0'||byte[1][i]=='0'){
                    out[i]='1';
                    out[i-1]='0';
                }
                else{
                    out[i]='0';
                    out[i-1]='1';
                }
            }
        }
        printf("%s\n", out);
    }


	////////////////////////////////////////

	

	return 0;
}
