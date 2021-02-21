#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define BYTE_SIZE 8
#define IN_NUM 2



int D2B(int n){
    
}


int main()
{
	char byte[IN_NUM][BYTE_SIZE];
	int out[BYTE_SIZE];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i;
    int num1=0;
    int num2=0;
    for(i=7;i>=0;i--){
        num1=num1 + (byte[0][i]=='1'?1:0)*pow(2.0,7-i);   
    }
    for(i=7;i>=0;i--){
        num2=num2 + (byte[1][i]=='1'?1:0)*pow(2.0,7-i);
    }

    int num=num1+num2;
    int a;
    int b=0;
    for(i=0;i<8;i++){
        a=num%2;
        num=num/2;
        out[i]=a;
    }


	////////////////////////////////////////
    for(i=7;i>=0;i--){
        printf("%d",out[i]);
    }
    printf("\n");
	

	return 0;
}
