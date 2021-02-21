#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i=0,k=0;
    int len=0;
    int long long f0=1; 
    int long long f1=1;
    int long long f2=0;
    int mod=0;
	scanf("%d", &fibo_n);
    scanf("%s",text);
    
    if(fibo_n<2){
        f2=1;
    }
    else if(fibo_n>=2){
        for(i=0;i<fibo_n-2;i++){
            f2=f0+f1;
            f0=f1;
            f1=f2;
        }
    }

    len=strlen(text);
    
	////////////////////////////////////////
    for(i=0;i<len;i++){
        if(text[i]>='A' && text[i]<='Z'){
            mod=f2%26;
            text[i]=text[i]+mod;
            if(text[i]>'Z'){
                text[i]=text[i]-26;
            }
        }
    }
	////////////////////////////////////////
   printf("%s\n",text);
	return 0;
}
