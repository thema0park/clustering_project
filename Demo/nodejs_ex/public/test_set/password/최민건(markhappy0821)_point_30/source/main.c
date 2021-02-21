#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define TEXT_MAX 100
int fibo (int fibo_n) {
    if(fibo_n == 0 || fibo_n == 1) {
        return fibo_n;
    }
    return (fibo(fibo_n-1)+fibo(fibo_n-2));
}

int main()
{
	int fibo_n = 0;
    int i = 0;
    int number = 0;
    int temp = 0;
	char text[TEXT_MAX] = {0, };

	scanf("%d", &fibo_n);
	scanf("%s", text);
    number = fibo(fibo_n);
	for(i = 0; i < strlen(text); i++) {
        
        if (text[i]+number >'Z') {
         text[i] = (text[i] + number-90)+64;

        }
        else {
        text[i] = text[i]+number;
        }
    }

	printf("%s\n", text);
	return 0;
}