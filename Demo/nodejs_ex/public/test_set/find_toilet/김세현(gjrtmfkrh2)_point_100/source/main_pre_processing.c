//김세현(gjrtmfkrh2)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender == 'M' && f == 5)
    {
        if(l < 4)
        {
            out = l + 1;
        }
        else
        out = 8 - l;
    }
       if (gender == 'W' && f == 5)
    {
        if(l > 2)
        {
            out = 7 - l;
        }
        if(l == 1)
        {
            out = 3;
        }
        if(l == 2)
        {
            out == 4;
        }
        
    }
    else
    {
    if (gender == 'M' && f == 1 )
    {
        if(l < 3)
        {
            out = l + 1;
        }
        else
        out = 6 - l;
    }
        if (gender == 'M' && f == 2 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
        if (gender == 'M' && f == 3 )
    {
        if(l < 3)
        {
            out = l + 1;
        }
        else
         out = 6 - l;
    }
        if (gender == 'M' && f == 4 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
    
//////////

        if (gender == 'W' && f == 1 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
        if (gender == 'W' && f == 2 )
    {
         if(l < 3)
        {
            out = l + 1;
        }
        else
        out = 6 - l;
    }
        if (gender == 'W' && f == 3 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
        if (gender == 'W' && f == 4 )
    {
        if(l < 3)
        {
            out = l + 1;
        }
        else
        out = 6 - l;
    }
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_B
&_D1i_B<_D1i_B+_A_C_D1i_B-_A_
1_C_L1_D1c_B==_D1i_B==_B&&_D1
_B>_D1i_B-_A_C_L1_D1i_B==_D1i
A_C_L1_D1i_B==_D1i_B==_C_L1_C
D1c_B==_D1i_B==_B&&_D1i_B<_D1
_B+_A_C_D1i_B-_A_L1_C_L1_D1c_
==_D1i_B==_B&&_D1i_B>_D1i_B-_
_C_A_L1_C_L1_D1c_B==_D1i_B==_
&&_D1i_B<_D1i_B+_A_C_D1i_B-_A
L1_C_L1_D1c_B==_D1i_B==_B&&_D
i_B>_D1i_B-_A_C_A_L1_C_L1_D1c
B==_D1i_B==_B&&_D1i_B>_D1i_B-
A_C_A_L1_C_L1_D1c_B==_D1i_B==
B&&_D1i_B<_D1i_B+_A_C_D1i_B-_
_L1_C_L1_D1c_B==_D1i_B==_B&&_
1i_B>_D1i_B-_A_C_A_L1_C_L1_D1
_B==_D1i_B==_B&&_D1i_B<_D1i_B
_A_C_D1i_B-_A_L1_C_L1_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
