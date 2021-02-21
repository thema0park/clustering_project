//김동환(jino0709)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
    int tmp=0;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M')
    {
        if(l>3)
        {
            if(f==1||f==3)
            {
                out=6-l;
            }
            else if(f==2||f==4)
            {
                out=7-l;
            }
            else if (f==5)
            {
                out=8-l;
            }
        }
        else if(l<3)
        {
             if(f==1||f==3)
            {
                out=l+1;
            }
            else if(f==2||f==4)
            {
                out=l;
            }
            else if (f==5)
            {
                out=l+1;
            }
        }
        else if(l==3)
        {
              out=3;
        }

    }
     if(gender=='W')
    {
        if(l>3)
        {
            if(f==1||f==3)
            {
                out=7-l;
            }
            else if(f==2||f==4)
            {
                out=6-l;
            }
            else if (f==5)
            {
                out=7-l;
            }
        }
        else if(l<3)
        {
             if(f==1||f==3)
            {
                out=l;
            }
            else if(f==2||f==4)
            {
                out=l+1;
            }
            else if (f==5)
            {
                out=l+2;
            }
        }
        else if(l==3)
        {   
            if(f!=5)
            {
                out=3;
            }
            else
            {
                out=4;
            }
              
        }
    } 
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D1i_D2_L2int_T2_D2_D1s_E_F3_D
c_B==_D1i_B>_D1i_B==_D1i_B==_
||_D1i_B-_A_C_D1i_B==_D1i_B==
B||_D1i_B-_A_C_D1i_B==_D1i_B-
A_C_L1_L1_L1_C_D1i_B<_D1i_B==
D1i_B==_B||_D1i_B+_A_C_D1i_B=
_D1i_B==_B||_A_C_D1i_B==_D1i_
+_A_C_L1_L1_L1_C_D1i_B==_D1i_
_C_L1_L1_L1_C_L1_D1c_B==_D1i_
>_D1i_B==_D1i_B==_B||_D1i_B-_
_C_D1i_B==_D1i_B==_B||_D1i_B-
A_C_D1i_B==_D1i_B-_A_C_L1_L1_
1_C_D1i_B<_D1i_B==_D1i_B==_B|
_A_C_D1i_B==_D1i_B==_B||_D1i_
+_A_C_D1i_B==_D1i_B+_A_C_L1_L
_L1_C_D1i_B==_D1i_B!=_D1i_A_C
D1i_A_C_L1_C_L1_L1_L1_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
