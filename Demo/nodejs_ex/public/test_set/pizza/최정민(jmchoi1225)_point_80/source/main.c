#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a, int b);

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int a,b;
    int flag;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	///////////////////////////////////////
    a = 0;
    b = (piece_num/2)+1;
    if (gcd(input_data[0],input_data[piece_num/2])==1){//remove pizza from <=pizza_num/2
        flag = 1;
    }else{//remove pizza from >pizza_num/2
        a=1;
        flag = 2;
    }

    if(gcd(input_data[0],input_data[piece_num/2])!=1 && gcd(input_data[0],input_data[piece_num/2+1])!=1){
        if (gcd(input_data[1],input_data[piece_num/2+1])==1){//remove pizza from <=pizza_num/2
            a=2;
            b = (piece_num/2)+2;
            flag = 1;
        }else{//remove pizza from >pizza_num/2
            a=2;
            b = (piece_num/2)+2;
            flag = 2;
    }
    }

    while(1){
        if(gcd(input_data[a], input_data[b])==1){
            if(flag ==1){
                output = input_data[a];
            }
            if(flag ==2){
                output = input_data[b];
            }
            break;
        }
        a+=1;
        b+=1;
    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}

int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b,a%b);
}
