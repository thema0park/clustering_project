#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

long long fib(int a){
    long long fn, fn1, fn2, tmp;
    int i;
    fn=0;
    fn1=0; 
    fn2=1;
    for(i=0;i<a-1;i++){
        tmp=fn1;
        fn1 = fn2;
        fn = tmp;
        fn2 = fn1 + fn;
    }
    return fn2;
}

int main()
{
	int fibo_n, i;
	char text[TEXT_MAX]={0};
    long long a;

	scanf("%d\n", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    a=fib(fibo_n)%26;
    for(i=0;i<TEXT_MAX;i++){
        if(text[i]<='Z' && text[i]>='A'){
            text[i]=text[i]+a;
            if(text[i]>'Z'){
                text[i]=text[i]-26;
            }
        }

    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}