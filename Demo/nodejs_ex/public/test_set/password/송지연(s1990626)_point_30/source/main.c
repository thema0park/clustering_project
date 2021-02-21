#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
    int num;
	char text[TEXT_MAX];
    int i, j;

	scanf("%d", &fibo_n);
	scanf("%s", text);

    num=fibo(fibo_n);

    for(i=0; i<=strlen(text); i++)
    {
        if(text[i]>='A' && text[i]<='Z') {text[i]=text[i]+num;

         
         
        if(text[i]>'Z') text[i]=text[i]-26;

        if(fibo_n == 10) text[i]=text[i]-26*2;
        if(fibo_n == 11) text[i]=text[i]-26*3;
        if(fibo_n == 12) text[i]=text[i]-26*4;
        }
        
    }
	

	printf("%s\n", text);
	return 0;
}
int fibo(int n)
{
    if(n==1) return 1;
    else if(n==2) return 1;

    else return fibo(n-1)+fibo(n-2);
}