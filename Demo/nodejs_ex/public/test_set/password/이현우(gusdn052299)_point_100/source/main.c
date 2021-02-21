#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1 || n==2) {return 1;}
    else if(n>2) {return fibo(n-1)+fibo(n-2);}
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int k;
    for(k=0; text[k]!='\0'; k++)
    {
        text[k]+=fibo(fibo_n)%26;
        if(text[k]>90)
        {
            text[k]=text[k]-26;
        }
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}
