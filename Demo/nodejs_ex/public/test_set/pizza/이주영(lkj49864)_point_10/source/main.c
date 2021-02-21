#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PIECE_NUM_MAX 50
int GCD(int a, int b);
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j, a=0;
	int output;
    int n1, n2;
	scanf("%d", &piece_num);
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);
    for(i=0; i < piece_num; i++){
        for(j=0; j<piece_num; j++){
            n1=j+i;
            n2=j+i+(piece_num/2);
            if(n1>(piece_num-1)){
                n1 -=piece_num;
            }
            if(n2>(piece_num-1)){
                n2 -=piece_num;
            }
            if(GCD(input_data[n1], input_data[n2])==1){
                a +=1;
                break;
            }
        }
        if(a==1){
            output=input_data[i];
            break;
        }
    }
	printf("%d\n", output);
	return 0;
}
int GCD(int a, int b){
    if(a<=b){
        return a;
    }
    else if(b==0){
        return a;
    }
    else{
        return GCD(b, a%b);
    }
}