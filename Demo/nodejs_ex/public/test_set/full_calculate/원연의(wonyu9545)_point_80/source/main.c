#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i=0,a[10]={0},j=0;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(j=0;j<8;j++){
        if(!(byte[0][i]=='1'||byte[0][i]=='0')){printf("\"Input Error\"");return 0;}
        if(!(byte[1][i]=='1'||byte[1][i]=='0')){printf("\"Input Error\"");return 0;}
    }
    for(i=7;i>=0;i--){
        if(byte[0][i]=='1'&&byte[1][i]=='1'&&a[i]==1){out[i]='1';a[i-1]=1;}
        else if(byte[0][i]=='1'&&byte[1][i]=='1'&&a[i]==0){out[i]='0';a[i-1]=1;}
        else if(byte[0][i]=='1'&&byte[1][i]=='0'&&a[i]==1){out[i]='0';a[i-1]=1;}
        else if(byte[0][i]=='0'&&byte[1][i]=='1'&&a[i]==1){out[i]='0';a[i-1]=1;}
        else if(byte[0][i]=='0'&&byte[1][i]=='0'&&a[i]==1){out[i]='1';}
        else if(byte[0][i]=='0'&&byte[1][i]=='1'&&a[i]==0){out[i]='1';}
        else if(byte[0][i]=='1'&&byte[1][i]=='0'&&a[i]==0){out[i]='1';}
        else if(byte[0][i]=='0'&&byte[1][i]=='0'&&a[i]==0){out[i]='0';}
    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
