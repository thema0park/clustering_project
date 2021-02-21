//주병진(jbj3992)_point_40
#define _CRT_SECURE_NO_WARNINGS
   
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int count=1;
    int k=0;
    int i=0;
    int j=0;

	scanf("%s", input);
    
    for(j=0;j<51;j++)
    {
        if((input[j] >='A' || input[j] <='Z'))
        {
        printf("Input Error\n");
         return 0;
        }
    }

	////////////////////////////////////////
    for(i=0;i<51;i++) // 길이만큼실행
    {
        if(input[i]== input[i+1])
        {
            count=count+1;
        }
        else
        {
            output[k]=count; //숫자대입
            output[k+1]=input[i]; //문자대입
            k=k+2;
            count = 1; //카운팅 초기화.
        }

    }

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_D1s_E_F3_D1i_A_D1i_B<_D1c_B
=_D1c_B<=_B||_D1s_E_F3_D1i_R_
_L1_C_FOR_D1i_A_D1i_B<_D1i_B+
B==_D1i_B+_A_C_A_D1i_B+_A_D1i
B+_A_D1i_A_C_L1_C_FOR_D1s_E_F
_D1s_E_F3_D1s_L2double_T2_B/_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
