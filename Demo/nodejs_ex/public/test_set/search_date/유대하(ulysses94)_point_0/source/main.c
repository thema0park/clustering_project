#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define TEXT_MAX 100

int fibo(int n) {
    if (n <= 1) return 1;
    else return fibo(n-2) + fibo(n-1);
}

int main()
{
	int fibo_n;
    int i = 0, j = 0;
    int sum = 0;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    
    for (i = 0; i < 100; i++) {
        sum = fibo(fibo_n - 1) + text[i];
        if ((sum >= 65 && sum <= 90) || (sum >= 97 && sum <=122)) {
        text[i] = sum;
        }
        else {
            sum = sum - 35;
            text[i] = sum;
        }
        printf("%c", text[i]);
    }

    for (i = 0; i < 100; i++) {
        if (text[i] == NULL) break;
        printf("%d\t", text);
    }
	////////////////////////////////////////

	return 0;
}