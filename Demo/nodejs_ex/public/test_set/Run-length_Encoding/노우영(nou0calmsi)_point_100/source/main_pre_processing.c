//노우영(nou0calmsi)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, i, num, e_num=0, error;
    double e;
	scanf("%s", input);
    len=strlen(input);
    for(i=0;i<len;i++){
        error = input[i]-'A';
        if(error<0 || error>25){
            printf("Input Error\n");
            return 0;
        }
    }
    printf("%s\n", input);
    num=0;
    for(i=0;i<len;i++){
        if(input[i]==input[i+1]){
            num++;
        }
        else if(num==0&&input[i]!=input[i+1]){
            printf("%c", input[i]);
            e_num++;
        }
        else if(num>0&&input[i]!=input[i+1]){
            num++;
            if(num==2){
                printf("%c%c", input[i]);
            }
            else printf("%d%c", num, input[i]);
            if(num>=10) e_num += 3;
            else e_num += 2;
            num=0;
        }
    }
    printf("\n");
    e=(len+0.0)/(e_num+0.0);
    printf("%.6lf(%d/%d)\n", e, len, e_num);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D1i_D2_L2int_T2_D2_L2doubl
_T2_D2_D1s_E_F3_E_F3_A_D1i_A_
<_D1c_B-_A_D1i_B<_D1i_B>_B||_
1s_E_F3_D1i_R_C_L1_C_FOR_D1s_
_F3_D1i_A_D1i_A_B<_D1i_B+_B==
C_D1i_B==_D1i_B+_B!=_B&&_D1s_
_F3_C_D1i_B>_D1i_B+_B!=_B&&_D
i_B==_D1s_E_F3_C_D1s_E_F3_L1_
1i_B>=_D1i_A_D1i_A_L1_D1i_A_C
L1_L1_L1_C_FOR_D1s_E_F3_D1d_B
_D1d_B+_B/_A_D1s_E_F3_D1i_R_C
F1_1_
###############################*/
//$//
