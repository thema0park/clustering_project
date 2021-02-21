#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int farr[30] = {0, };


int fibo(int n){
    if(farr[n] != 0){
        return farr[n];
    }else{
        if(n == 1 || n == 2){
            farr[n] = 1;
            return 1;
        }else{
            farr[n] = fibo(n-1)+fibo(n-2);
            return farr[n];
        }
    }
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    int i;
    
    for(i = 0; i<strlen(text); i++){
        int cnt = 0;
        cnt = fibo(fibo_n)/26;
        text[i] = text[i] + fibo(fibo_n) - 26*cnt;
        if(text[i] > 90){
            text[i] -= 26;
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}