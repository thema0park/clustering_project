#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

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

    int PRIME[50]={0};
    int NON_PRIME[50]={0};
    int PRIME_TABLE[50]={0};
    int j,Pn,NPn;
    for(i=2;i<50;i++)
    {
        if(PRIME_TABLE[i]!=0)
            continue;
        PRIME_TABLE[i]=1;
        for(j=i+i;j<50;j+=i)
            PRIME_TABLE[j]=2;
    }
    Pn=NPn=0;
    for(i=0;i<piece_num;i++)
    {
        if(PRIME_TABLE[input_data[i]] == 1)
            PRIME[Pn++] = input_data[i];
        else 
            NON_PRIME[NPn++] = input_data[i];
    }
    int flag;
    int a,b,c;
    output = 0;
    if(Pn>NPn){
        for(i=0;i<Pn;i++)
        {
            flag = 1;
            for(j=0;j<NPn;j++)
            {
                a = PRIME[i];
                b = NON_PRIME[j];
                while(a%b != 0)
                {
                    c = a%b;
                    a = b;
                    b = c;
                }
                if(b != 1)
                    flag = 0;
            }
            if(flag == 1)
                output = PRIME[i];
        }
    }
    else
    {
        for(i=0;i<NPn;i++)
        {
            flag = 1;
            for(j=0;j<Pn;j++)
            {
                a = PRIME[j];
                b = NON_PRIME[i];
                c = 1;
                while(a%b != 0)
                {
                    c = a%b;
                    a = b;
                    b = c;
                }
                //printf("GDB(%d, %d)= %d\n",PRIME[i],NON_PRIME[j],b);
                
                if(b != 1)
                    flag = 0;
            }
            if(flag == 1)
                output = NON_PRIME[i];
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}