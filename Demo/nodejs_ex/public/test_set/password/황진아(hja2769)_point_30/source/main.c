#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int num, num2, i;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    num = fibo(fibo_n);
    num2 = num/26+1;

    for(i = 0; i < strlen(text); i++){
        text[i] = text[i] + num;
        if(text[i]>'Z') text[i] -= 26*num2;
        if(text[i]>'z') text[i] -= 26*num2;
    }



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}