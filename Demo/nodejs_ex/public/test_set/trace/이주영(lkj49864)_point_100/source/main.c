#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
    int B, H, ans;
    double Pi = 3.14;
    scanf("%d %d", &B, &H);
    ans = Pi*(B/2.0)*(B/2.0)*H/3.0/2.0;
    printf("%d\n", ans);
	return 0;
}