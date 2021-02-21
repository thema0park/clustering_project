#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TEXT_MAX 100
#define DP_SIZE 32
#define ALPA_SIZE 26

int fibonacci(int n, int dp[]){
    if(n == 1 || n == 2) return 1;
    if(dp[n]) return dp[n];

    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

int main()
{
	int fibo_n, i;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int dp[DP_SIZE] = {0,};
    int plus_num = fibonacci(fibo_n, dp);
    plus_num %= ALPA_SIZE;

    for(i = 0; i < strlen(text); i++){
        text[i] = (text[i] + plus_num);
        if(text[i]  > 'Z'){
            text[i] -= ALPA_SIZE;
        }
    }
    
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}