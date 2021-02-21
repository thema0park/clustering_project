#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

long long fibo(int i);

int main()
{
	int fibo_n;
	char text[TEXT_MAX], i;
    long long plus;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    plus = fibo(fibo_n);
    while(plus > 26) {
        plus = plus % 26;
    }
    for(i = 0; i < strlen(text); i++) {
        text[i] += plus;
        while(text[i] > 'Z') {
            text[i] -= 26;
        }
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

long long fibo(int i) {
    if(i==1) return 1;
    else if(i == 2) return 1;
    else return fibo(i-1) + fibo(i-2);
}