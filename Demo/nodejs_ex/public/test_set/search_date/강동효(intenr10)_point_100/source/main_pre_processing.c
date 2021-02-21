//강동효(intenr10)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q = 0;
    int m = 0;
    int J = 0;
    int K = 0;
	int h = 0;
    int i = 0;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    if(K == 00)
    {
      K == 0;
    }
    h = (q + (((m+1)*26)/10) + K + (K/4) + (J/4)+ (5*J))%7;
   for(i = 0; i<=WEEK_DAYS; i++)
   {
       if(h == i)
       {
           printf("%s\n", week[h]);
       }
   }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2char_T2
D1i_D1i_D1s_D1s_D1s_D1s_D1s_D
s_D1s_D2_D1s_E_F3_D1i_B==_D1i
B==_C_L1_D1i_B+_D1i_B*_D1i_B/
B+_B+_D1i_B/_B+_D1i_B/_B+_D1i
B*_B+_D1i_B%_A_D1i_A_D1i_B<=_
==_D1s_E_F3_C_L1_C_FOR_D1i_R_
_F1_1_
###############################*/
//$//
