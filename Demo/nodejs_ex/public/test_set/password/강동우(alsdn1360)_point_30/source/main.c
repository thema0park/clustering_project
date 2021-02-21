#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int a=1, b=1;
    int c=0;
    int i;
    int len;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    if (fibo_n <1 && fibo_n >30)
    {
        return 0;
    }

    for (i=2;i<fibo_n;i++)
    {
        c = a+b;
        a=b;
        b=c;
    }

    if(fibo_n == 1)
    {
        c=1;
    }
    if(fibo_n == 2)
    {
        c=1;
    }

    len = strlen(text);

    if(len == 0) return 0;
    
    for(i=0;i<len;i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] += c % 25;
            if(text[i] > 'Z')
            {
                text[i] -= 26;
            }
        }
    }


	////////////////////////////////////////

	printf("%s\n", text);

	return 0;
}