#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50
int gcd(int a,int b){
    int big,small;
    int i=0;
    int tmp=0;
    big = a;
    small =b;
    if(b>a) {big = b; small =a;}
    for(i=1;i<small;i++){
    if(big%i==0) tmp = i; 
    }
    return tmp;

}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);
int half;
	for (i = 0; i < piece_num; i++){
		scanf("%d", &input_data[i]);
      //  printf("%d",input_data[i]);
    }
    half = piece_num/2;
  //  printf("%d\n",half);
  //      printf("input %d\n",input_data[i]);
        printf("%d\n",input_data[half+1]);
        
        //if(input_data[i] == 0) printf("11\n");
          //      if(input_data[i] == 32524) printf("3\n");
	////////////////////////////////////////



	////////////////////////////////////////

	//printf("%d\n", output);
	return 0;
}