#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14

double get(int b, int h);

int main()
{
	int B, H;
	double out;

	scanf("%d %d", &B, &H);

	////////////////////////////////////////

    out = get(B, H);

	////////////////////////////////////////

	printf("%d\n", (int)out);

	return 0;
}

double get(int b, int h) {
    return 0.5 * PI * pow(b / 2.0, 2) * h * (1.0 / 3.0); 
}