#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n,result=0;
    int i,j,len;
	char text[TEXT_MAX];
    int fibo[100]={0};
    int fib;
    int k;

	scanf("%d", &fibo_n);
	scanf("%s", text);
	////////////////////////////////////////
    fibo[1]=1;
    fibo[2]=1;
    if(fibo_n==1||fibo_n==2)
    {
        result=1;
    }
    else
    {
        for(i=3;i<=fibo_n;i++)
        {
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
        result=fibo[fibo_n];
    }

    len=strlen(text);

    //printf("%d",'A');
    if(result>26)
    {
        result=result%26;
    }

    for(i=0;i<len;i++)
    {
        if(text[i]>='A'&&text[i]<='Z')
        {
            text[i]=text[i]+result;
            if(text[i]>'Z')
            {
                text[i]=text[i]-26;
            }
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}