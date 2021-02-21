//김우진(dnwls813)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, i;
    int sum1[3]={0},sum2[3]={0},sum3=0,sum4=0,cnt=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (i = 0; i < MABANGJIN_SIZE; i++)
	{
		for (k = 0; k < MABANGJIN_SIZE; k++)
		{
            scanf("%d", &mabangjin[i][k]);
        }
	}
    for (i = 0; i < MABANGJIN_SIZE; i++)
	{
		for(k=0;k<MABANGJIN_SIZE;k++)
        {
            sum1[i]+=mabangjin[i][k];
        }
	}
    for(k=0;k<MABANGJIN_SIZE;k++)
    {
        for(i=0;i<MABANGJIN_SIZE;i++)
            sum2[k]+=mabangjin[i][k];
    }
    sum3=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum4=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
    if(sum1[0]==sum1[1])
    cnt++;
    if(sum1[0]==sum1[2])
    cnt++;
    if(sum1[0]==sum1[1])
    cnt++;
    if(sum2[0]==sum2[1])
    cnt++;
    if(sum2[0]==sum2[2])
    cnt++;
    if(sum1[0]==sum2[0])
    cnt++;
    if(sum1[0]==sum3)
    cnt++;
    if(sum3==sum4)
    cnt++;
    if(cnt==8)
        answer='O';
    else
        answer='X';
	printf("%c\n",answer);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D1i_D2_L2c
ar_T2_D2_D1i_A_D1i_B<_D1i_A_D
i_B<_D1s_E_F3_C_FOR_C_FOR_D1i
A_D1i_B<_D1i_A_D1i_B<_A_C_FOR
C_FOR_D1i_A_D1i_B<_D1i_A_D1i_
<_A_FOR_C_FOR_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_B==
L1_D1i_D1i_B==_L1_D1i_D1i_B==
L1_D1i_D1i_B==_L1_D1i_D1i_B==
L1_D1i_D1i_B==_L1_D1i_B==_L1_
==_L1_D1i_B==_D1c_A_D1c_A_L1_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
