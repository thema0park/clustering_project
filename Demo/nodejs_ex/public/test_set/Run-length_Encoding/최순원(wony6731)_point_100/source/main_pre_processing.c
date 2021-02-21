//최순원(wony6731)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51

// A = 65
// Z = 90
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char tmp;
    char num[3];
	int len, encoded_len, flag, index = 0;
    int k;

    num[0] = '0';
    num[1] = '0';
    num[2] = NULL;

	scanf("%s", input);

    len = strlen(input);
	////////////////////////////////////////
    // 알파벳 대문자 이외의 문자가 입력된 경우 오류 처리
    for(k = 0; k < len; k++)
    {
        tmp = input[k];
        if((int)tmp < 65 || (int)tmp > 90)
        {
            printf("Input Error\n");
            return 0;
        }
    }

    // Run-length Encoding
    for(k = 0; k < len; k++)
    {
        if(input[k+1] == NULL)
        {
            if(flag == 1)
            {
                if(num[0] == '0' && num[1] == '0')
                {
                    output[index] = input[k];
                    index++;
                }
                else if(num[0] == '1' && num[1] == '0')
                {
                    output[index] = input[k];
                    output[index + 1] = input[k];
                    index = index + 2;
                }
                else
                {
                    if(num[0] == '9')
                    {
                        num[1]++;
                        num[0] = '0';
                    }
                    else
                        num[0]++;

                    if(num[1] == '0')
                    {
                        output[index] = num[0];
                        output[index + 1] = input[k];
                        index = index + 2;
                    }
                    else
                    {
                        output[index] = num[1];
                        output[index + 1] = num[0];
                        output[index + 2] = input[k];
                        index = index + 3;
                    }
                }
            }
            else
            {
                output[index] = input[k];
                index++;
            }
            break;
        }

        // start
        if(input[k] == input[k+1])
        {
            if(num[0] == '9')
            {
                num[1]++;
                num[0] = '0';
            }
            else
                num[0]++;

            flag = 1;
        }
        else
        {
            if(num[0] == '0' && num[1] == '0')
            {
                output[index] = input[k];
                index++;
            }
            else if(num[0] == '1' && num[1] == '0')
            {
                output[index] = input[k];
                output[index + 1] = input[k];
                index = index + 2;
            }
            else
            {
                if(num[0] == '9')
                    {
                        num[1]++;
                        num[0] = '0';
                    }
                else
                    num[0]++;
                    
                if(num[1] == '0')
                {
                    output[index] = num[0];
                    output[index + 1] = input[k];
                    index = index + 2;
                }
                else
                {
                    output[index] = num[1];
                    output[index + 1] = num[0];
                    output[index + 2] = input[k];
                    index = index + 3;
                }
            }
            num[0] = '0';
            num[1] = '0';
            flag = 0;
        }
    }
    output[index] = NULL;
    encoded_len = strlen(output);
	////////////////////////////////////////

	printf("%s\n", input);                                                            // 입력된 문자열
	printf("%s\n", output);                                                           // 인코딩 결과 문자열

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);            // 압축률
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2char_T2_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D1i_D2_L2int_T2_D2_D1i_D1c
A_D1i_D1c_A_D1i_A_D1s_E_F3_E_
3_A_D1i_A_B<_A_L2int_T2_D1i_B
_L2int_T2_D1i_B>_B||_D1s_E_F3
D1i_R_C_L1_C_FOR_D1i_A_B<_D1i
B+_B==_D1i_B==_D1i_D1c_B==_D1
_D1c_B==_B&&_A_C_D1i_D1c_B==_
1i_D1c_B==_B&&_A_D1i_B+_A_D1i
B+_A_C_D1i_D1c_B==_D1i_D1i_D1
_A_C_D1i_L1_D1i_D1c_B==_D1i_A
D1i_B+_A_D1i_B+_A_C_D1i_A_D1i
B+_D1i_A_D1i_B+_A_D1i_B+_A_C_
1_C_L1_L1_C_A_C_L1_C_L1_D1i_B
_B==_D1i_D1c_B==_D1i_D1i_D1c_
_C_D1i_L1_D1i_A_C_D1i_D1c_B==
D1i_D1c_B==_B&&_A_C_D1i_D1c_B
=_D1i_D1c_B==_B&&_A_D1i_B+_A_
1i_B+_A_C_D1i_D1c_B==_D1i_D1i
D1c_A_C_D1i_L1_D1i_D1c_B==_D1
_A_D1i_B+_A_D1i_B+_A_C_D1i_A_
1i_B+_D1i_A_D1i_B+_A_D1i_B+_A
C_L1_C_L1_L1_D1i_D1c_A_D1i_D1
_A_D1i_A_C_L1_C_FOR_A_E_F3_A_
1s_E_F3_D1s_E_F3_D1s_L2double
T2_B/_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
