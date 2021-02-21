//안성진(andy5305)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;
    int i,j;
    int Man[5][7];
    int Wom[5][7];
	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M')
    {
        if((f-1)==0||(f-1)==2)
        {
            if(l<3)
            out = l+1;
            else
            out = 6-l;
        }
        else if((f-1)==1||(f-1)==3)
        {
            if(l<4)
            out = l;
            else
            out = 7-l;
        }
        else if(f==5)
        {
            if(l<4)
            out=l+1;
            else
            out=8-l;
        }
    }
    else if(gender=='W')
    {
        if((f-1)==1||(f-1)==3)
        {
            if(l<3)
            out = l+1;
            else
            out = 6-l;
        }
        else if((f-1)==0||(f-1)==2)
        {
            if(l<4)
            out = l;
            else
            out = 7-l;
        }
        else if(f==5)
        {
            if(l<3)
            out=l+2;
            else
            out=7-l;
        }
    }
	////////////////////////////////////////


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D2_L2int_T2_D2_L2
nt_T2_D1i_D1i_D2_L2int_T2_D1i
D1i_D2_D1s_E_F3_D1c_B==_D1i_B
_D1i_B==_D1i_B-_D1i_B==_B||_D
i_B<_D1i_B+_A_D1i_B-_A_L1_C_D
i_B-_D1i_B==_D1i_B-_D1i_B==_B
|_D1i_B<_A_D1i_B-_A_L1_C_D1i_
==_D1i_B<_D1i_B+_A_D1i_B-_A_L
_C_L1_L1_L1_C_D1c_B==_D1i_B-_
1i_B==_D1i_B-_D1i_B==_B||_D1i
B<_D1i_B+_A_D1i_B-_A_L1_C_D1i
B-_D1i_B==_D1i_B-_D1i_B==_B||
D1i_B<_A_D1i_B-_A_L1_C_D1i_B=
_D1i_B<_D1i_B+_A_D1i_B-_A_L1_
_L1_L1_L1_C_L1_L1_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
