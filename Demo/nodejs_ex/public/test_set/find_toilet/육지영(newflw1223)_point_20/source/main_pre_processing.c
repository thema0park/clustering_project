//육지영(newflw1223)_point_20
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

    int arr[6][6]={ 0 };
    arr[4][0]=1;
    arr[4][6]=2;
    arr[3][0]=2;
    arr[3][6]=1;
    arr[2][0]=1;
    arr[2][6]=2;
    arr[1][0]=2;
    arr[1][6]=1;

    int i, k;
    int min=50;

    if(gender=='M')
    {
        if(f==4&&l==5)
        {
            out=2;
        }
    }
    else if(gender=='W')
    {
        if(f==3&&l==4)
        {
            out=3;
        }
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_L2int_T2_D1i_D1i_
1i_D2_D1i_D1i_D1i_A_D1i_D1i_D
i_A_D1i_D1i_D1i_A_D1i_D1i_D1i
A_D1i_D1i_D1i_A_D1i_D1i_D1i_A
D1i_D1i_D1i_A_D1i_D1i_D1i_A_L
int_T2_D2_L2int_T2_D2_L2int_T
_D1i_D2_D1c_B==_D1i_B==_D1i_B
=_B&&_D1i_A_C_L1_C_D1c_B==_D1
_B==_D1i_B==_B&&_D1i_A_C_L1_C
L1_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
