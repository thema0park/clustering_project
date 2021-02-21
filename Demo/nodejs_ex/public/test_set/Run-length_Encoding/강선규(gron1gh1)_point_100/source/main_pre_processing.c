//강선규(gron1gh1)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 101
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char TEMP[MAX_LEN];
	int len, num, encoded_len = 0;
    int i = 0,cnt = 0;
	scanf("%s", input);
    for(i = 0;input[i]!='\0';i++)
    {
        if(!(input[i] >= 'A' && input[i] <= 'Z'))
        {       
            printf("Input Error\n");
            return 0;
        }
    }
 //printf("%d",strlen(input));
	////////////////////////////////////////
    strcpy(output,"");
   
    for(i = 0;i<strlen(input);i++)
    {
        if(input[i] == input[i+1])
            cnt++;
        else
        {
            //printf("%d%c",cnt+1,input[i]);
            if(cnt >= 2)
                sprintf(TEMP,"%d%c",cnt + 1,input[i]);
            else if(cnt == 0) sprintf(TEMP,"%c",input[i]);
            else if(cnt == 1)
            {
                sprintf(TEMP,"%c%c",input[i],input[i]);
            }
           // printf("%s",TEMP);
            strcat(output,TEMP);
            cnt = 0;

        }
    }

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);
    len = strlen(input);
    encoded_len = strlen(output);
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2char_T2_D
i_D2_L2int_T2_D2_L2int_T2_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_D1s_E_F3_D1i
A_D1c_B!=_D1c_B>=_D1c_B<=_B&&
D1s_E_F3_D1i_R_C_L1_C_FOR_D1s
E_F3_D1i_A_E_F3_B<_D1i_B+_B==
D1i_B>=_D1s_D1i_B+_E_F3_D1i_B
=_D1s_E_F3_D1i_B==_D1s_E_F3_C
L1_L1_L1_E_F3_D1i_A_C_L1_C_FO
_D1s_E_F3_D1s_E_F3_E_F3_A_E_F
_A_D1s_L2double_T2_B/_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
