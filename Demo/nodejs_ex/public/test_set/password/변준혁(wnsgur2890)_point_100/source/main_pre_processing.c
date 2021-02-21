//변준혁(wnsgur2890)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i;
    int add = 1, realadd = 0, len = 0;
    int a=1, b=1, c=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);
    len = strlen(text);

    for(i=1; i<fibo_n-1; i++){
        if(fibo_n==1) break;
        if(fibo_n==2) break;
        if(fibo_n>2)
        {
            c = a + b;
            a = b;
            b = c;
            add = c;
        }
    }
    realadd = add % 26;

	////////////////////////////////////////
    for(i=0; i<len; i++){     // A = 65, Z = 90
        text[i] = text[i] + realadd;
        if(text[i] > 90) text[i] = text[i] - 26;
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D2_L2in
_T2_D1i_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_D1s_E_F3_D1s_E_F3_E_F3_A_D1i
A_D1i_B-_B<_D1i_B==_L1_D1i_B=
_L1_D1i_B>_B+_A_A_A_A_C_L1_C_
OR_D1i_B%_A_D1i_A_B<_B+_A_D1i
B>_D1i_B-_A_L1_C_FOR_D1s_E_F3
D1i_R_C_F1_1_
###############################*/
//$//
