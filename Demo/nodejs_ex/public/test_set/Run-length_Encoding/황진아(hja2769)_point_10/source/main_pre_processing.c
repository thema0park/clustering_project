//황진아(hja2769)_point_10
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51

int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN] = "10A";
	int len, num, encoded_len = 0;
    int i, j;
    int tmp = 0;

	scanf("%s", input);
    for(i = 0; i < strlen(input); i++){
        if(input[i]<'A'||input[i]>'Z'){
            printf("Input Error\n");
            break;
        }
    }

        
    len = strlen(input);
    encoded_len = strlen(output);

    printf("%s\n", input);
    printf("%s\n", output);

    printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);

        
    
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D1s_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D1i_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_D1s_E_F3_D1i_A_E_
3_B<_D1c_B<_D1c_B>_B||_D1s_E_
3_C_L1_C_FOR_E_F3_A_E_F3_A_D1
_E_F3_D1s_E_F3_D1s_L2double_T
_B/_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
