#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i,d,a,b; int c=0; int f=0;
    scanf("%s %s",byte[0],byte[1]);
    for(i=0;i<8;i++){
        if((byte[0][i]!='0'&&byte[0][i]!='1')||byte[1][i]!='0'&&byte[1][i]!='1') {
            f=-1;
            break;
        }
    }
	////////////////////////////////////////
    for(i=7;i>=0;i--){
        if(byte[0][i]=='1') a=1; else a=0;
        if(byte[1][i]=='1') b=1; else b=0;
        d=a+b+c;
        if(d>1){
            d=d-2;
            if(i!=0) c=1;
        }
        else c=0;
        if(d==0){
            out[i]='0';
        }
        else out[i]='1';
    }
    out[8]=NULL;

	////////////////////////////////////////
    if(f!=-1) printf("%s\n",out);
    else printf("Input Error\n");

	return 0;
}
