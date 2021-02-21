//구영석(dudtjr9)_point_60
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	double h1;
    int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    h1 =  q + (double) (m+1)*26.0/10.0 + K + (double) K/4.0 + (double) J/4.0 + 5.0*J;
    h = (int) h1 % 7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2double_T2_D2_L2int_T2_D2_
2char_T2_D1i_D1i_D1s_D1s_D1s_
1s_D1s_D1s_D1s_D2_D1s_E_F3_L2
ouble_T2_D1i_B+_D1d_B*_D1d_B/
B+_B+_L2double_T2_D1d_B/_B+_L
double_T2_D1d_B/_B+_D1d_B*_B+
A_L2int_T2_D1i_B%_A_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
