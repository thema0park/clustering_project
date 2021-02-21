#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int f)
{
    if (f < 2) { return 1; }

    return fibo(f - 1) + fibo(f - 2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    int n = fibo(fibo_n - 1);

    n %= 26;

    int index = 0;

    while (text[index] != '\0')
    {
        text[index] += n;

        if (text[index] > 'Z')
        {
            text[index] -= 26;
        }

        if (text[index] < 'A')
        {
            text[index] += 26;
        }

        ++index;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}