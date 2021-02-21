//주병진(jbj3992)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h1,h;
    int M1,M2;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////

    M1= (m+1)*26;
    M2= M1/10;

    h1= q+ M2+K+ (K/4) +(J/4) + 5*J;

    h= h1%7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2char_T2
D1i_D1i_D1s_D1s_D1s_D1s_D1s_D
s_D1s_D2_D1s_E_F3_D1i_B+_D1i_
*_A_D1i_B/_A_B+_B+_D1i_B/_B+_
1i_B/_B+_D1i_B*_B+_A_D1i_B%_A
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
