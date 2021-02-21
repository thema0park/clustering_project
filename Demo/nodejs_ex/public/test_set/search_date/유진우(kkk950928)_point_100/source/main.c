#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

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
int main()
{
    int n1;
    int n;
    int i=0;
    char input[99];
  
   scanf("%d",&n1);
   scanf("%s",input);
   n=fibo(n1);


  while(input[i] != '\0')
  {
      
      
      if(input[i]+n>90)
      {
         // input[i]=input[i]+n;
         n=n%26;
         input[i]=input[i]+n;
          while(1)
          {
              
              if(input[i]<='Z' && input[i]>='A' )
              {
                  break;
              }
              input[i]-=26;
              
              
          }
        
       
      }else
      {

      input[i]=input[i]+n;
      }
      i++;
  }

  printf("%s\n",input);

  
 





	return 0;
}