//변준혁(wnsgur2890)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K; // q:일 m:월 J:연도 앞 두자리 K:연도 마지막 두자리 
	int h;
    float value1=0, value2=0, value3=0;
    int val1=0, val2=0, val3=0;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    value1 = ( (float)((m+1)*26)/10 );
    val1 = (int)value1;
    value2 = (float)K/4;
    val2 = (int)value2;
    value3 = (float)J/4;
    val3 = (int)value3;
    
    h = (q + val1 + K + val2 + val3 + 5*J) % 7;

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2float_T2_D1i_
2_L2float_T2_D1i_D2_L2float_T
_D1i_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2c
ar_T2_D1i_D1i_D1s_D1s_D1s_D1s
D1s_D1s_D1s_D2_D1s_E_F3_L2flo
t_T2_D1i_B+_D1i_B*_D1i_B/_A_L
int_T2_A_L2float_T2_D1i_B/_A_
2int_T2_A_L2float_T2_D1i_B/_A
L2int_T2_A_B+_B+_B+_B+_D1i_B*
B+_D1i_B%_A_D1s_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
