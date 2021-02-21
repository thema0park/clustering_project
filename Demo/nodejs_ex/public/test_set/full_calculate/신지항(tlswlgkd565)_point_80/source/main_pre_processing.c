//신지항(tlswlgkd565)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int t0,t1,c;
    int n=0;

    for(c=7;c>=0;c--)
    {
        if(byte[0][c]=='0')
            t0=0;
        else if(byte[0][c]=='1')
            t0=1;
        
        if(byte[1][c]=='0')
            t1=0;
        else if(byte[1][c]=='1')
            t1=1;
        
        if(t0+t1+n==0)
        {
            out[c]='0';
            n=0;
        }
        else if(t0+t1+n==1)
        {
            out[c]='1';
            n=0;
        }
        else if(t0+t1+n==2)
        {
            out[c]='0';
            n=1;
        }
        else if(t0+t1+n==3)
        {    
            out[c]='1';
            n=1;
        }
    }
    out[8]=NULL;
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_L2int_T2_D2_L2int_T2_D2_
2int_T2_D1i_D2_D1i_A_D1i_B>=_
1i_D1c_B==_D1i_A_D1i_D1c_B==_
1i_A_L1_L1_D1i_D1c_B==_D1i_A_
1i_D1c_B==_D1i_A_L1_L1_B+_B+_
1i_B==_D1c_A_D1i_A_C_B+_B+_D1
_B==_D1c_A_D1i_A_C_B+_B+_D1i_
==_D1c_A_D1i_A_C_B+_B+_D1i_B=
_D1c_A_D1i_A_C_L1_L1_L1_L1_C_
OR_D1i_A_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
