//김수아(sua99831)_point_90
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	 h = (q + (((m+1)*26)/10) + K + K/4 + J/4 + 5*J) % 7;
     if(h==1) printf("Sunday\n");
     else if (h==2) printf("Monday\"n");
     else if (h==3) printf("Tuesday\n");
     else if (h==4) printf("Wednesday\n");
     else if (h==5) printf("Thursday\n");
     else if (h==6) printf("Friday\n");
     else if (h==7) printf("Saturday\n");

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2char_T2_D1i_D
i_D1s_D1s_D1s_D1s_D1s_D1s_D1s
D2_D1s_E_F3_D1i_B+_D1i_B*_D1i
B/_B+_B+_D1i_B/_B+_D1i_B/_B+_
1i_B*_B+_D1i_B%_A_D1i_B==_D1s
E_F3_D1i_B==_D1s_E_F3_D1i_B==
D1s_E_F3_D1i_B==_D1s_E_F3_D1i
B==_D1s_E_F3_D1i_B==_D1s_E_F3
D1i_B==_D1s_E_F3_L1_L1_L1_L1_
1_L1_L1_D1i_R_C_F1_1_
###############################*/
//$//
