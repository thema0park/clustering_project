#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    char addcount='0';
    int errorcount=0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
for (i=0; i<BYTE_SIZE; i++) {
    if(byte[0][i] != '0'&&byte[0][i] != '1') {
        errorcount=1;
break;
    }
}
for (i=0; i<BYTE_SIZE; i++) {
    if(byte[1][i] != '0'&&byte[1][i] != '1') {
errorcount=1;
break;
    }
}

if (errorcount==1) printf("Input Error");
else if (errorcount==0) {
for (i=BYTE_SIZE-1; i>=0; i--) { 
    if (byte[0][i]==byte[1][i]) {
        out[i]=addcount;
        if (byte[0][i]=='0') addcount='0';
        else if (byte[0][i]=='1') addcount='1';
    }
    else if (byte[0][i]!=byte[1][i]) {
        if (addcount=='1') {
            out[i]='0';
            addcount='1';
        }
        else if (addcount=='0') out[i]='1';
    }
}
	////////////////////////////////////////
	printf("%s\n", out);
}

	return 0;
}
