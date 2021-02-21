//문지영(koo0524)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
int i =0;
i = (m+1)*26/10;
int j=0;
j=K/4; int k=0; k=J/4;
h=(q+i+K+j+k+(5*J) )%7;



	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2char_T2_D1i_D
i_D1s_D1s_D1s_D1s_D1s_D1s_D1s
D2_D1s_E_F3_L2int_T2_D1i_D2_D
i_B+_D1i_B*_D1i_B/_A_L2int_T2
D1i_D2_D1i_B/_A_L2int_T2_D1i_
2_D1i_B/_A_B+_B+_B+_B+_D1i_B*
B+_D1i_B%_A_D1s_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
