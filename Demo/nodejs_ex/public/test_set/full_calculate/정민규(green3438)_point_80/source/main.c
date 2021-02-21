#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE + 1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i, up = 0;
    out[BYTE_SIZE] = '\0';
    for (i = 1; i < BYTE_SIZE + 1; i++){
        //printf("i: %d\n", BYTE_SIZE - i);
        if (up == 1){
            if ((byte[0][BYTE_SIZE - i] == '0') && (byte[1][BYTE_SIZE - i] == '0')) {
                out[BYTE_SIZE - i] = '1';
                up = 0;
            }
            else if ((byte[0][BYTE_SIZE - i] == '1') && (byte[1][BYTE_SIZE - i] == '1')){
                out[BYTE_SIZE - i] = '1';
                up = 1;
            }
            else {
                out[BYTE_SIZE - i] = '0';
                up = 1;
            }
        }
        else {
            if ((byte[0][BYTE_SIZE - i] == '1') && (byte[1][BYTE_SIZE - i] == '1')){
                out[BYTE_SIZE - i] = '0';
                up = 1;
            }
            else if ((byte[0][BYTE_SIZE - i] == '0') && (byte[1][BYTE_SIZE - i] == '0')) {
                out[BYTE_SIZE - i] = '0';
                up = 0;
            }
            else {
                out[BYTE_SIZE - i] = '1';
                up = 0;
            }
        }
    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
