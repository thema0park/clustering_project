//송선우(gbe0808)_point_50
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN] = {0};
	char output[MAX_LEN] = {0};
	int len, num, encoded_len = 0;
    int i = 0; // 포문 돌리기
    char compare;
	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);
    for(i = 0; i < len; i++) {
        if(input[i] <= 64 || input[i] >= 91) {
            printf("Input Error\n");
            return 0;
        }
    } // 대문자 검사

    printf("%s\n", input);

    compare = input[0];
    num++;
    for(i = 1; i <= len; i++) {
        if(compare == input[i]) {
            num++;
        }
        else if(compare != input[i]) {
            printf("%d%c", num, compare);
            if(num >= 10) encoded_len++;
            compare = input[i];
            num = 1;
            encoded_len += 2;
        }

    }	
    
    
    ////////////////////////////////////////

	printf("\n");

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_D2_L2char_T2_D1i_D1i_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_L2char_
2_D2_D1s_E_F3_E_F3_A_D1i_A_B<
D1i_B<=_D1i_B>=_B||_D1s_E_F3_
1i_R_C_L1_C_FOR_D1s_E_F3_D1i_
_D1i_A_B<=_B==_C_B!=_D1s_E_F3
D1i_B>=_L1_A_D1i_A_D1i_A_C_L1
L1_C_FOR_D1s_E_F3_D1s_L2doubl
_T2_B/_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
