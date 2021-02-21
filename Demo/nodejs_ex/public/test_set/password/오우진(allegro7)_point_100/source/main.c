#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
int fibonacci(int n){
    if( n == 0 || n == 1)
        return 1;
    return fibonacci(n-2) + fibonacci(n-1);
}
char alpha['Z'-'A'] = {0,};
char pick(int n, char k){
    int i;
    for( i = 0; i < n; i++){
        k++;
        if(k > 'Z')
            k = 'A';
    }
    return k;
}
int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int c,i;
    int k = 0;
    int size = 'A'-'Z';
    for(i = 0; i < size; i++){
        alpha[i] = 'A' + i;
    }
	scanf("%d", &fibo_n);
	scanf("%s", text);
    c = fibonacci(fibo_n-1);
	////////////////////////////////////////
    for(i = 0; i < strlen(text); i++){
        text[i] = pick(c, text[i]);
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}