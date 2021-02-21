#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100


int fibo(int a){
    if (a == 0) return 0;
    else if (a == 1) return 1;
    else return fibo(a-1) + fibo(a-2);
}

int main()
{
	int fibo_n;
    int num;
    int len;
    int i;
	char text[TEXT_MAX];
    int sub[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    num = fibo(fibo_n);

    len = strlen(text);

    for(i = 0; i < len ; i++){
        sub[i] = text[i];
    }

    for(i = 0; i < len ; i++){
        sub[i] = sub[i] + num;
    }

    for(i = 0; i < len ; i++){
        while(1){
            if(sub[i] > 90) sub[i] = sub[i] - 26;
            else break;
        }
    }

    for(i = 0; i < len; i++){
        text[i] = sub[i];
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}