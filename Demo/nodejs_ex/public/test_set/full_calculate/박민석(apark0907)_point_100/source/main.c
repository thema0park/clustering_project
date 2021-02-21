#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int flag=0;
#define BYTE_SIZE 8
#define IN_NUM 2
char re(char a,char b){
    if(flag==0){
        if(a=='0'&&b=='0')return '0';
        if(a=='1'&&b=='0'||a=='0'&&b=='1')return '1';
        if(a=='1'&&b=='1'){
            flag=1;
            return '0';
        }
       
    }
    if(flag==1){
        if(a=='0'&&b=='0'){
            flag=0;
            return '1';
        }
        if(a=='1'&&b=='0'||a=='0'&&b=='1'){
            flag=1;
            return '0';
        }
        if(a=='1'&&b=='1'){
            flag=1;
            return '1';
        }
    }
}
int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    int j;
    for(j=0;j<8;j++){
        if(byte[0][j]!='0'&&byte[0][j]!='1'||byte[1][j]!='0'&&byte[1][j]!='1'){
            printf("Input Error\n");
            return 0;
        }
    }
	////////////////////////////////////////
    int i;
    for(i=7;i>=0;i--){
        //printf("%c %c re=%c %d\n",byte[0][i],byte[1][i],re(byte[0][i],byte[1][i]),flag);
        out[i]=re(byte[0][i],byte[1][i]);
    }

	////////////////////////////////////////

	printf("%s\n", out);
    
	return 0;
}
