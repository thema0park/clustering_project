#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
    int k;
    int count=0;
    int count_1=0;
	int output;
    int big=0;
    int tmp[PIECE_NUM_MAX]={0,};
    int temp=0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        if(input_data[i]>2)
        {
             for(k=2;k<input_data[i];k++)
           {
                 if(input_data[i]%k==0)
                   {
                    
                     count++;
                   
                 }
               
            }
              if(count==0)
             {
                 {
                       tmp[count_1]=input_data[i];
                       count_1++;
                    
                  }
                
            }
        count=0;
        }
       
    }
    big=tmp[0];
    
    for(k=0;k<count_1;k++)
    {
        if(big<tmp[k])
        {
            big=tmp[k];
        }
    }
    printf("%d\n",big);
	return 0;
}