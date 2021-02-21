#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int carry;

char fullAdder(int a,int b,int _carry){
    int sum = a+b+_carry;
    if(sum == 0){
        carry = 0;
        return '0';
    }
    if(sum == 1){
        carry = 0;
        return '1';
    }
    if(sum == 2){
        carry = 1;
        return '0';
    }
    if(sum == 3){
        carry = 1;
        return '1';
    }
    
}

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

    int i,j;
    int pos;

	scanf("%s %s", byte[0], byte[1]);

    for(j=0;j<2;++j){
    for(i = 0; i< strlen(byte[j]);++i){
        if(byte[j][i] == '0' || byte[j][i] == '1'){}
        else{printf("Input Error\n");return 0;}
    }}

    for(i=0;i<8;++i){
        out[i] = '0';
    }

    carry = 0;

	////////////////////////////////////////

    pos = 7;
    for(i=7;i>=0;--i){
        out[pos--] = fullAdder( (int)(byte[0][i] - '0') , (int)(byte[1][i] - '0'), carry);
    }

    out[8] = '\0';

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
