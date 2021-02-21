#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
#define ALPHA 'Z' - 'A' + 1

int main()
{
	int fibo_n;
    int i, fibo_pre, fibo_cur, fibo_nex, temp;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_n--;
    fibo_cur = 1;
    fibo_pre = 0;
    for(i = 0; i < fibo_n; i++) {
        fibo_nex = fibo_cur + fibo_pre;
        fibo_pre = fibo_cur;
        fibo_cur = fibo_nex;
    }

    i = 0;
    while(text[i]) {
        temp = text[i] + fibo_cur;
        while(temp > 'Z') {
            temp -= ALPHA;
        }
        text[i] = temp;
        i++;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}