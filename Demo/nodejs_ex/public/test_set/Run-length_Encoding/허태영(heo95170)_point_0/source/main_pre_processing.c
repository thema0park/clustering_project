//허태영(heo95170)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, encoded_len = 0;
    int num = 1;
    int i, j = 0;

	scanf("%s", input);

	////////////////////////////////////////
    
        for(i = 0; i < MAX_LEN; i++) {
            if(input[i] == input[i + 1]) {
                num += 1;
            }
            printf("%d", num);

        
        }

    


	////////////////////////////////////////
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D2_L2int_T2_D1i_D2
D1s_E_F3_D1i_A_D1i_B<_D1i_B+_
==_D1i_A_C_L1_D1s_E_F3_C_FOR_
1s_L2double_T2_B/_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
