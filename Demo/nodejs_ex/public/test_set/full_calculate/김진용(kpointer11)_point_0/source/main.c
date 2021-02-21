#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char tmp[BYTE_SIZE+1]={0};
    int i;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    
    

    for(i=BYTE_SIZE; i>=0; i--){
        if(byte[0][i]=='1'&&byte[1][i]=='1'){
            tmp[i+1]='1';
            byte[0][i]='0';
            byte[0][i]='0';
        }
        
        out[i]=byte[0][i]+byte[1][i]+tmp[i];
        
        if(out[i]>='2'){
            tmp[i+1]='1';
            out[i]=out[i]-2;
        }


    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
    
    
}
