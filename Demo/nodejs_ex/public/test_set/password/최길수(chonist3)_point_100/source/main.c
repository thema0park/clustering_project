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
    //피보나치수 구하기
    int p2=0,p1=1;
    int fibo,i=0;
    if(fibo_n==1)
    {
        fibo=1;
    }
    else
    {
        for(i=0;i<fibo_n-1;i++)
        {
            fibo=p2+p1;
            p2=p1;
            p1=fibo;
        }
    }
    //////////////////////////////////////////////
    int len;
    i=0;
    while(1)
    {
        if(text[i]=='\0')
        {
            len=i;
            break;
        }
        else if(text[i]>='A' && text[i]<='Z')
        {
            if(text[i] + (fibo%26)>90)
                text[i] = text[i] + (fibo%26)-26;
            else
                text[i] = text[i] + (fibo%26);
        }
        else 
            continue;
        i++;
    }
   // printf("%d %d\n",fibo,fibo%26);
    printf("%s\n", text);
	return 0;
}