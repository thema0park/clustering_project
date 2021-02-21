//임학범(zcae1020)_point_30
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int count=1;
    int i;
    int outi=0;
    printf("%s\n", input);
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]<'A'&&input[i]>'Z')
        {
            printf("Input Error\n");
            return 0;
        }
    }
    for(i=0;i<strlen(input);i++)
    {
        // if(i==strlen(input)-1)
        // {
        //     outi++;
        //     if(count==1)
        //     {
        //         break;
        //     }
        //     if(count!=1)
        //     {
        //         printf("%d",count);
        //     }
        //     while(1)
        //     {
        //         if(count==1)
        //         {
        //             break;
        //         }
        //         if(count<10)
        //         {
        //             if(count!=0)
        //             {
        //                 outi++;
        //             }
        //             break;
        //         }
        //         count/=10;
        //         outi++;
        //     }
        //     printf("%c",input[i]);
        //     printf("1\n");
        //     break;
        // }
        if(input[i]!=input[i+1])
        {
            outi++;
            if(count!=1)
            {
                printf("%d",count);
            }
            if(count%10==0)
            {
                outi++;
            }
            while(1)
            {
                if(count==1)
                {
                    break;
                }
                if(count<10)
                {
                    if(count!=0)
                    {
                        outi++;
                    }
                    break;
                }
                count/=10;
                outi++;
            }
            printf("%c",input[i]);
            count=1;
        }
        else
        {
            count++;
        }
    }
    printf("\n");
    len=strlen(input);
    encoded_len=outi;



	////////////////////////////////////////


	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_L2int_T2_D1i_D2_L2int_
2_D2_L2int_T2_D1i_D2_D1s_E_F3
D1i_A_E_F3_B<_D1c_B<_D1c_B>_B
&_D1s_E_F3_D1i_R_C_L1_C_FOR_D
i_A_E_F3_B<_D1i_B+_B!=_D1i_B!
_D1s_E_F3_C_L1_D1i_B%_D1i_B==
C_L1_D1i_D1i_B==_C_L1_D1i_B<_
1i_B!=_C_L1_C_L1_D1i_A_C_W_D1
_E_F3_D1i_A_C_C_L1_C_FOR_D1s_
_F3_E_F3_A_A_D1s_L2double_T2_
/_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
