#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define TEXT_MAX 100
int fibo2(int n){
    if(n==1)
    return 1;
    else if(n==2)
    return 1;
    else if(n>2)
    return fibo2(n-1)+fibo2(n-2);


}


int main()
{   int len;
	int fibo_n;
	char text[TEXT_MAX];
    int a,b,x;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    char y;
    a = fibo2(fibo_n);
    len = strlen(text);
    if(len <=99){
        if('A'<= text||text <='Z'){
        for(x=0; x<len; x++){
            
           y =(text[x]+=a);
                if(y>'Z'){
                    text[x] ='A'+ (y-'Z'-1);
                }

        
            

            }
        }
    }
	printf("%s\n", text);
	return 0;
}