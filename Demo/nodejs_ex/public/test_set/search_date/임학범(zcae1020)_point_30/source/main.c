#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
	////////////////////////////////////////
    int fibon=fibo(fibo_n);
    int i=0;
    int len=0;
    while(1)
    {
        if(text[i]=='\0')
        {
            break;
        }
        len++;
        i++;
    }
    for(i=0;i<len;i++)
    {
        if(text[i]+fibon>'Z')
        {
            text[i]=text[i]+fibon-'Z'+'A'-1;
            continue;
        }
        text[i]=text[i]+fibon;
    }



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}