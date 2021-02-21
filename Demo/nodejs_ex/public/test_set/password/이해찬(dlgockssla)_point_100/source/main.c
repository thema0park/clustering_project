#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i=0;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    int len = strlen(text);
	////////////////////////////////////////
    int result = fib(fibo_n);
    for(i=0; i<len; i++){
        text[i] = (text[i] + result - 'A') % ('z'-'a'+1) +'A';
        // if((text[i] + result) > 'Z')
        //     text[i] = text[i] + result -('z'-'a' + 1);
        // else
        //     text[i] = text[i] + result;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}