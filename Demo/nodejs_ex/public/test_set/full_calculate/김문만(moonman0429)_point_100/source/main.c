#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1] = {};
	char out[BYTE_SIZE+1] = {};

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int k;
    for(k = 0; k < BYTE_SIZE; k++){
        if(!((byte[0][k] == '0' || byte[0][k] == '1') && (byte[1][k] == '0' || byte[1][k] == '1'))){
            printf("Input Error\n");
            return 0;
        }
    }
    int i;
    int j = 0;
    for(i = BYTE_SIZE-1; i>-1; i--){
        j = byte[0][i] - '0' + byte[1][i] - '0' + j;
        if(j == 3) {
            out[i] = '1';
            j = 1;
        }
        else if(j > 1){
            out[i] = '0';
            j = 1;
        }
        else{
            if(j == 1) out[i] = '1';
            if(j == 0) out[i] = '0';
            j = 0;
        }
    }
    out[BYTE_SIZE] = '\0';


	////////////////////////////////////////
    if(j>1){
        printf("1");
    }
	printf("%s\n", out);

	return 0;
}
