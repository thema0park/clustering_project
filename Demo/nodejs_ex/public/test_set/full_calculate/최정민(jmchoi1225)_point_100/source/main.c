#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int a,b;
    int i;
    int up=0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    

    for(i = BYTE_SIZE-1; i>=0; i--){
        if(byte[0][i]=='0') a = 0;
        else if(byte[0][i]=='1') a = 1;
        else{
            printf("Input Error\n");
            return 0;
        }
        if(byte[1][i]=='0') b = 0;
        else if(byte[1][i]=='1') b = 1;
        else{
            printf("Input Error\n");
            return 0;
        }
        if((a+b+up)%2==1) out[i]='1';
        else out[i] = '0';
        if((a+b+up)>1) up = 1;
        else up = 0;
    }
    out[BYTE_SIZE] = '\0';


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
