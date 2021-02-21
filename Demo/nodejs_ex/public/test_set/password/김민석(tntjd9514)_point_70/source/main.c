#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fibo(int n){
    if (n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int aa,i;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	aa = fibo(fibo_n);

    for(i=0; i<strlen(text); i++){
        text[i] = text[i] + aa;
        while(!(text[i]<=90 && text[i]>=65)){
            text[i] = text[i] - 26;
        }
    }
    printf("%s\n", text);
    
	return 0;
}