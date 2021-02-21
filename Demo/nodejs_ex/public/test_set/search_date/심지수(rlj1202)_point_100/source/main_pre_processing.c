//심지수(rlj1202)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////

    h = 0;

    h += q;
    h += (int) ((float) (m + 1) * 2.6);
    h += K;
    h += (int) ((float) K / 4.0);
    h += (int) ((float) J / 4.0);
    h += 5 * J;
    h %= 7;

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2char_T2_D1i_D
i_D1s_D1s_D1s_D1s_D1s_D1s_D1s
D2_D1s_E_F3_D1i_A_A_L2int_T2_
2float_T2_D1i_B+_D1d_B*_A_A_L
int_T2_L2float_T2_D1d_B/_A_L2
nt_T2_L2float_T2_D1d_B/_A_D1i
B*_A_D1i_A_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
