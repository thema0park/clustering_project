#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int GCD(int a, int b){
    int tmp;
    if (a%b==0) return b;
    return GCD(b,a%b);
}

int main()
{
    
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
	int output;
    int pivot = 0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    
    for(i=0; i<piece_num-1; i++){
        for (j = i+1; j<piece_num;j++){
          if (GCD(input_data[i],input_data[j])==1){
              output = input_data[i];
              break;
         }
        }
     }
    


	////////////////////////////////////////

	printf("%d\n", output);
   /* int a, b;
    scanf("%d %d", &a,&b);
    printf("%d", GCD(a,b));
    */
   
	return 0;
}