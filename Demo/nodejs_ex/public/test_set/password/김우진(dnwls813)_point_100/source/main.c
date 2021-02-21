#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

long long fibo(int num)
{
    int i=0;
    long long num1=1,num2=1,num3=0;
    if(num==1)
    {
        return num1;
    }
    else if(num==2)
    {
        return num2;
    }
    else if(num>2)
    {
        for(i=2;i<num;i++)
        {
            num3=num1+num2;
            num1=num2;
            num2=num3;
        }
        return num3;
    }
}

int main(void)
{
    int i=0,len=0,num=0;
    long long fibo_num=0;
    char str[100]={0};
    scanf("%d",&num);
    scanf("%s",str);
    fibo_num=fibo(num);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        str[i]+=(fibo_num%26);
        if(str[i]>'Z')
        {
         str[i]-=26;
        }
    }
    printf("%s\n",str);
    return 0;
}