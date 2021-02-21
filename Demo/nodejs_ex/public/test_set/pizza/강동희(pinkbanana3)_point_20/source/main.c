#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int g(int a,int b){
    int tmp; int i; int c=0;
    if(b>a){
        tmp =a;
        a=b;
        b=tmp;
    }
    for(i=b;i>0;i--){
        if(a%b==0){
            c=i;
            break;
        }
    }
    return c;
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
    int input[PIECE_NUM_MAX];
	int i,j,c;
	int output=0; int br=0;
	scanf("%d", &piece_num);
    c=piece_num/2;
	for (i = 0; i < piece_num; i++) scanf("%d", &input_data[i]);
	////////////////////////////////////////
    for(i=0;i<piece_num;i++){
        int a=0;
        for(j=0;j<piece_num;j++){
          if(j!=i) {
              input[a]=input_data[j];
              a++;
          }
        }
        for(j=0;j<c;j++){
            if(g(input[j],input[j+c])<=1) {br=-1; break;}
            else br=0;
        }
        if(br==0){
            output=input_data[i];
            break;
        }
    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}