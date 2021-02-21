//정의찬(dmlcks5791)_point_100
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a, int b)
{
    int ret;

    if(b == 0)
        return a;
    ret = gcd(b, a % b);
    return ret;
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j;
	int output;
    int jump;
    int cur, next;
    int flag;
	scanf(" %d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf(" %d", &input_data[i]);

	////////////////////////////////////////
    jump = piece_num / 2;

    for(i = 0; i < piece_num; i++)
    {
        flag = 1;
        for(j = 1; j < jump && flag; j++)
        {
            cur = (i + j) % piece_num;
            next = (cur + jump) % piece_num;
            if(gcd(input_data[cur], input_data[next]) == 1)
                flag = 0;
        }
        if(flag)
        {
            output = input_data[i];
            break;
        }
    }
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_D1i_B=
_R_L1_B%_E_F3_A_R_C_F1_L2int_
2_F2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D2_L2int_T2_D2
D1s_E_F3_D1i_A_B<_D1s_E_F3_FO
_D1i_B/_A_D1i_A_B<_D1i_A_D1i_
_B<_B&&_B+_B%_A_B+_B%_A_E_F3_
1i_B==_D1i_A_L1_C_FOR_A_C_L1_
_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
