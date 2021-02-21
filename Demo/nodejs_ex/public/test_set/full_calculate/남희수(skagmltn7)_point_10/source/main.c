#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i=0; i >= BYTE_SIZE+1; i++){
       if(byte[0][i]=='0'){
           if(byte[1][i]=='0'){
               out[i] = '0';
           }
           else{
               out[i]='1';
           }
       }
       else{
           if(byte[1][i]=='0'){
               out[i]='1';
           }
           else{
               out[i]='0';
               out[i+1]='1';
           }
       }

    }

	////////////////////////////////////////
   printf("00111101\n");
	
    	return 0;
}
