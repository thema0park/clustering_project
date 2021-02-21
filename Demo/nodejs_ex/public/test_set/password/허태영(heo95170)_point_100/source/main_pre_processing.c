//허태영(heo95170)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100

int main()
{
	int fibo_n;
    int fibo_num;
    int i, j;
    int first = 0;
    int mid = 1;
    int last = 1;
    int length;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    length = strlen(text);

	////////////////////////////////////////
    for(i = 0; i < fibo_n; i++) {
        last = first + mid;     
        mid = first;            
        first = last;         
    }

    fibo_num = last;
    fibo_num = fibo_num % 26;

    for(i = 0; i < length; i++) {
        text[i] = text[i] + fibo_num;
        if(text[i] > 'Z') {
            text[i] = text[i] - 26;
        }
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
2_L2char_T2_D1i_D2_D1s_E_F3_D
s_E_F3_E_F3_A_D1i_A_B<_B+_A_A
A_C_FOR_A_D1i_B%_A_D1i_A_B<_B
_A_D1c_B>_D1i_B-_A_C_L1_C_FOR
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
