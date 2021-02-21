#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fib(int num);

int main()
{
	int fibo_n, num=0;
    int i, len;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    num = fib(fibo_n) % 26;
    len=strlen(text);

    for(i=0; i<len;i++){
        text[i] = text[i]+num;
        
        if(text[i]>'Z') text[i] = text[i]-26;
    }



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

int fib(int num){
    if(num<=2) return 1;
    else return fib(num-1) + fib(num-2);
}