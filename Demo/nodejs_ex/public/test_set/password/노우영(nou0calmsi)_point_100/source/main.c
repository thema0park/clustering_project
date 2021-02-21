#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define TEXT_MAX 100
int dp[31]={0};
int fib(int n){
    if(n==1){
        return dp[n]=1;
    }
    else if(n==2){
        return dp[n]=1;
    }
    else if(dp[n]>0) return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
	int fibo_n, len, plus,i=0,u;
	char text[TEXT_MAX];
    char change[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	scanf("%d", &fibo_n);
    plus=fib(fibo_n);
	scanf("%s", text);
    len=strlen(text);
    for(i=0;i<len;i++){
        u=(text[i]-'A'+plus)%26;
        text[i]=change[u];
    }
    printf("%s\n", text);
	return 0;
}