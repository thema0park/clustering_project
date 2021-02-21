#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a, int b){
    return a%b ? gcd(b, a%b) : b ;
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

    for(i=0;i<piece_num;i++){
        int j;
        int flg = 1;
        for(j=0;j<piece_num;j++){
            if(j==i) continue;
            int cur;
            if(j<i && i<=j+piece_num/2){
                cur = j+piece_num/2+1;
            }else{
                cur = j+piece_num/2;
            }
            if(cur >= piece_num) continue;
            if(gcd(input_data[j], input_data[cur])<=1){
                flg = 0;
                break;
            }
        }
        if(flg){
            output = input_data[i];
            break;
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}