#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fb(int i){

    if(i==1){
        return 1;
    }
    if(i==2){
        return 1;
    }
    return fb(i-1)+fb(i-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
	char res[TEXT_MAX];
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int key;
    // printf("%d\n",fb(fibo_n));
    key=fb(fibo_n);
    key=key%26;
    // printf("%d\n",key);
    int i=0;
    for(i=0;text[i]!='\0';i++){
        text[i]=text[i]+key;
        if(text[i]>90){
            text[i]=text[i]-90+64;
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}