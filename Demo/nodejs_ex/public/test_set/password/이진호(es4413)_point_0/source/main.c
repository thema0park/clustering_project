#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fibo(int n);

int main()
{
	int fibo_n;
    int i;
	char text[TEXT_MAX];
    int t=0;

    char *ptrtext = text;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    
    t = fibo(fibo_n);
    
	////////////////////////////////////////
    for(i = 0; i < strlen(text);i++)
    {
        text[i] = text[i] + t;
        if (text[i]>'Z') text[i] - 26;
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

int fibo(int n)
{
    fibo(1) == 1; fibo(2) == 1;

    return fibo(n-1)+ fibo(n-2);
}