#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TEXT_MAX 100


int main()
{
	int fibo_n;
	char textt[TEXT_MAX];
    int fibo[30];
    int i,temp;
    fibo[1] = 1;
    fibo[2] = 1;
    int length=0;
    i=0;
    
	scanf("%d", &fibo_n);
	scanf("%s", textt);

	////////////////////////////////////////
    while(textt[i]!=NULL){
        length++;
        i++;
    }

    for(i=3; i<=fibo_n; i++){
            fibo[i] = fibo[i-1]+fibo[i-2];
        }

    temp = fibo[fibo_n];
    
    for(i = 0; i<length; i++){
        textt[i] = textt[i] + temp;
        if(textt[i]>'Z'){
            textt[i] = textt[i] - 26;
        }

    }
	////////////////////////////////////////

	printf("%s\n", textt);
	return 0;
}
