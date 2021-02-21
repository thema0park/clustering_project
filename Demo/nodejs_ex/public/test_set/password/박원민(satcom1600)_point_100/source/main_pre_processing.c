//박원민(satcom1600)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
#define ALPHA 'Z' - 'A' + 1

int main()
{
	int fibo_n;
    int i, fibo_pre, fibo_cur, fibo_nex, temp;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_n--;
    fibo_cur = 1;
    fibo_pre = 0;
    for(i = 0; i < fibo_n; i++) {
        fibo_nex = fibo_cur + fibo_pre;
        fibo_pre = fibo_cur;
        fibo_cur = fibo_nex;
    }

    i = 0;
    while(text[i]) {
        temp = text[i] + fibo_cur;
        while(temp > 'Z') {
            temp -= ALPHA;
        }
        text[i] = temp;
        i++;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_D1i_A_D1i_A_D1i_A_B<_B+_A_A_
_C_FOR_D1i_A_B+_A_D1c_B>_D1c_
1c_B-_D1i_B+_A_C_W_A_C_W_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
