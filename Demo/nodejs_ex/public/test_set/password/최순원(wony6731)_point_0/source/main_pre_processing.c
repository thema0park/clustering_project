//최순원(wony6731)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo_function(int num);

int answer = 0;
int flag = 0;

int main()
{
	int fibo_n;
    int abc;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
//	scanf("%s", text);

	////////////////////////////////////////

    abc = fibo_function(fibo_n);
    printf("abc : %d\n", abc);



	////////////////////////////////////////

//	printf("%s\n", text);
	return 0;
}

int fibo_function(int num)
{
    flag++;
    if(num == 1)
    {
        answer = answer + 1;
        return answer;
    }
    else if(num == 2)
    {
        answer = answer + 1;
        return answer;
    }
    else
    {
        if(flag == 1)
            return answer;
        return answer = fibo_function(num-1) + fibo_function(num-2);
    }
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_F2_D2_L2int_T2_D2_L
int_T2_D2_L2char_T2_D1i_D2_D1
_E_F3_E_F3_A_D1s_E_F3_D1i_R_C
F1_L2int_T2_D2_P2_L2int_T2_F2
D2_D1i_B==_D1i_B+_A_R_C_D1i_B
=_D1i_B+_A_R_C_D1i_B==_R_L1_D
i_B-_E_F3_D1i_B-_E_F3_B+_A_R_
_L1_L1_C_F1_1_
###############################*/
//$//
