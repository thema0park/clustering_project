#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
int mem[1001];
int f(int n)
{
    if(mem[n])
        return mem[n];
    if(n <= 2)
        return 1;
    else return (mem[n] = (f(n-2) + f(n -1))  % 26);
}


int main()
{
	int fibo_n;
	char text[TEXT_MAX],temp;
    int fibo_res,i,j,k;
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_res = f(fibo_n);
    for(i = 0;text[i]!='\0';i++)
    {
         if(text[i] >= 'A' && text[i] <= 'Z')
         {
             text[i]+= fibo_res;
             if(text[i] > 'Z')
                text[i] -= 26;
         }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}