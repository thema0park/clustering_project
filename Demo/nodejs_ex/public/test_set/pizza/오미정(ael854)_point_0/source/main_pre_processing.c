//오미정(ael854)_point_0
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int x, int y)
{
    int k;
    if(x%k==0 && y%k==0)
        return k;
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);
    if(piece_num >= 3 && piece_num <= 49 && piece_num%2 == 1)
	{
        for (i = 1; i <= piece_num; i++)
		{
            scanf("%d", &input_data[i]);
           if(gcd(input_data[i], input_data[i+piece_num/2+1])<=1)
            {
              output = input_data[i+piece_num/2+1];
            }
	
    }
	printf("%d\n", output);
    
	return 0;
}
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_B%_D1i
B==_B%_D1i_B==_B&&_R_L1_C_F1_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_D1s_E_F3_D1i_B>=_D1i_B<
_B&&_D1i_B%_D1i_B==_B&&_D1i_A
B<=_D1s_E_F3_D1i_B/_B+_D1i_B+
E_F3_D1i_B<=_D1i_B/_B+_D1i_B+
A_C_L1_C_FOR_D1s_E_F3_D1i_R_C
L1_C_F1_1_
###############################*/
//$//
