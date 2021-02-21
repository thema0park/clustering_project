#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define TEXT_MAX 100

int main()
{
    int i,j;
	int fibo_n;
    int fibo[31]={0},len;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
	////////////////////////////////////////
    len=strlen(text);
    fibo[0]=1;
    fibo[1]=1;
    for(i=2;i<30;i++)
        fibo[i]=fibo[i-2]+fibo[i-1];
    for(i=0;i<len;i++){
        if(text[i]+fibo[fibo_n-1]>'Z'){
            for(j=0;j<fibo[fibo_n-1];j++){
                if(text[i]+1>'Z')
                text[i]='A'-1;
                text[i]++;
            }
        }
        else
        text[i]+=fibo[fibo_n-1];
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}