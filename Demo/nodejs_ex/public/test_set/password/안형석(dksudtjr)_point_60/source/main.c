#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int n)
{
    if (n==0) return 1;
    else if (n==1) return 1;
    else return fibo(n-1)+fibo(n-2);
}

int main()
{
    
	int fibo_n;
	char text[TEXT_MAX];
    int tmp=0;
    int i=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_n= fibo_n - 1;
    tmp=fibo(fibo_n);
    //printf("%d",tmp);
    
    for(i;text[i]!='\0';i++)
    {
        if ('A'<= text[i]+tmp && text[i]+tmp <='Z')
        {
            text[i]= text[i]+tmp;
        }
        
        else 
        {
            //text[i]='A'+(((text[i]+tmp)%'Z')%26)-1;
            //text[i]='A'+(tmp%27)-2;
            text[i]='A'+((text[i]+tmp)%'A')%26;
            //text[i]='A'+(text[i]+tmp)%26;
            //tmp=tmp%26;
            //text[i]='A'+(text[i]+tmp)%'A';

        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;

    /* // 65 ~ 90
    char a;
    a='Z';
    printf("\n%d\n",a);
    */

}