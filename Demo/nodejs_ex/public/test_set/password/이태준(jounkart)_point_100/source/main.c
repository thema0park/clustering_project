#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define TEXT_MAX 100


int main()
{
	int n;
	char text[TEXT_MAX];
    int i,len;
    int f1=1, f2=1,temp;

	scanf("%d", &n);

   
	scanf("%s", text);
    if(n==1)
    {
        f1=1;
    }
    else
    {
         for(i=2; i<=n;i++)
        {
          temp=f2;
          f2=f1+f2;
          f1=temp;
         }
    }
   

    len=strlen(text);
    for(i=0;i<=len;i++)
    { 
        if('A'<=text[i] && text[i]<='Z')    
        {
              text[i]+=f1%26;
              if(text[i]>'Z')
                  text[i]-=26;
              
               
        }
        if('a'<=text[i]&& text[i]<='z')
        {
            text[i]+=f1%26;
            if(text[i]>'z')
               text[i]-=26;
            
        }

       
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}