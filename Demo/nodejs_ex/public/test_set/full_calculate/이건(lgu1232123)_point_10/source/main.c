#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define BYTE_SIZE 8
#define IN_NUM 2


    int main()
{
    srand(time(NULL));

	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int a=2,b;
    long int w,r;
    b = rand()%2 + 1;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////    

	////////////////////////////////////////
    if(b==2)
	printf("%s\n",byte[1] );
    else if(b==1)
	printf("%s\n",byte[0] );

	//printf("%s\n",out[BYTE_SIZE+1] );

	return 0;
}
