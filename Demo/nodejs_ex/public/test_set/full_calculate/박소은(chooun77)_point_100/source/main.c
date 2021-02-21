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
    int i,j;

    for(j=0;j<BYTE_SIZE;j++){
        if(byte[0][j]!='0' && byte[0][j]!='1'){
            printf("Input Error\n");
            return 0;
        }
        if(byte[1][j]!='0' && byte[1][j]!='1'){
          printf("Input Error\n");
          return 0;
        }

    }

    for(i=BYTE_SIZE-1;i>=0;i--){
        if(i==0){
            out[i-1]=0;
        }
        if(out[i]=='1'){
            if((byte[0][i]=='1' && byte[1][i]=='1')){
                out[i]='1';
                out[i-1]='1';
            }
            if((byte[0][i]=='1' && byte[1][i]=='0')||(byte[0][i]=='0'&&byte[1][i]=='1')){
                out[i]='0';
                out[i-1]='1';
            }
            if(byte[0][i]=='0' && byte[1][i]=='0'){
                out[i]='1';
            }
        }
        else{
            if(byte[0][i]=='1' && byte[1][i]=='1'){
                out[i-1]='1';
                out[i]='0';
            }
            if((byte[0][i]=='1' && byte[1][i] == '0')||(byte[0][i]=='0' && byte[1][i]=='1')){
                out[i]='1';
            }
            if(byte[0][i]=='0' && byte[1][i]=='0'){
                out[i]='0';
            }
        }
    }



	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
