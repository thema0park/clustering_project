#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i,j,k;

    scanf("%s %s", byte[0],byte[1]);

    if(byte[0][0]!= 0 || byte[0][0] != 1 || byte[1][0] != 0 || byte[1][0] != 1){
       printf("Input Error\n"); return 0;
   }
   for(i=7;i>=0;i--){
       if((byte[0][i] = byte[1][i]) && byte[0][i] != 0 && byte[1][i] != 0){
           out[i] = 0;
           out[i-1] = 1;
       }
       else if(byte[0][i] != byte[1][i]){
           out[i] = 1;
       }
   }



	printf("%s\n", out);

	return 0;
}
