#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{

    
	char a[MAX_LEN];
	char b[MAX_LEN];

    int d[51] = {0};
    char dd[51] = {0};

	scanf("%s", a);

	printf("%s\n", a);

    int c= strlen(a);

    printf("%d%c\n",c,a[0]);

    float o = (float)c / 3.000000;

    printf("%f(%d/3)\n",o,c);
}
