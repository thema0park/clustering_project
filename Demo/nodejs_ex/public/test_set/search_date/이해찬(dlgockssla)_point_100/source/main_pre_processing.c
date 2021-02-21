//이해찬(dlgockssla)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    //q 일
    //m 월
    //K 연도 마지막 두자리
    //J 연도 앞 두자리
    
	////////////////////////////////////////
    int g1 = (m+1)*26/10;
    int g2 = K/4;
    int g3 = J/4;
    h = (q + g1 + K + g2 + g3 + 5*J) % 7;

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2char_T2_D1i_D
i_D1s_D1s_D1s_D1s_D1s_D1s_D1s
D2_D1s_E_F3_L2int_T2_D1i_B+_D
i_B*_D1i_B/_D2_L2int_T2_D1i_B
_D2_L2int_T2_D1i_B/_D2_B+_B+_
+_B+_D1i_B*_B+_D1i_B%_A_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
