#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int mabang[3][3];
    int i=0,j=0;
    int sum[8];
    int f=0;

    for(i=0;i<3;i++)
    {
        
        scanf("%d %d %d",&mabang[i][0],&mabang[i][1],&mabang[i][2]);
    }
    
    for(i=0;i<3;i++)
    {
        sum[i]=mabang[i][0]+mabang[i][1]+mabang[i][2];
        sum[i+3]=mabang[0][i]+mabang[1][i]+mabang[2][i];
    }
    //67
    
    sum[6]=mabang[0][0]+mabang[1][1]+mabang[2][2];
    sum[7]=mabang[0][2]+mabang[1][1]+mabang[2][0];
    
    for(i=0;i<7;i++)
    {
        if(sum[i]==sum[i+1])
        {
            f++;
        }
    }
    if(f==7)
    {
        printf("O\n");
    }else
    {
        printf("X\n");
    }





	return 0;
}
