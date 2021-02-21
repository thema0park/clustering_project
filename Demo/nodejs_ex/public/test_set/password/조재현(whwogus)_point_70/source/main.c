#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX] = { 0 }; //최대 99글자 A는 65 Z는 90
    int fn[32] = { 0 }; 
    int i,j,k; int count = 0;
	scanf("%d", &fibo_n);
    if (fibo_n>30 || fibo_n <1) printf("error\n");
	scanf("%s", text);

    

	////////////////////////////////////////
    //피보나치 만들기
    fn[1] = 1; fn[2] = 1;
    for (i=3;i<32;i++)
    {
        fn[i] = fn[i-1] + fn[i-2];
    }

    for (i=0;i<100;i++)
    {
        if (text[i] == 0) break;
        text[i] = text[i] + fn[fibo_n];
        count += 1;
        
    }
    for (i=0;i<100;i++)
    {
        while(1){
            if (text[i]>=65 && text[i]<=90) break;
            text[i] = text[i] - 26;
        }
    }
    /*
    for (i=0;i<100;i++)
    {
        if (strlen(text)<i)
        {
            text[i] = NULL;
        }
    }
    */



	////////////////////////////////////////
    for (i=0;i<count;i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
	return 0;
}