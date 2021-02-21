//최길수(chonist3)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i=0,j=0;
    int count=0;
    int t=0;

	scanf("%s", input);

	////////////////////////////////////////
    while(1)
    {
        if(input[i]=='\0')
        {
            len=i;
            encoded_len=j;
            output[j]='\0';
            break;
        }
        if(input[i]>=65 && input[i]<=90)
        {
            if(input[i]==input[i+1])
            {
                count++;
            }
            else if((input[i]!=input[i+1])||input[i+1]=='\0')
            {
                ++count;
                if(count==1)
                {
                    output[j]=input[i];
                    j+=1;
                    count=0;
                }
                else if(count==2)
                {
                    output[j]=input[i];
                    output[j+1]=input[i];
                    j+=2;
                    count=0;
                }
                else if(count<10 && count!=1)
                {
                    output[j]=48+count;
                    output[j+1]=input[i];
                    j+=2;
                    count=0;
                }
                else if(count>=10)
                {
                    output[j]=48+(count/10); //십의자리수 입력
                    output[j+1]=48+(count%10); //일의자리수 입력
                    output[j+2]=input[i];//문자입력
                    j+=3;
                    count=0;
                }      
            }
            i++;
        }
        else
        {
          printf("Input Error\n");
            t=1;
            break;
        }
    }

	////////////////////////////////////////
    if(t==0)
    {
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_D1s_E_F3_D1i_D1c_B==_A_A_D1
_A_C_L1_D1i_B>=_D1i_B<=_B&&_D
i_B+_B==_C_D1i_B+_B!=_D1i_B+_
1c_B==_B||_D1i_B==_A_D1i_A_D1
_A_C_D1i_B==_A_D1i_B+_A_D1i_A
D1i_A_C_D1i_B<_D1i_B!=_B&&_D1
_B+_A_D1i_B+_A_D1i_A_D1i_A_C_
1i_B>=_D1i_D1i_B/_B+_A_D1i_B+
D1i_D1i_B%_B+_A_D1i_B+_A_D1i_
_D1i_A_C_L1_L1_L1_L1_C_L1_L1_
_D1s_E_F3_D1i_A_C_L1_C_W_D1i_
==_D1s_E_F3_D1s_E_F3_D1s_L2do
ble_T2_B/_E_F3_C_L1_D1i_R_C_F
_1_
###############################*/
//$//
