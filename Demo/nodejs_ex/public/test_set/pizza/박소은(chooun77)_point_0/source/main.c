#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a, int b){
    int n;
    for(n=2;n<a||n<b;n++){
        if(a%n==0 && b%n==0){
            return 1;
        }
        else {return 0;}
    }

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
    int k,j;
    for(k=0;k<piece_num;k++){
        

    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}