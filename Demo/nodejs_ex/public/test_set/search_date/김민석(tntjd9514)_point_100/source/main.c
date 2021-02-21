#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int q, m, J, K;
	int h;

	scanf("%d %d %d %d", &q, &m, &K, &J);

    float b,bb,KK,JJ;
    int KKK,JJJ,bbb;
    b = ((m+1)*26)/10;

    bb = (float)b - (int)b;

    bbb = b - bb;
    KK = (float)(K/4)-(int)(K/4);
    KKK = (K/4) - (KK);
    JJ = (float)(J/4)-(int)(J/4);
    JJJ = (J/4) - (JJ);


    h = q+bbb+K+KKK+JJJ+5*J;

    h = h % 7;

    switch(h){
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
    }

	return 0;
}
