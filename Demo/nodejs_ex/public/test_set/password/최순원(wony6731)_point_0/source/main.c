#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo_function(int num);

int answer = 0;
int flag = 0;

int main()
{
	int fibo_n;
    int abc;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
//	scanf("%s", text);

	////////////////////////////////////////

    abc = fibo_function(fibo_n);
    printf("abc : %d\n", abc);



	////////////////////////////////////////

//	printf("%s\n", text);
	return 0;
}

int fibo_function(int num)
{
    flag++;
    if(num == 1)
    {
        answer = answer + 1;
        return answer;
    }
    else if(num == 2)
    {
        answer = answer + 1;
        return answer;
    }
    else
    {
        if(flag == 1)
            return answer;
        return answer = fibo_function(num-1) + fibo_function(num-2);
    }
}