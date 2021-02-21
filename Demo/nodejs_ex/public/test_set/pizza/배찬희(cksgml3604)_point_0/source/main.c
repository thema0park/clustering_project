#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int fun (int a, int b){
    int tmp;
    while(b == 0){
        tmp =b;
        b=a%b;
        a=tmp;
    }
    return a;
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j;
	//int output;
    int a;

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    for (i=0;i<piece_num;i++){
        for (j=i+1;j<(piece_num);j++){
            a = fun(input_data[i],input_data[j]);
            if (a>1){
                input_data[i] = 0;
                input_data[j] = 0;
                i +=1;
                j +=i+1;
            }
        }
    }
    for (i=0;i<piece_num;i++){
        if (input_data[i] != 0){
            printf("%d\n",input_data[i]);
        }
    }
	return 0;
}