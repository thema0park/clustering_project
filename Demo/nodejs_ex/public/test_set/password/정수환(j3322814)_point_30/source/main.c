#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
#define ENGSIZE 26

int f(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return f(n-1)+f(n-2);
    }
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i;
    int temp;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    for (i=0;text[i]!='\0';i++)
    {
        temp = text[i];
        if (temp + f(fibo_n)>'Z')
        {
            temp-=ENGSIZE;
        }
        text[i]=temp + f(fibo_n);
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}