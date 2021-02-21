//유근영(rmsdudz)_point_40
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;
    int count;
	scanf("%c %d %d", &gender, &f, &l);
    
    if(f==1||3){
        if(gender=='W'){
            if(l==1){
                out=1;
            }
            else if(l==2){
                out=2;
            }
            else if(l==3){
                out=3;
            }
            else if(l==4){
                out=3;
            }
            else if(l==5){
                out=2;
            }
        }
        else if(gender=='M'){
            if(l==1){
                out=2;
            }else if(l==2){
                out=3;
            }else if(l==3){
                out=3;
            }else if(l==4){
                out=2;
            }else if(l==5){
                out=1;
            }
        }
    }else if(f==2 || f==4){
        if(gender=='W'){
            if(l==1){
                out=2;
            }else if(l==2){
                out=3;
            }else if(l==3){
                out=3;
            }else if(l==4){
                out=2;
            }else if(l==5){
                out=1;
            }
        }else if(gender=='M'){
            if(l==1){
                out=1;
            }else if(l==2){
                out=2;
            }else if(l==3){
                out=3;
            }else if(l==4){
                out=3;
            }else if(l==5){
                out=2;
            }
        }
    }else if(f==5){
        if(gender=='M'){
            if(l==1){
                out=2;
            }else if(l==2){
                out=3;
            }else if(l==3){
                out=4;
            }else if(l==4){
                out=4;
            }else if(l==5){
                out=3;
            }
        }else if(gender=='W'){
            if(l==1){
                out=3;
            }else if(l==2){
                out=4;
            }else if(l==3){
                out=4;
            }else if(l==4){
                out=3;
            }else if(l==5){
                out=2;
            }
        }
    }
    

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D2_D1s_E_F3_D1i_B
=_D1i_B||_D1c_B==_D1i_B==_D1i
A_C_D1i_B==_D1i_A_C_D1i_B==_D
i_A_C_D1i_B==_D1i_A_C_D1i_B==
D1i_A_C_L1_L1_L1_L1_L1_C_D1c_
==_D1i_B==_D1i_A_C_D1i_B==_D1
_A_C_D1i_B==_D1i_A_C_D1i_B==_
1i_A_C_D1i_B==_D1i_A_C_L1_L1_
1_L1_L1_C_L1_L1_C_D1i_B==_D1i
B==_B||_D1c_B==_D1i_B==_D1i_A
C_D1i_B==_D1i_A_C_D1i_B==_D1i
A_C_D1i_B==_D1i_A_C_D1i_B==_D
i_A_C_L1_L1_L1_L1_L1_C_D1c_B=
_D1i_B==_D1i_A_C_D1i_B==_D1i_
_C_D1i_B==_D1i_A_C_D1i_B==_D1
_A_C_D1i_B==_D1i_A_C_L1_L1_L1
L1_L1_C_L1_L1_C_D1i_B==_D1c_B
=_D1i_B==_D1i_A_C_D1i_B==_D1i
A_C_D1i_B==_D1i_A_C_D1i_B==_D
i_A_C_D1i_B==_D1i_A_C_L1_L1_L
_L1_L1_C_D1c_B==_D1i_B==_D1i_
_C_D1i_B==_D1i_A_C_D1i_B==_D1
_A_C_D1i_B==_D1i_A_C_D1i_B==_
1i_A_C_L1_L1_L1_L1_L1_C_L1_L1
C_L1_L1_L1_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
