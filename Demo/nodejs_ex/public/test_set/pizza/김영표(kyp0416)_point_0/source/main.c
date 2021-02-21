#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a, int b){
    int i,j,n = 1,tmp,cnt = 0;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    for(i = 1;i<=b;i++){
        if(a%i == 0 && b%i ==0){
            cnt++;
            n = i;
        }
    }
    if(cnt == 0){return 1;}
    else return n;
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
    int cnt[PIECE_NUM_MAX]= {0,};
	int output;

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);
    
	////////////////////////////////////////

    for(i = 0;i<piece_num;i++){
        for(j = 0;j<piece_num;j++){
            if(!(gcd(input_data[i],input_data[j]) == 1) && i != j){
                cnt[i]++;
                cnt[j]++;
            }
        }
    }
    j = 0;
    for(i = 0;i<piece_num;i++){
        if(j<cnt[i]){
            j = cnt[i];
            output = input_data[i];
        }
    }
    
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}