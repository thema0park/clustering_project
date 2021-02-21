#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define TEXT_MAX 100
int fibo(int a) {
    if(a == 1 || a == 2) {
        return 1;
    }

    int fn1, fn2 = 1;
    int fi;
    int i;
    for(i = 0; i < a - 1; i++) {
        fi = fn1 + fn2;
        fn1 = fn2;
        fn2 = fi;
    }
    return fi;

}


int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i = 0;
    int len;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_n = fibo(fibo_n);
    fibo_n = fibo_n % 26;
    len = strlen(text);

    for(i = 0; i < len; i++) {
        text[i] += fibo_n;
        while(text[i] >= 91) {
            text[i] -= 26;
        }
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}