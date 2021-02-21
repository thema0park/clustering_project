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
    int i = 7, crr = 0;
    for(i=7;i>=0;i--){
        if( !('0'<=byte[0][i]&&byte[0][i]<='1') || !('0'<=byte[1][i] && byte[1][i]<='1') ){
            printf("Input Error\n");
            return 0;
        }
    }
    for(i=7;i>=0;i--){
        int a = (byte[0][i]-'0') + (byte[1][i]-'0') + crr;
        switch(a){
            case 3:
                crr = 1;
                out[i] = '1';
                break;
            case 2:
                crr = 1;
                out[i] = '0';
                break;
            case 1:
                crr = 0;
                out[i] = '1';
                break;
            case 0:
                crr = 0;
                out[i] = '0';
        }
    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
