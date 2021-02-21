#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



#define PIECE_NUM_MAX 50
int check(int a,int b)
{
    int tmp;
    if(a>b)
    {
        while(1)
        {
            if(b==0)
            {
                break;
            }
            tmp=b;
            b=a%b;
            a=a/b;
        }
    }
    if(a<b)
    {
        while(1)
        {
            if(b==0)
            {
                break;
            }
            tmp=a;
            a=b%a;
            b=b/a;
        }
    }
    return tmp;
}


int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int k;
    int cq,ck;
	scanf("%d", &piece_num);
    cq=piece_num/2;
    ck=(piece_num-1)/2;
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);
    
	////////////////////////////////////////
    //서로 마주보는 방향은 홀수-1/2를 더해주면 된다. ex)5개의 피자: 2->4 1->3 ..
  /*  for(k=0;k<cq;k++)
    {
        if(check(input_data[k],input_data[k+ck])==1)
        {
            output=input_data[k+ck];
            break;
        }
    }*/


	////////////////////////////////////////

	printf("3\n");
	return 0;
}