#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int fibo[TEXT_MAX];
    int i;
    int len = strlen(text);
    fibo[0] = 1;
    fibo[1] = 1;
    for(i=0;i<fibo_n;i++)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    for(i=0;i<len;i++)
    {
        if(text[i]+fibo[fibo_n]>'Z')
        {
            text[i]= text[i]-'A'+fibo[fibo_n];
        }
        else text[i] += fibo[fibo_n];
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}