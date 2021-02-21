#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n, size;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int fibo1, fibo2, temp;
    fibo1 = fibo2 = 1;
    for(fibo_n -= 2; fibo_n > 0; fibo_n--)
    {
        temp = fibo2;
        fibo2 += fibo1;
        fibo1 = temp;
    }
    size = fibo2 % 26;
    int i;
    for(i = 0; i < strlen(text); i++){
        text[i] += size;
        if(text[i] > 90) text[i] -= 26;
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}