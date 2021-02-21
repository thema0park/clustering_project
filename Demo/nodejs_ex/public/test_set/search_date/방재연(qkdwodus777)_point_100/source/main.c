#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int x = 0;
    int y = 1;
    int i ;
    int fibo = 0;
    for(i = 0; i < fibo_n; i++ ) {
        if(i == 0) fibo = 0;
        else {
            fibo = x + y;
            x = y;
            y = fibo;
        }
    }
    if(fibo_n < 3) fibo = 1;

    while(fibo > 'Z' - 'A' + 1) {
        fibo = fibo - ('Z' - 'A' + 1);
    }
   

    for(i = 0 ; i < TEXT_MAX ; i++) {
        if('A' <=text[i] && text[i] <= 'Z') {
            text[i] = text[i] + fibo;
           if ('Z' < text[i])
     
               text[i] = text[i] - ('Z' - 'A' + 1);
            
        }
    }
    


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}