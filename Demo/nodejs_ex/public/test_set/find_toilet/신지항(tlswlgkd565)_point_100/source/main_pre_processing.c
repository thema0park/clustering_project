//신지항(tlswlgkd565)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M')
    {
        if(l==3)
        {
            if(f==5)
                out=4;
            else
                out=3;
        }
        else if(l==1||l==2)
        {
            if(f==5)
                out=l+1;
            else if(f==4||f==2)
                out=l;
            else if(f==3||f==1)
                out=l+1;
        }
        else if(l==4||l==5)
        {
            if(f==5)
                out=8-l;
            else if(f==4||f==2)
                out=7-l;
            else if(f==3||f==1)
                out=6-l;
        }
    }
    else if(gender=='W')
    {
        if(l==3)
        {
            if(f==5)
                out=4;
            else
                out=3;
        }
        else if(l==1||l==2)
        {
            if(f==5)
                out=2+l;
            else if(f==4||f==2)
                out=1+l;
            else if(f==3||f==1)
                out=l;
        }
        else if(l==4||l==5)
        {
            if(f==5)
                out=7-l;
            else if(f==4||f==2)
                out=6-l;
            else if(f==3||f==1)
                out=7-l;
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B==_D1i_A_D1i_A_L1_C_D1i_B=
_D1i_B==_B||_D1i_B==_D1i_B+_A
D1i_B==_D1i_B==_B||_A_D1i_B==
D1i_B==_B||_D1i_B+_A_L1_L1_L1
C_D1i_B==_D1i_B==_B||_D1i_B==
D1i_B-_A_D1i_B==_D1i_B==_B||_
1i_B-_A_D1i_B==_D1i_B==_B||_D
i_B-_A_L1_L1_L1_C_L1_L1_L1_C_
1c_B==_D1i_B==_D1i_B==_D1i_A_
1i_A_L1_C_D1i_B==_D1i_B==_B||
D1i_B==_D1i_B+_A_D1i_B==_D1i_
==_B||_D1i_B+_A_D1i_B==_D1i_B
=_B||_A_L1_L1_L1_C_D1i_B==_D1
_B==_B||_D1i_B==_D1i_B-_A_D1i
B==_D1i_B==_B||_D1i_B-_A_D1i_
==_D1i_B==_B||_D1i_B-_A_L1_L1
L1_C_L1_L1_L1_C_L1_L1_D1s_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
