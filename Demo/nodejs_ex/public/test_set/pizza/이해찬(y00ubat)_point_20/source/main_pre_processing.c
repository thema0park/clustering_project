//이해찬(y00ubat)_point_20
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a,int b)
{
    int tmp=0;
    if(abs(a) > abs(b))
    {
        if(!(a % b))
            return 1;
        else{
            return 0;
        }
    }
    else{
        if(!(b % a))
            return 1;
        else{
            return 0;
        }

    }
}

int main()
{
	int piece_num=0;
	int input_data[PIECE_NUM_MAX]={0};
	int i=0,j=0;
	int output;
    int *ptr = NULL;
	scanf("%d", &piece_num);
    ptr = (int *)malloc(sizeof(int)*piece_num);
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    for(i=0;i<piece_num;i++)
    {
        for(j=0;j<piece_num;j++)
        {
            if(i == j)
                continue;
             ptr[i] = gcd(input_data[i],input_data[j]);
             if(ptr[i])
                break;
        }
    }

    for(i=0;i<piece_num;i++)
    {
        if(!ptr[i])
            printf("%d\n",input_data[i]);
        
    }

	////////////////////////////////////////



	////////////////////////////////////////

//	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D1i_D2_E_
3_E_F3_B>_B%_D1i_R_D1i_R_C_L1
C_B%_D1i_R_D1i_R_C_L1_C_L1_C_
1_L2int_T2_F2_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D1i_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_L2in
_T2_D2_L2int_T2_P1_D2_D1s_E_F
_L2int_T2_P1_L2int_T2_B*_E_F3
A_D1i_A_B<_D1s_E_F3_FOR_D1i_A
B<_D1i_A_B<_B==_L1_E_F3_A_L1_
_FOR_C_FOR_D1i_A_B<_D1s_E_F3_
1_C_FOR_D1i_R_C_F1_1_
###############################*/
//$//
