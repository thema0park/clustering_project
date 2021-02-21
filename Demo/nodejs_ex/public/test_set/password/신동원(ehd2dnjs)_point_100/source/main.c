#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i=2, j=0;
    int fibo[30]={1,1,0,};
    int num;

	scanf("%d", &fibo_n);
	scanf("%s", text);

    for(i;i<30;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    
    num=fibo[fibo_n-1];
    num=num%26;


    for(j;j<strlen(text);j++){
        text[j]=text[j]+num;
        if(text[j]>90){
            text[j]=text[j]-26;
        }
       
    
    }

	printf("%s\n", text);

	return 0;
}