#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int Fibo(int n)
{
    if(n==1 || n==2)
        return 1;
    return Fibo(n-1)+Fibo(n-2);
}

int main()
{
	int fibo_n,key=0;
    int i,len=0;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    key = Fibo(fibo_n);
    key=key%26;
    len=strlen(text);

    for(i=0;i<len;i++)
    {
        text[i]=text[i]+key;
        if(text[i]>'Z')
        {
            while(1)
            {
                text[i]=text[i]-'Z'+'A'-1;
                if('A'<=text[i] && text[i]<='Z')
                {
                    break;
                }
            }
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}