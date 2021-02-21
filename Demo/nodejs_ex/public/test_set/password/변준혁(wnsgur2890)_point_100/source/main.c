#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i;
    int add = 1, realadd = 0, len = 0;
    int a=1, b=1, c=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);
    len = strlen(text);

    for(i=1; i<fibo_n-1; i++){
        if(fibo_n==1) break;
        if(fibo_n==2) break;
        if(fibo_n>2)
        {
            c = a + b;
            a = b;
            b = c;
            add = c;
        }
    }
    realadd = add % 26;

	////////////////////////////////////////
    for(i=0; i<len; i++){     // A = 65, Z = 90
        text[i] = text[i] + realadd;
        if(text[i] > 90) text[i] = text[i] - 26;
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}