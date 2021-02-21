#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a,int b){
    int c;
    while(1){
        c=abs(a-b);
        a=b;
        b=c;
        if(c==0) return a;
    }
    return 0;
}
int prime(int x){
    int i;
    if(x==2) return 1;
    if(x==1 || x%2==0) return 0;
    for(i=3;i*i<=x;i+=2){
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int check[101]={0};
    int j;
    for(i=0;i<piece_num;i++){
        for(j=i+1;j<piece_num;j++){
            if(input_data[i]%input_data[j]==0 || input_data[j]%input_data[i]==0){
                check[input_data[i]]=1;
                check[input_data[j]]=1;
            }
            if(gcd(input_data[i],input_data[j])>1){
                check[input_data[i]]=1;
                check[input_data[j]]=1;
            }
        }
    }

    for(i=0;i<piece_num;i++){
        if(check[input_data[i]]==0){
            output=input_data[i];
            break;
        }
    }
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}