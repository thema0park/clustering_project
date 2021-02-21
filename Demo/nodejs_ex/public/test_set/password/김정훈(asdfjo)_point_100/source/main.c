#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  /A = 65 Z = 90

#define TEXT_MAX 100

int fibo(int fibn);

int main()
{
	int fibo_n;
    int fibor;
	char text[TEXT_MAX] = { 0 } ;
    int i;
    i = 0;

	scanf("%d", &fibo_n);
    fibor = fibo(fibo_n);

	scanf("%s", text);
    for(i = 0; i < TEXT_MAX ; i ++)
    {
        if(text[i] == '\0')
        break;
        
        if(((int)text[i]+ fibor%26) >90)
        text[i] = text[i] -( 26- fibor %26);
       else if (text[i] <= 90)
        text[i] = text[i] + fibor %26;
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n",text);
	return 0;
}

int fibo(int fibn)
{
    if (fibn == 0)
    return 0;

    else if(fibn== 1)  
    return 1;

    else
    return fibo(fibn - 1) + fibo(fibn - 2);
}