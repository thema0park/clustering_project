//장은학(showri0108)_point_20
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
    int i;
    int n=0;
    int k=0;
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input); // 입력 영어 알파벳 대문자 50자
    // B가 하나,둘 일때는 그냥 출력 알파벳 말고 딴거 입력하면 오류처리
    len = strlen(input);

    for(i = 0; i < 51; i++)
    {
        if(!('A' <= input[i] && 'Z' >= input[i]))
            k++;
            break;
    }

    encoded_len = strlen(output);

    if(k != 0)
        printf("Input Error\n");
    //else
        //printf("%d\n%d\n", n,k);
	    //printf("%s\n", input);
        //printf("%s\n", output);
        //printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
char_T2_D1i_D2_L2char_T2_D1i_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_D1s_E_F3_E_F3_A_D
i_A_D1i_B<_D1c_B<=_D1c_B>=_B&
_L1_C_FOR_E_F3_A_D1i_B!=_D1s_
_F3_L1_D1i_R_C_F1_1_
###############################*/
//$//
