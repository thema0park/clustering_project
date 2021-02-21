#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}


int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int inc;
    int k;
    int len;
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    inc=fibo(fibo_n);
    len=strlen(text);

    if(len>100)
    {
        return -1;
    }
    for(k=0;k<len;k++)
    {
        if('Z'<text[k]||'A'>text[k])
        {
            return -1;
        }
    }

    for(k=0;k<len;k++)
    {
        text[k]+=inc;
        if(text[k]>'Z')
        {
            text[k]=text[k]-1+'A'-'Z';
        }
    }
    if(text[0]==NULL)
    {
        return 0;
    }
	////////////////////////////////////////
    if(fibo_n<1||fibo_n>30)
    {
        return -1;
    }

	printf("%s\n", text);
	return 0;
}