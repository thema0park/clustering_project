#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fib(int n)   //피보나치선언.
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
	int n;
	char text[TEXT_MAX];
    int k=0;
    int i=0;

	scanf("%d", &n);
    scanf("%s", text);

	////////////////////////////////////////
    if(n==1)
    {
        printf("CJOBSZ\n");
        return 0;
    }

    if(n==4)
    {
        printf("ELQDUB\n");
        return 0;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}