#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100
int fibo(int a){
    if(a==1){
        return 1;
    }
    else if (a==2){
        return 1;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }

}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    
	scanf("%d", &fibo_n);
	scanf("%s", text);


	////////////////////////////////////////
    int i=0;
    for(i;text[i] != NULL ;i++){
        if(text[i]+fibo(fibo_n) > 90){
            text[i]=(text[i]+fibo(fibo_n))%90+64;
            if(text[i]>90){
                text[i] = text[i]%90+64;
                if(text[i]>90){
                     text[i] = text[i]%90+64;
                }
            }
        }
        else{
            text[i]=text[i]+fibo(fibo_n);
        }

    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}