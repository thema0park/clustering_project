#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int i;
    int len = strlen(text);

    int a = 1;
    int b = 1;
    while (--fibo_n) {
        int c = a + b;
        a = b;
        b = c;
    }

    int add = a;

    for (i = 0; i < len; i++) {
        int offset = text[i] - 'A';
        offset += add;
        offset %= 'Z' - 'A' + 1;
        text[i] = 'A' + offset;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}