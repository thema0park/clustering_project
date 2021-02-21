//이상현(leesh1510)_point_100
#define _CRT_SECURE_NO_WARNINGS
 int main()
{
	char gender;
	int f, l;
	int out;
    out=0;
	scanf("%c %d %d",&gender, &f, &l);
    if (l==1){
        if (gender=='M'){
            if ((f==2)||(f==4)) out=1;
            else if ((f==1)||(f==3)) out=2; 
            else out=2;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=1;
            else out=3;
        }
    }
    else if (l==2){
         if (gender=='M'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=3;
            else out=3;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=3;
            else if ((f==1)||(f==3)) out=2;
            else out=4;
        }
    }
    else if (l==3){
        if (f<5) out=3;
        else out=4;
    }
    else if (l==4){
         if (gender=='M'){
            if ((f==2)||(f==4)) out=3;
            else if ((f==1)||(f==3)) out=2;
            else out=4;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=3;
            else out=3;
        }
    }
    else{//l==5
        if (gender=='M'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=1; 
            else out=3;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=1;
            else if ((f==1)||(f==3)) out=2;
            else out=2;
        }
    }
	printf("%d\n", out);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1i_A_D1s_E_F3_D1i_B==_D1c
B==_D1i_B==_D1i_B==_B||_D1i_A
D1i_B==_D1i_B==_B||_D1i_A_D1i
A_L1_L1_C_L1_D1c_B==_D1i_B==_
1i_B==_B||_D1i_A_D1i_B==_D1i_
==_B||_D1i_A_D1i_A_L1_L1_C_L1
C_D1i_B==_D1c_B==_D1i_B==_D1i
B==_B||_D1i_A_D1i_B==_D1i_B==
B||_D1i_A_D1i_A_L1_L1_C_L1_D1
_B==_D1i_B==_D1i_B==_B||_D1i_
_D1i_B==_D1i_B==_B||_D1i_A_D1
_A_L1_L1_C_L1_C_D1i_B==_D1i_B
_D1i_A_D1i_A_L1_C_D1i_B==_D1c
B==_D1i_B==_D1i_B==_B||_D1i_A
D1i_B==_D1i_B==_B||_D1i_A_D1i
A_L1_L1_C_L1_D1c_B==_D1i_B==_
1i_B==_B||_D1i_A_D1i_B==_D1i_
==_B||_D1i_A_D1i_A_L1_L1_C_L1
C_D1c_B==_D1i_B==_D1i_B==_B||
D1i_A_D1i_B==_D1i_B==_B||_D1i
A_D1i_A_L1_L1_C_L1_D1c_B==_D1
_B==_D1i_B==_B||_D1i_A_D1i_B=
_D1i_B==_B||_D1i_A_D1i_A_L1_L
_C_L1_C_L1_L1_L1_L1_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
