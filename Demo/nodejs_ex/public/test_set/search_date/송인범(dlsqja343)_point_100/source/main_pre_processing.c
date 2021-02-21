//송인범(dlsqja343)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;//일,월,연도 두자리,연도의 앞 두자리
	int h;
    int result1,result2,result3;
	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    
    
	////////////////////////////////////////
    result1=(((m+1)*26)/10);
    result2=(K/4);
    result3=(J/4);
    h=(q+result1+K+result2+result3+5*J)%7;
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
*_D1i_B/_A_D1i_B/_A_D1i_B/_A_
+_B+_B+_B+_D1i_B*_B+_D1i_B%_A
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
