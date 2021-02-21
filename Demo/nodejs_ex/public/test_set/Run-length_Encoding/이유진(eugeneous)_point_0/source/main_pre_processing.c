//이유진(eugeneous)_point_0
#define _CRT_SECURE_NO_WARNINGS
   
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    char Num[3];
    int i=0;
    int j=0;
    int count=0;
	scanf("%s", input);

	////////////////////////////////////////
    for(;input[i]!='\0';i++)
    {
        if(input[i]==input[i+1])
        {
            count++;
        }
        else
        {
           if(count==1)
           {
               output[j]=input[i];
               j++;
               output[j]=input[i];
           }
           else
           {
           if((count+1/10)>0)
           {
               output[j]+=(count+1/10);
                j++;
           }
           output[j]+=(count+1%10);
                j++;
           output[j]=input[i];
            count=0;
           }
        }
    }
    /*for(;j<MAX_LEN;j++)
    {
        output[j]='\0';
    }*/
	////////////////////////////////////////
    len=strlen(input);
    encoded_len=strlen(output);
    printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
char_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_D1s_E_F3_D1c_B!=_D1i_B+_B=
_C_D1i_B==_A_A_C_D1i_D1i_B/_B
_D1i_B>_D1i_D1i_B/_B+_A_C_L1_
1i_D1i_B%_B+_A_A_D1i_A_C_L1_C
L1_C_FOR_E_F3_A_E_F3_A_D1s_E_
3_D1s_E_F3_D1s_L2double_T2_B/
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
