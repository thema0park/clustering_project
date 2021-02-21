//최순원(wony6731)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10

char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

void calculate(int q, int m, int J, int K);

// year : JK
int main()
{
	int q, m, J, K;
	int h;

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    calculate(q, m, J, K);
	////////////////////////////////////////

	return 0;
}

void calculate(int q, int m, int J, int K)
{
    int a, b, c, h;
    
    a = ((m+1)*26)/10;
    b = K/4;
    c = J/4;
    h = (q + a + K + b + c + 5*J) % 7;

    printf("%s\n", week[h]);

    return;
}/*########code signature#########
2char_T2_D1i_D1i_D1s_D1s_D1s_
1s_D1s_D1s_D1s_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D2_P2_L2void_T2_F2_D2_L2in
_T2_F2_D2_L2int_T2_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_D1s_E_F3_E_F3_D1i_R
C_F1_L2int_T2_D2_L2int_T2_D2_
2int_T2_D2_L2int_T2_D2_P2_L2v
id_T2_F2_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D2_L2int_T2_D2
D1i_B+_D1i_B*_D1i_B/_A_D1i_B/
A_D1i_B/_A_B+_B+_B+_B+_D1i_B*
B+_D1i_B%_A_D1s_E_F3_R_C_F1_1

###############################*/
//$//
