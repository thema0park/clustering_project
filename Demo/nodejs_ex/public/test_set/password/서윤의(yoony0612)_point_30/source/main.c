#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
    
    int k1 = 1;
    int k2 = 1;

	int n;
	char a[TEXT_MAX];

	scanf("%d", &n);
	scanf("%s", a);

    int i = 0;
    for(i = 0;i<n-2;i++){
        k2 = k2 + k1;
        k1 = k2 - k1;
    }
    
    int j =0;
    for(j = 0;j<strlen(a);j++){
        a[j] = a[j] + k2;
        if(a[j] > 90){
            a[j] = a[j] - 'Z';
            a[j] = 'A' + (a[j]-1);
        }

    }


	printf("%s\n", a);
	return 0;
}