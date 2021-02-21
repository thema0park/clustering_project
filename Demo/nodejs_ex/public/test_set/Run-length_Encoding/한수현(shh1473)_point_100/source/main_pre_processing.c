//한수현(shh1473)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

    int q;

    len = strlen(input);

    for (q = 0; q < len; ++q)
    {
        if (input[q] < 'A' || input[q] > 'Z')
        {
            printf("Input Error\n");
            return 0;
        }
    }

    printf("%s\n", input);


	////////////////////////////////////////

    int out_len = 0;
    int index = 0;
    int count = 0;
    char nowC = input[0];

    while (input[index] != '\0')
    {
        nowC = input[index];

        count = 1;

        while(input[index] != '\0')
        {
            if (nowC != input[++index])
            {
                break;
            }

            ++count;
        }

        if (count < 3)
        {
            int i = 0;

            for (i = 0; i < count; ++i)
            {
                printf("%c", input[index - 1 - i]);
            }
        }
        else
        {
            int i = 0;

            printf("%d%c", count, input[index - 1]);
        }

        ++out_len;

        if (count > 9)
        {
            out_len += 2;
        }
        else if (count > 1)
        {
            out_len += 1;
        }
    }

    printf("\n");

    encoded_len = out_len;

	////////////////////////////////////////

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_L2int_T2_D2_E_F3_A_D1i
A_B<_D1c_B<_D1c_B>_B||_D1s_E_
3_D1i_R_C_L1_C_FOR_D1s_E_F3_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2char_T2_D1i
D2_D1c_B!=_A_D1i_A_D1c_B!=_B!
_C_L1_C_W_D1i_B<_L2int_T2_D1i
D2_D1i_A_B<_D1s_D1i_B-_B-_E_F
_C_FOR_C_L2int_T2_D1i_D2_D1s_
1i_B-_E_F3_C_L1_D1i_B>_D1i_A_
_D1i_B>_D1i_A_C_L1_L1_C_W_D1s
E_F3_A_D1s_L2double_T2_B/_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
