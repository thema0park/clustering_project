//고상원(ko82352)_point_100
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
    h=(((m+1)*26)/10);
    h+=q;
    h+=K;
    h=h+(K/4);
    h=h+(J/4);
    h=h+(5*J);
    h%=7;

	////////////////////////////////////////
	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2char_T2_D1i_D
i_D1s_D1s_D1s_D1s_D1s_D1s_D1s
D2_D1s_E_F3_D1i_B+_D1i_B*_D1i
B/_A_A_A_D1i_B/_B+_A_D1i_B/_B
_A_D1i_B*_B+_A_D1i_A_D1s_E_F3
D1i_R_C_F1_1_
###############################*/
//$//
