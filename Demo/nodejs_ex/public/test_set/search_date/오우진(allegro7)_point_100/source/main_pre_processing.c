//오우진(allegro7)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int gauss(double k){
    return (int)k;
}
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    int m1 = gauss((double)(m+1)*26 / (double)10);
    int m2 = gauss((double)K/(double)4);
    int m3 = gauss((double)J/(double)4);
    h = (q + m1 + K + m2 + m3 + 5*J) % 7;
	////////////////////////////////////////

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2double_T2_D2_P2_L2int_T2_F2_
2_L2int_T2_R_C_F1_L2int_T2_F2
D2_L2int_T2_D2_L2int_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2char_T2_D1i_D1i_D1s_D1s_
1s_D1s_D1s_D1s_D1s_D2_D1s_E_F
_L2int_T2_L2double_T2_D1i_B+_
1i_B*_L2double_T2_D1i_B/_E_F3
D2_L2int_T2_L2double_T2_L2dou
le_T2_D1i_B/_E_F3_D2_L2int_T2
L2double_T2_L2double_T2_D1i_B
_E_F3_D2_B+_B+_B+_B+_D1i_B*_B
_D1i_B%_A_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
