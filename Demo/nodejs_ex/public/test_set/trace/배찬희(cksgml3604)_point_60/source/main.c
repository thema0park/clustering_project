#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    double r;
	scanf("%d %d", &b, &h);

    if ((b > 100) || (b < 1))
        return 0;
    if ((h > 100) || (h < 1))
        return 0;

    r = b/2;
	r =  0.5 * 3.14 * (r * r) * h / 3;
    out = r;
	printf("%d\n", out);

	return 0;
}

//반원뿔
// 0.5(반원뿔) * 3.14(원주율) * 25^2(반지름의 제곱) * 6(원뿔 높이) * 1/3 이므로 부피는 대략 1962 m3 가 될 것이다. 