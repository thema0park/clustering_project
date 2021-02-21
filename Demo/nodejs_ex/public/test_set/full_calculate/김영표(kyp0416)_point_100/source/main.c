#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char carry = 0;
    int i,j;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////

    for(i = 0;i < 2; i++){
        for(j = 0; j < 8 ;j++){
            if(!(byte[i][j] == '0' || byte[i][j] == '1')){
                printf("Input Error\n");
                return 0;
            }
            byte[i][j] = byte[i][j] - '0';
        }
    }

    for(i = 7; i >= 0 ;i--){
        out[i] = byte[0][i]+byte[1][i]+carry;
        if(out[i] >= 2){
            carry = 1;
            out[i] = out[i] - 2;
        }
        else{
            carry = 0;
        }
    }
    for(i = 0;i < 8; i++){
        out[i] = out[i] + '0';
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
