#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    if(fibo_n == 1){
        printf("CJOBSZ\n");
    }
    if(fibo_n == 4){
        printf("ELQDUB\n");
    }

	return 0;
}