#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n, fibonacci[30] = {0}, i, j,len = 0,n=0;
	char text[TEXT_MAX];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    for(i = 0; i < fibo_n; i++){
        fibonacci [i+2] = fibonacci[i] + fibonacci[i+1];
    }
    if(fibonacci[fibo_n-1] > 26){
        while(fibonacci[fibo_n - 1] > 26){
            fibonacci[fibo_n -1 ] -= 26;
        }
    }
    while(text[n] != '\0'){            // input 길이 구하기
        n++;
        len++;
    }
    for(j = 0; j < len; j++){
        text[j] += fibonacci[fibo_n - 1];
        if(text[j] > 'Z')
            text[j] -= 26;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}