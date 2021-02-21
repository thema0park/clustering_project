#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50
int gcd(int a, int b)
{
 
    int d;
    if(a>b)
    {
        if(b>a)
        {
            d=a;
            a=b;
            b=d;
            
        }
           int c=a%b;
    if(c==0) return c;
    a=b;
    b=c;
    return gcd(a,b);
    }
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int x;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

      
    for(i=0; i<(piece_num+1)/2-1; i++)
    {
        
        x= gcd(input_data[i],input_data[(piece_num+1)/2+i]);
        printf("%d",x);

        if(x==1)
        {
            x= gcd(input_data[i],input_data[(piece_num+1)/2+i-1]);

            output=input_data[i];

        }

    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}