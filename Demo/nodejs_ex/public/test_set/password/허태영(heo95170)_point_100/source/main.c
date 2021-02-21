#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define TEXT_MAX 100

int main()
{
	int fibo_n;
    int fibo_num;
    int i, j;
    int first = 0;
    int mid = 1;
    int last = 1;
    int length;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    length = strlen(text);

	////////////////////////////////////////
    for(i = 0; i < fibo_n; i++) {
        last = first + mid;     
        mid = first;            
        first = last;         
    }

    fibo_num = last;
    fibo_num = fibo_num % 26;

    for(i = 0; i < length; i++) {
        text[i] = text[i] + fibo_num;
        if(text[i] > 'Z') {
            text[i] = text[i] - 26;
        }
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}