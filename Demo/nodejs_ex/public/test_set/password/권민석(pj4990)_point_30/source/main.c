#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define TEXT_MAX 100

int fib(int n){
    if (n==0 || n==1){

        return 1;
    }
    else {

        return fib(n-1)+fib(n-2);
    }


}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
    int a=0;
	////////////////////////////////////////
    a=fib(fibo_n-1); //혹시모름;
    int i;
    int len=strlen(text);
    for (i=0;i<len;i++){
        text[i]=text[i]+a;
        if (text[i]>'Z'){
            text[i]=text[i]-('Z'-'A'+1);
        }

    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}
