//이진기(dlwlsrl99)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int check=0;
    int jud=0;
    int b=0;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    
    //오류검사부분
    for(check;check<BYTE_SIZE;check++)
    {
        if(byte[0][check]=='0' || byte[0][check] =='1')
        {
            if(byte[1][check]=='0' || byte[1][check] =='1')
            {
                
            }
           else
                {
                    printf("Input Error\n");
                    return 0;
                }
        }
        else
                {
                    printf("Input Error\n");
                    return 0;
                }
        
    }

    int a=BYTE_SIZE-1; //오류나면 int 위로 올려보기.
   for(a;a>=0;a--)
    {
        out[a]=byte[0][a]+byte[1][a]-'0';
        out[a]=jud+out[a];
        jud=0;
        if(out[a]>='2')
        {
            out[a]=out[a]-2;
            jud=1;
        }
    }
    

	////////////////////////////////////////
    for(b;b<8;b++)
    {
	 printf("%c", out[b]);
    }
    printf("\n");
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D1i_D2_D1s_D
i_D1i_E_F3_D1i_B<_D1i_D1c_B==
D1i_D1c_B==_B||_D1i_D1c_B==_D
i_D1c_B==_B||_C_D1s_E_F3_D1i_
_C_L1_C_D1s_E_F3_D1i_R_C_L1_C
FOR_L2int_T2_D1i_D1i_B-_D2_D1
_B>=_D1i_D1i_B+_D1c_B-_A_B+_A
D1i_A_D1c_B>=_D1i_B-_A_D1i_A_
_L1_C_FOR_D1i_B<_D1s_E_F3_C_F
R_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
