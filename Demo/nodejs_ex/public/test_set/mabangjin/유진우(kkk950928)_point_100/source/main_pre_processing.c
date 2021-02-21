//유진우(kkk950928)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
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
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D1i_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_D1i_A_D1i_B<_D1s_D1i_
1i_D1i_E_F3_C_FOR_D1i_A_D1i_B
_D1i_D1i_B+_D1i_B+_A_D1i_B+_D
i_D1i_B+_D1i_B+_A_C_FOR_D1i_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_A
D1i_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_A_D1i_B<_D1i_B+_B==
C_L1_C_FOR_D1i_B==_D1s_E_F3_C
D1s_E_F3_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
