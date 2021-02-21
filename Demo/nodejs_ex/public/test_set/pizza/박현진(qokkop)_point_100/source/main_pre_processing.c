//박현진(qokkop)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out=0;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l==3)
    {
        if(f!=5) out = 3;
        else out=4;
    }

    else if(gender=='M')
    {
        if(l==4)
        {
            if(f==3||f==1) out = 2;
            else if(f==2||f==4) out = 3;
            else if(f==5) out = 4;
        }
        else if(l==5)
        {
            if(f==3||f==1) out = 1;
            else if(f==2||f==4) out = 2;
            else if(f==5) out = 3;
        }
        else if(l==1)
        {
            if(f==2||f==4) out = 1;
            else out =2;
        }
        else if(l==2)
        {
            if(f==3||f==1) out = 3;
            else if (f==2||f==4) out = 2;
            else if(f==5) out = 3;
        }
    }
    else if(gender=='W')
    {
        if(l==4)
        {
            if(f==2||f==4) out = 2;
            else out = 3;
        }
        else if(l==2)
        {
            if(f==3||f==1) out = 2;
            else if(f==2||f==4) out = 3;
            else if(f==5) out = 4;
        }
        else if(l==5)
        {
            if(f==2||f==4) out = 1;
            else out =2;
        }
        else if(l==1)
        {
            if(f==3||f==1) out = 1;
            else if(f==2||f==4) out = 2;
            else if(f==5) out = 3;
        }
    }
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D1i_D2_D1s_E_F3_D1i_B==_D1i_B
=_D1i_A_D1i_A_L1_C_D1c_B==_D1
_B==_D1i_B==_D1i_B==_B||_D1i_
_D1i_B==_D1i_B==_B||_D1i_A_D1
_B==_D1i_A_L1_L1_L1_C_D1i_B==
D1i_B==_D1i_B==_B||_D1i_A_D1i
B==_D1i_B==_B||_D1i_A_D1i_B==
D1i_A_L1_L1_L1_C_D1i_B==_D1i_
==_D1i_B==_B||_D1i_A_D1i_A_L1
C_D1i_B==_D1i_B==_D1i_B==_B||
D1i_A_D1i_B==_D1i_B==_B||_D1i
A_D1i_B==_D1i_A_L1_L1_L1_C_L1
L1_L1_L1_C_D1c_B==_D1i_B==_D1
_B==_D1i_B==_B||_D1i_A_D1i_A_
1_C_D1i_B==_D1i_B==_D1i_B==_B
|_D1i_A_D1i_B==_D1i_B==_B||_D
i_A_D1i_B==_D1i_A_L1_L1_L1_C_
1i_B==_D1i_B==_D1i_B==_B||_D1
_A_D1i_A_L1_C_D1i_B==_D1i_B==
D1i_B==_B||_D1i_A_D1i_B==_D1i
B==_B||_D1i_A_D1i_B==_D1i_A_L
_L1_L1_C_L1_L1_L1_L1_C_L1_L1_
1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
