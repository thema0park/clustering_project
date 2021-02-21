#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}*/

//피보나치 함수
int fibo(int N)
{
    if(N==0)
    return 0;

    else if(N==1)
    return 1;

    else
    return fibo(N-1)+fibo(N-2);
}

int main()
{
    int i;
    char text[100];
    int fibo_n;

    scanf("%d", &fibo_n);
	scanf("%s", text);

    for(i=0; i<strlen(text); i++)
    {
        text[i]+=fibo(fibo_n);
        if(text[i]>'Z')
            text[i]-= 26;
    }

    printf("%s\n", text);




    return 0;
}

/*int main()
{

    int fibo_n, an;
    scanf("%d",&fibo_n);

    an=fibo(fibo_n);

    printf("%d", an);
}*/