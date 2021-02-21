#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define TEXT_MAX 100

int fibo(int n);
int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    if(fibo_n<1||fibo_n>30)
        return 0;
    if(text=="")
        return 0;
    int j;
    int flag=0;
    for(j=0;j<strlen(text);j++){
        if(text[j]>=65&&text[j]<=90){
            continue;
        }else{
            flag=1;
        }
    }
    if(flag==1)
        return 0;
    //A=65 Z=90
	////////////////////////////////////////
    int num=fibo(fibo_n);
    num=num%27;

    int i;
    for(i=0;i<strlen(text);i++){
        text[i]=text[i]+num; 
        if(text[i]>90){
            text[i]=text[i]-26; 
        }
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

int fibo(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
