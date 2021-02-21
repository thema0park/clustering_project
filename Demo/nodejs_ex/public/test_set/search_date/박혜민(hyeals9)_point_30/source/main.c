#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int fibo_result=0;
    int len=0;
    int i=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);

    len=strlen(text);
    fibo_result=fibo(fibo_n);

    for(i=0;i<len;i++)
    {
        text[i]+=fibo_result;
         
         if(text[i]>'Z')
            {
                while(!(text[i]>='A'&&text[i]<='Z'))
                    {
                        text[i]-=26;
                    }
            }
    }
	printf("%s\n", text);
	return 0;
}