//이태준(jounkart)_point_0
#define _CRT_SECURE_NO_WARNINGS
   #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char a,b;
	int len1,len2, num=0;
    int i,j=0;

	scanf("%s", input);

    len1=strlen(input);
    for(i=0;i<len1-1;i++)
    {
        if(input[i]==input[i+1])
            num++;
        else
        {
            if(num==0)
            {
                output[j]=input[i];
                j++;
                num=0;
                
            }
            else if(num==1)
            {
                output[j]=input[i];
                j++;
                output[j]=input[i];
                j++;
                num=0;
            }
            else if(num<9)
            {
                a=(num+1)+48;
                output[j]=a;
                j++;
                output[j]=input[i];
                j++;
                num=0;
            }
            else
            {
                a=((num+1)/10)+48;
                b=((num+1)%10)+48;
                output[j]=a;
                j++;
                output[j]=b;
                j++;
                output[j]=input[i];
                j++;
                num=0;
            }

    
        }
    }
    len2=strlen(output);
	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len1 / len2, len1, len2);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2char_T2_D
_L2char_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D2_L2int_T2_D1i_D2_D1s_E_F
_E_F3_A_D1i_A_D1i_B-_B<_D1i_B
_B==_D1i_B==_A_D1i_A_C_D1i_B=
_A_A_D1i_A_C_D1i_B<_D1i_B+_D1
_B+_A_A_A_D1i_A_C_D1i_B+_D1i_
/_D1i_B+_A_D1i_B+_D1i_B%_D1i_
+_A_A_A_A_D1i_A_C_L1_L1_L1_C_
1_C_FOR_E_F3_A_D1s_E_F3_D1s_E
F3_D1s_L2double_T2_B/_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
