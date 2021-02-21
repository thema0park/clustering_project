#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
    int i, len;
    int a;
	int fibo_n;
	char text[TEXT_MAX];
    char store[TEXT_MAX];
    int Fibonacci[100];

	scanf("%d", &fibo_n);
    if (fibo_n<1 || fibo_n>30)
    {
        return 0;
    }
	scanf("%s", text);

    len = strlen(text);
    if (len > 99 || len ==0) return 0;

    for (i=0 ; i<len ;i++)
    {
        if (text[i]<'A' || text[i]>'Z') return 0;
    }

    Fibonacci[0] = 1;
    Fibonacci[1] = 1;

    for (i=2 ; i<100 ; i++)
    {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    for (i=0 ; i<30 ; i++)
    {
        if (Fibonacci[i] > 26) 
        {
            a= Fibonacci[i]/26;
            Fibonacci[i] = Fibonacci[i] -26*a;
        }
    }

    for (i=0 ; i<len ; i++)
    {
        store[i] = text[i] + Fibonacci[fibo_n-1];

        if (store[i] > 'Z')
        {
            store[i] = store[i] + 'A' - 'Z' -1;
        }
    }

	

	printf("%s\n", store);
	return 0;
}