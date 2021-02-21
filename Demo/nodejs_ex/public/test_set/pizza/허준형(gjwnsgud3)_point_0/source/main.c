#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int GCD(int* arr ,int left, int right);
#define PIECE_NUM_MAX 50

int main()
{   
    int sum = 0;
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);
    int left = 0;
    int right = piece_num;
       int mid = (0 + piece_num)/2;
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0; i<mid; i+=1){
    printf("%d",GCD(input_data, left+i, right-i));
    }
    
    //mid = (left+right)/2;
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}

int GCD(int* arr, int left, int right){
    int temp = 0;
    if(left<right){
    temp = right;
    left = right;
    right = temp;
}
if(arr[right] % arr[left] ==0) return left;
else{

    GCD(arr, right, left%right);

}

}