#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 1;
    }
    else if(n==3)
    {
        return 2;
    }

    return fibo(n-1)+fibo(n-2);
}




int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    int fibo_result=fibo(fibo_n);

    int i=0;

    for(i=0;i<strlen(text);i++)
    {
        text[i]+=fibo_result;
        if(text[i]>'Z')
        {
            text[i]=text[i]-'Z'+fibo_result;
        }
    }

    

    

	////////////////////////////////////////

    



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}