#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int n);

int main()
{
    int k, i;
	int fibo_n;
	char text[TEXT_MAX];
    int len = 0;
    while(text[len]!=0)
        len++;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    k = fibo(fibo_n);
    for(i = 0; i < len+2; i++)
    {
      text[i] += k;
    
     if(text[i] > 'Z')
     {
       text[i] -= 26;
     }
   }
   printf("%s\n", text);
	return 0;
}
int fibo(int n)
{
    if(n == 2 || n == 1)
    return 1;

    return fibo(n-1)+fibo(n-2);
}