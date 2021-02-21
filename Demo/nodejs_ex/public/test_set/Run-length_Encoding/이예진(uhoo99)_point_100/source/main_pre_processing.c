//이예진(uhoo99)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
    char check=0,num[MAX_LEN];
	char output[MAX_LEN];
	int len, encoded_len = 0;
    int i,j,ch=0;
    int count=0,num_cnt=0;

	scanf("%s", input);

    len=strlen(input);
    for(i=0;i<len;i++)
    {
        if('A'<=input[i] && input[i]<='Z')
        {
            if(i==0)
            {
                check=input[i];
                count++;
            }
            else if(check!=input[i])
            {
                if(count>2)
                {
                    num_cnt=0;
                    while(count)
                    {
                        num[num_cnt++]=(char)(count%10+'0');
                        
                        count=count/10;
                    }
                    for(j=num_cnt-1;j>=0;j--)
                    {
                        
                        output[encoded_len++]=num[j];
                    }
                    output[encoded_len++]=check;
                }
                else
                {
                    for(j=0;j<count;j++)
                    {
                        output[encoded_len++]=check;
                    }
                }
                
                check=input[i];
                count=1;
            }
            else
            {
                count++;
            }
        }
        else
        {
            ch=-1;
            printf("Input Error\n");
            break;
        }
    }
    
    if(ch!=-1)
    {
        if(count!=0)
        {
            if(count>2)
            {
                num_cnt=0;
                while(count)
                {
                    num[num_cnt++]=(char)(count%10+'0');
                    count=count/10;
                }
                for(j=num_cnt-1;j>=0;j--)
                {
                    output[encoded_len++]=num[j];
                }
                output[encoded_len++]=check;
            }
            else
            {
                for(j=0;j<count;j++)
                {
                    output[encoded_len++]=check;
                }
            }
                
        }
        encoded_len=strlen(output);
        printf("%s\n", input);
        printf("%s\n", output);
        printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2char_T2_D
i_D2_L2char_T2_D1i_D2_L2int_T
_D2_L2int_T2_D1i_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_D1s_E_F3_E_F3_A_D1i_A_B<_D1
_B<=_D1c_B<=_B&&_D1i_B==_A_C_
!=_D1i_B>_D1i_A_L2char_T2_D1i
B%_D1c_B+_A_D1i_B/_A_C_W_D1i_
-_A_D1i_B>=_A_C_FOR_A_C_D1i_A
B<_A_C_FOR_C_L1_A_D1i_A_C_C_L
_L1_C_D1i_A_D1s_E_F3_C_L1_C_F
R_D1i_B!=_D1i_B!=_D1i_B>_D1i_
_L2char_T2_D1i_B%_D1c_B+_A_D1
_B/_A_C_W_D1i_B-_A_D1i_B>=_A_
_FOR_A_C_D1i_A_B<_A_C_FOR_C_L
_C_L1_E_F3_A_D1s_E_F3_D1s_E_F
_D1s_L2double_T2_B/_E_F3_C_L1
D1i_R_C_F1_1_
###############################*/
//$//
