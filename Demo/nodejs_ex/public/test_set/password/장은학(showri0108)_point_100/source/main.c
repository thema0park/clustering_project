#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define TEXT_MAX 100

int fibo_n(int n)
{

        int first = 1;
        int second = 1;
        int i,temp;
        if(n == 1 || n == 2)
            return 1;
        else if(n >= 3)
        {
            for(i = 2; i <= n; i++)
            {
                temp = first;
                first = first + second;
                second = temp;
            }
        return temp;
        }
        
        //if(n == 1 || n == 2)
        //  return 1;
        //else
        //   return fibo_n(n-1) + fibo_n(n-2);
}

int main()
{
	char text[TEXT_MAX];
    int k;
    int n;
    int i; 

	scanf("%d", &n);
	scanf("%s", text);

	k = fibo_n(n);

    for(i = 0; i < 100; i++)
    {  
        if(k > 25)
           k = k%26;
        if('A'<= text[i] && 'Z' >= text[i])
        {
            text[i] = text[i] + k;
            //if(k > 25)
            //k -= 26;
            if('Z' < text[i]) 
                text[i] -= 26;
        }
    }
// 52 더하면 제자리

    //printf("%d\n", k); // 피보나치 수
	printf("%s\n", text);
	return 0;
}