#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TEXT_MAX 100

int fibo(int n);

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

    int fibonnaci=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    fibonnaci = fibo(fibo_n);
    int cnt;
    int cnt1;
    int n1;
    int n2=0;
    
    for(n1=0; n1<strlen(text);n1++)
    {
        cnt = fibonnaci % 26;

        if(text[n1]+cnt<=122)
        {
            text[n1] = text[n1]+cnt;
            if(text[n1]+cnt>122)
            text[n1]=text[n1]-(26-cnt);
        }
        else if(text[n1]+cnt>122)
        text[n1]=text[n1]-(26-cnt);
    }
	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}

int fibo(int n)
{
    if(n<=1)
    return 1;
    if(n==2)
    return 1;
    if(n>2)
    return fibo(n-2)+fibo(n-1);
}