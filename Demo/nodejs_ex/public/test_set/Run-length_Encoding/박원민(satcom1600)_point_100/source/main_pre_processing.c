//박원민(satcom1600)_point_100
#define _CRT_SECURE_NO_WARNINGS
 

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char curChar, preChar;
	int i, len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    len = 0;
    curChar = input[0];
    preChar = input[0];
    num = 0;

    i = 0;
    while(input[i]) {
        if(input[i] < 'A' || input[i] > 'Z') {
            printf("Input Error\n");
            return 0;
        }
        i++;
    }

    printf("%s\n", input);

    while (input[len]) {
        preChar = curChar;
        curChar = input[len];
        if (curChar == preChar) num++;
        else {
            if(num == 1) {
                printf("%c", preChar);
                encoded_len += 1;
            } else if (num == 2) {
                printf("%c%c", preChar, preChar);
                encoded_len += 2;
            }
            else {
                printf("%d%c", num, preChar);
                if(num > 9) encoded_len += 3;
                else encoded_len += 2;
            }
            num = 1;
        }
        len++;
    }
    if(num == 1) {
        printf("%c\n", curChar);
        encoded_len += 1;
    } else if (num == 2) {
        printf("%c%c\n", curChar, curChar);
        encoded_len += 2;
    }
    else {
        printf("%d%c\n", num, curChar);
        if(num > 9) encoded_len += 3;
        else encoded_len += 2;
    }

	////////////////////////////////////////


	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2char_T2_D
_L2char_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_D1s_E_F3_D1i_A_D1i_A_D1
_A_D1i_A_D1i_A_D1c_B<_D1c_B>_
||_D1s_E_F3_D1i_R_C_L1_C_W_D1
_E_F3_A_A_B==_D1i_B==_D1s_E_F
_D1i_A_C_D1i_B==_D1s_E_F3_D1i
A_C_D1s_E_F3_D1i_B>_D1i_A_D1i
A_L1_C_L1_L1_D1i_A_C_L1_C_W_D
i_B==_D1s_E_F3_D1i_A_C_D1i_B=
_D1s_E_F3_D1i_A_C_D1s_E_F3_D1
_B>_D1i_A_D1i_A_L1_C_L1_L1_D1
_L2double_T2_B/_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
