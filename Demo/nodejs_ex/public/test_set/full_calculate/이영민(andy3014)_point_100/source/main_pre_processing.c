//이영민(andy3014)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    
    int a=0,b=0;
    int i;
    int tmp;
    int error=0;

    for(i=0; i<=7; i++)
    {
        if(byte[0][i]!='0'&&byte[0][i]!='1') error=1;
    }

    for(i=0; i<=7; i++)
    {
        if(byte[1][i]!='0'&&byte[1][i]!='1') error=1;
    }

    if(error==1) printf("Input Error\n");
    else
    {
        tmp=1;
        for(i=7; i>=0; i--)
        {
            if(byte[0][i]=='1') a+=tmp;
            tmp=tmp*2;
        }

        tmp=1;
        for(i=7; i>=0; i--)
        {
            if(byte[1][i]=='1') b+=tmp;
            tmp=tmp*2;
        }
        int answer=a+b;
        if(answer>=256) answer-=256;
        
        for(i=7; i>=0; i--)
        {
            out[i]=answer%2+48;
            answer/=2;
        }
        out[8]='\0';

        printf("%s\n", out);
    }


	////////////////////////////////////////


	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D1i_D2_L2int_T2_D1i_D2_L2in
_T2_D2_L2int_T2_D2_L2int_T2_D
i_D2_D1i_A_D1i_B<=_D1i_D1c_B!
_D1i_D1c_B!=_B&&_D1i_A_L1_C_F
R_D1i_A_D1i_B<=_D1i_D1c_B!=_D
i_D1c_B!=_B&&_D1i_A_L1_C_FOR_
1i_B==_D1s_E_F3_D1i_A_D1i_A_D
i_B>=_D1i_D1c_B==_A_L1_D1i_B*
A_C_FOR_D1i_A_D1i_A_D1i_B>=_D
i_D1c_B==_A_L1_D1i_B*_A_C_FOR
L2int_T2_B+_D2_D1i_B>=_D1i_A_
1_D1i_A_D1i_B>=_D1i_B%_D1i_B+
A_D1i_A_C_FOR_D1i_D1c_A_D1s_E
F3_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
