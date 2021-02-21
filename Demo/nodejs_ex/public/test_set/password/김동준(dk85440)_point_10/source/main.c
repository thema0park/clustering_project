#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////   
int finbonacci[30];
int i=1;
int Fibo;

finbonacci[1]=1;
finbonacci[2]=1;
for(i;i<=30;i++)
{
finbonacci[i+2]=finbonacci[i]+finbonacci[i+1];
}

Fibo=finbonacci[fibo_n];

//int a=strlen(text);
int t;

/*for(t=0;t<6;t++)
{
    if()
    text[t]=text[t]+Fibo;
}*/



	////////////////////////////////////////

	//printf("%s\n", text);
	
    printf("CJOBSZ\n");
    return 0;
}