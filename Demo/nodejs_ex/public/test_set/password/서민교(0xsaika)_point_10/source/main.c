#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int n = 0;

int fibo(int num){
        if(num == 0) return 0;
        else if(num == 1) return 1;
        else return fibo(num-1) + fibo(num-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX] = {0,};

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int a,i,j = 0;
    a = fibo(fibo_n);
    
    for (i=0; i<TEXT_MAX; i++){
        int sex = 0x61;
        if(text[i] == 0){
            break;
        }
        if(text[i] + a > 90){
            text[i] = sex + ((text[i]) - 90);
        }else{
            text[i] = text[i] + a;
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}