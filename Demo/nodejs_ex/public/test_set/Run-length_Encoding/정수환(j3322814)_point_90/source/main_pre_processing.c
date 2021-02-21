//정수환(j3322814)_point_90
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int re[128]={};
    int temp = 0;
    char ten, one;

    
    int i,j=0;;

	scanf("%s", input);

	////////////////////////////////////////

    

    for (i=0;input[i]!='\0';i++)
    {
        if (input[i]>='A'&&input[i]<='Z')
        {
            continue;
        }
        else
        {
            printf("Input Error\n");
            return 0;
        }
    }
   
    for (i=0;input[i]!='\0';i++)
    {
        re[input[i]]++;
    }

    for (i=0;input[i]!='\0';i++)
    {
        if (temp == input[i]) continue;
        
        temp = input[i];
        num = re[input[i]];
        
        ten = num/10+'0';
        one = num%10+'0';

        if (ten == '0')
        {
            if (one=='1')
            {
                output[j++] = input[i];
            }
            else if (one=='2')
            {
                output[j++] = input[i];
                output[j++] = input[i];
            }
            else
            {
                output[j++] = one;
                output[j++] = input[i];
            }
        }
        else 
        {
            output[j++] = ten;
            output[j++] = one;
            output[j++] = input[i];
        }
    }

    output[j]='\0';

    len = strlen(input);
    encoded_len = strlen(output);


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
L2char_T2_D2_L2char_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_D1s_E
F3_D1i_A_D1c_B!=_D1c_B>=_D1c_
<=_B&&_C_D1s_E_F3_D1i_R_C_L1_
_FOR_D1i_A_D1c_B!=_C_FOR_D1i_
_D1c_B!=_B==_L1_A_A_D1i_B/_D1
_B+_A_D1i_B%_D1c_B+_A_D1c_B==
D1c_B==_A_C_D1c_B==_A_A_C_A_A
C_L1_L1_C_A_A_A_C_L1_C_FOR_D1
_A_E_F3_A_E_F3_A_D1s_E_F3_D1s
E_F3_D1s_L2double_T2_B/_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
