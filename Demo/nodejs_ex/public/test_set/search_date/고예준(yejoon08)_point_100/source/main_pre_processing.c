//고예준(yejoon08)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;
    int a1=0;
    int a2=0;
    int a3=0;
	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    a1=(int)((m+1)*26/10);
    a2=(int)(K/4);
    a3=(int)(J/4);
    h=q+a1+K+a2+a3+5*J;
    h=h%7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2char_T2_D1i_D1i_D1s_D1s_D
s_D1s_D1s_D1s_D1s_D2_D1s_E_F3
L2int_T2_D1i_B+_D1i_B*_D1i_B/
A_L2int_T2_D1i_B/_A_L2int_T2_
1i_B/_A_B+_B+_B+_B+_D1i_B*_B+
A_D1i_B%_A_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
