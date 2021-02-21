//김주현(rlawngus0814)_point_60
#define _CRT_SECURE_NO_WARNINGS
  

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);
    len=strlen(input);
    int i=0;
    //대문자 알파벳이 아니면 거른다!!!
    for(i=0;i<len;i++)
    {
        if(('A'>input[i])||(input[i]>'Z'))
        {
            printf("Input Error\n");
            return 0;
        }
    }

    i=0;

    int count[MAX_LEN]={1};
    int j=0;
    for(i=0;i<len;)
    {
        output[j]=input[i];
        while(1)
        {
             if(output[j]==input[i+1])
            {
                count[j]++;
                i++;
            }
            else
            {
                j++;
                i++;
                break;
            }
        }
    }
    output[j]=NULL;
    int sum=j;
    printf("%s\n", input);
    i=0;
    int cnt=0;
    while(j--)
    {
        if(count[i]>2)
        {
            if(count[i]>9)
            {
                printf("%d",count[i]);
                cnt=cnt+2;
            }
            else
            {
                printf("%d",count[i]);
                cnt++;
            }
        }
        printf("%c",output[i]);
        i++;
    }
    printf("\n");
    encoded_len=sum+cnt;

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_E_F3_A_L2int_T2_D1i_D2
D1i_A_B<_D1c_B>_D1c_B>_B||_D1
_E_F3_D1i_R_C_L1_C_FOR_D1i_A_
2int_T2_D1i_D1i_D2_L2int_T2_D
i_D2_D1i_A_B<_A_D1i_D1i_B+_B=
_C_C_L1_C_W_C_FOR_A_L2int_T2_
2_D1s_E_F3_D1i_A_L2int_T2_D1i
D2_D1i_B>_D1i_B>_D1s_E_F3_D1i
B+_A_C_D1s_E_F3_C_L1_C_L1_D1s
E_F3_C_W_D1s_E_F3_B+_A_D1s_L2
ouble_T2_B/_E_F3_D1i_R_C_F1_1

###############################*/
//$//
