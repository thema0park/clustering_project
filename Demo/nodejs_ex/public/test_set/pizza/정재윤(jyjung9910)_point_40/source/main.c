#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

long long int gcd(long long int a,long long int b)
{
    if(a<b)
    {
        long long int temp;
        temp = a;
        a=b;
        b=temp;
    }
    if(a%b==0)
    {
        return b;
    }
    long long int c;
    c=a%b;
    return gcd(b,c);


}

int main()
{
	int piece_num;
	long long int input_data[PIECE_NUM_MAX];
    int checking[PIECE_NUM_MAX];
	int i;
    int j;
	long long int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
    {
		scanf("%lld", &input_data[i]);
        checking[i]=0;
    }

	////////////////////////////////////////
    for(i=0;i<piece_num-1;++i)
    {
        for(j=i+1;j<piece_num;++j)
        {
            if(gcd(input_data[i],input_data[j])>1)
            {
                checking[i]++;
                checking[j]++;
            }
        }
    }
    for(i=0;i<piece_num;++i)
    {
        if(checking[i]==0)
        {
            output=input_data[i];
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}