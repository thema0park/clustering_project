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
    for(i=0; i<BYTE_SIZE+1; i++){
        out[i]= byte[0][i]+ byte[1][i];
        if(out[i]>=2){
            out[i]-=2;
            out[i+1] +=1;
        }
    }


	////////////////////////////////////////

    printf("%s", out);
	

	return 0;
}
