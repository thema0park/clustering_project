//정재윤(jyjung9910)_point_100
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
        if(f==5)
        {
            if(l<=3)
            {
                printf("%d\n",l+1);
            }
            else
            {
                printf("%d\n",8-l);
            }
        }
        else
        {
            if(f%2==1)
            {
                if(l<3)
                {
                    printf("%d\n",l+1);
                }
                else
                {
                    printf("%d\n",6-l);
                }
            }
            else
            {
                if(l<=3)
                {
                    printf("%d\n",l);
                }
                else{
                    printf("%d\n",7-l);
                }
            }
        }
    }
    else
    {
        if(f==5)
        {
            if(l<3)
            {
                printf("%d\n",l+2);
            }
            else
            {
                printf("%d\n",7-l);
            }
        }
        else
        {
            if(f%2==1)
            {
                if(l<=3)
                {
                    printf("%d\n",l);
                }
                else
                {
                    printf("%d\n",7-l);
                }
            }
            else
            {
                if(l<3)
                {
                    printf("%d\n",l+1);
                }
                else{
                    printf("%d\n",6-l);
                }
            }
        }
    }
	////////////////////////////////////////
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B<=_D1s_D1i_B+_E_F3_C_D1s_D
i_B-_E_F3_C_L1_C_D1i_B%_D1i_B
=_D1i_B<_D1s_D1i_B+_E_F3_C_D1
_D1i_B-_E_F3_C_L1_C_D1i_B<=_D
s_E_F3_C_D1s_D1i_B-_E_F3_C_L1
C_L1_C_L1_C_D1i_B==_D1i_B<_D1
_D1i_B+_E_F3_C_D1s_D1i_B-_E_F
_C_L1_C_D1i_B%_D1i_B==_D1i_B<
_D1s_E_F3_C_D1s_D1i_B-_E_F3_C
L1_C_D1i_B<_D1s_D1i_B+_E_F3_C
D1s_D1i_B-_E_F3_C_L1_C_L1_C_L
_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
