#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n,fibo1=1,fibo2=1,ans,i;
	char text[TEXT_MAX];

    scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    for(i=2;i<fibo_n;i++)
    {
        ans=fibo1+fibo2;
        fibo1=fibo2;
        fibo2=ans;
    }
    for(i=0;i<100;i++)
    {
        if((fibo_n==1)||(fibo_n==2))
        {
            if(text[i]+1=='Z')
            {
                text[i]='A';
            }
            else
            {
               text[i]=text[i]+1;
            }
        }
        else
        {
            if(text[i]+ans>'Z')
            {
                text[i]=text[i]+ans-26;
            }
            else
            {
                text[i]=text[i]+ans;
            }
        }
        if(text[i]==NULL)
        {
            break;
        }
    }
    printf("%s\n",text);
	////////////////////////////////////////
	return 0;
}