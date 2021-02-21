#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
int fib(int n);
int main()
{
	int fibo_n,i,j;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
    
	////////////////////////////////////////
    j=fib(fibo_n);
    j=j%26;
    for(i=0;text[i]!='\0';i++)
    {
        if((text[i]+j)>'Z')
        text[i]=text[i]-26+j;
        else
        text[i]+=j;
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}
int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}