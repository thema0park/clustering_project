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
    int len=0;
    len=strlen(text);

    int f1=1,f2=0,fn=0;
    
    int Test=fibo_n;
    while(Test--)
    {
        fn=f1+f2;
        f2=f1;
        f1=fn;
    }
    //f2가 내가 원하는 피보나치 수
    int arr[TEXT_MAX]={0};
    int i=0,god=0;
    for(i=0;i<len;i++)
    {
        god=text[i]+f2;
        while(1)
        {
            if(god>90)
            {
                god=god-90;
                god=god+64;
            }
            else
                break;
        }
        arr[i]=god;
    }
    int j=0;
    for(j=0;j<len;j++)
    {
        printf("%c",(char)arr[j]);
    }
    printf("\n");


	////////////////////////////////////////



	////////////////////////////////////////

	return 0;
}