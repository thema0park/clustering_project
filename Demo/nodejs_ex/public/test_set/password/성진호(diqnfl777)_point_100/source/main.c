#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n,i,fibo=1,lfibo=1,temp;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	for (i=2;i<fibo_n;i++){
        temp = fibo;
        fibo = temp + lfibo;
        lfibo = temp;
    }
    
    fibo = fibo%26;

    for(i=0;i<TEXT_MAX;i++){
        if(text[i]=='\0') break;
        if(text[i]>'Z'-fibo){
            text[i]= text[i]+fibo-26;
        }
        else{
            text[i]= text[i]+fibo;
        }
    }

	printf("%s\n", text);
	return 0;
}