//조재현(whwogus)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K; //일 월 연도뒤두자리 연도앞두자리
	int h;
    int ok, oj;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    //k/4
    ok = (K/4)/1;
    oj = (J/4)/1;

    h = (q + ((m+1)*26)/10 + K + ok + oj + 5*J) % 7;



	////////////////////////////////////////

	printf("%s\n", week[h]);
    //printf("Wednesday\n");
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D1i_D1i_D1s
D1s_D1s_D1s_D1s_D1s_D1s_D2_D1
_E_F3_D1i_B/_D1i_B/_A_D1i_B/_
1i_B/_A_D1i_B+_D1i_B*_D1i_B/_
+_B+_B+_B+_D1i_B*_B+_D1i_B%_A
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
