#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define TEXT_MAX 100

int fibo(int n){
    if (n==1) {return 1;}
    else if (n==2) {return 1;}
    else {return (fibo(n-1) + fibo(n-2));}
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int add = 0;

	scanf("%d", &fibo_n);
	scanf("%s", text);
    add = fibo(fibo_n);

    int i=0;
    while(text[i]!='\0'){
        if(text[i]-'0'+ add > 42) text[i] = text[i]-'0'-28;
        text[i] = (text[i] - '0' + add) + '0';
        //if((text[i] - '0' + add) > 42) {
        //   text[i] = (text[i] -'0'- 28) + '0';}
        i++;
    }

	printf("%s\n", text);
	return 0;
}