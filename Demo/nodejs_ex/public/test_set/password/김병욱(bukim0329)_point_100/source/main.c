#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

long long fibo(int num){
    long long answer = 0;
    int i;
    long long tmp1 = 1;
    long long tmp2 = 1;
    if(num == 1 || num == 2){
        answer = 1;
    }
    for(i = 0; i < num - 2; i++){
        answer = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = answer;
    }
    return answer;
}
int main()
{
	int fibo_n, i;
    long long num;
	char text[TEXT_MAX];
    int text_len;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    text_len = strlen(text);
	////////////////////////////////////////
    num = fibo(fibo_n);
    for(i = 0; i < text_len; i++){
        text[i] += num % 26;
        if(text[i] > 'Z'){
            text[i] = text[i] - 'Z' + 'A' - 1;
        }
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}