//이준수(ljs0524)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
    int count=0;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender == 'M')
    {
        if(f == 2 || f==4)
        {
            if(l<=3)
            {
                count = l;
            }
            else if(l>3)
            {
                count = 6-l+1;
            }
        }
        else if(f==5)
        {
            if(l<=3)
            {
                count = l+1;
            }
            else if(l>3)
            {
                count = 6-l+2;
            }
        }
        else
        {
            if(l<3)
            {
               count = 1+ l; 
            }
            else if(l>=3)
            {
                count = 6-l;
            }
        }
    }
    if(gender == 'W')
    {
        if(f == 1 || f==3)
        {
            if(l<=3)
            {
                count = l;
            }
            else
            {
                count = 6-l+1;
            }
        }
        else if(f==5)
        {
            if(l<3)
            {
                count = l+2;
            }
            else if(l>=3)
            {
                count = 6-l+1;
            }
        }
        else
        {
            if(l<3)
            {
               count = 1+ l; 
            }
            else if(l>=3)
            {
                count = 6-l ;
            }
        }
    }


	printf("%d\n", count);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D1i_D2_D1s_E_F3_D1c_B==_D1i_B
=_D1i_B==_B||_D1i_B<=_A_C_D1i
B>_D1i_B-_D1i_B+_A_C_L1_L1_C_
1i_B==_D1i_B<=_D1i_B+_A_C_D1i
B>_D1i_B-_D1i_B+_A_C_L1_L1_C_
1i_B<_D1i_B+_A_C_D1i_B>=_D1i_
-_A_C_L1_L1_C_L1_L1_C_L1_D1c_
==_D1i_B==_D1i_B==_B||_D1i_B<
_A_C_D1i_B-_D1i_B+_A_C_L1_C_D
i_B==_D1i_B<_D1i_B+_A_C_D1i_B
=_D1i_B-_D1i_B+_A_C_L1_L1_C_D
i_B<_D1i_B+_A_C_D1i_B>=_D1i_B
_A_C_L1_L1_C_L1_L1_C_L1_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
