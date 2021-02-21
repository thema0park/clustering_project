#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
int fibo(int n);
int main()
{
	int fibo_n;
    long long result;
    int i,c;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    result=fibo(fibo_n);
    result=result%26; 
  for(i=0;i<strlen(text);i++)
    {
        text[i]=text[i]+result;
        if(text[i]>'Z')
        {
         text[i]=text[i]-26;   
        }
      
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}
int fibo(int n)
{
 
   if(n==1)
   {
       return 1;
   }
   if(n==2)
   {
       return 1;
   }
    return fibo(n-1)+fibo(n-2); 
}
