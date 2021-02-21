//이영민(andy3014)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int l1,l2;
    if(gender=='M')
    {
        if(f==1||f==3)
        {
            l1=6-l;
            l2=1+l-0;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==2||f==4)
        {
            l1=l-0;
            l2=1+6-l;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==5)
        {
            l1=1+l-0;
            l2=2+6-l;
            if(l1>l2) out=l2;
            else out=l1;
        }
    }
    else if(gender=='W')
    {
        if(f==2||f==4)
        {
            l1=6-l;
            l2=1+l-0;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==1||f==3)
        {
            l1=l-0;
            l2=1+6-l;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==5)
        {
            l1=1+6-l-0;
            l2=2+l-0;
            if(l1>l2) out=l2;
            else out=l1;
        }
    }


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_L2int_T2_D2_L2int
T2_D2_D1c_B==_D1i_B==_D1i_B==
B||_D1i_B-_A_D1i_B+_D1i_B-_A_
>_A_A_L1_C_D1i_B==_D1i_B==_B|
_D1i_B-_A_D1i_D1i_B+_B-_A_B>_
_A_L1_C_D1i_B==_D1i_B+_D1i_B-
A_D1i_D1i_B+_B-_A_B>_A_A_L1_C
L1_L1_L1_C_D1c_B==_D1i_B==_D1
_B==_B||_D1i_B-_A_D1i_B+_D1i_
-_A_B>_A_A_L1_C_D1i_B==_D1i_B
=_B||_D1i_B-_A_D1i_D1i_B+_B-_
_B>_A_A_L1_C_D1i_B==_D1i_D1i_
+_B-_D1i_B-_A_D1i_B+_D1i_B-_A
B>_A_A_L1_C_L1_L1_L1_C_L1_L1_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
