//김도운(qwerqw889)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int a, b;
	int out;
    
	scanf("%c %d %d", &gender, &a, &b);
    if(gender == 'W'){
        if(a==1||a==3){
            if(b==1){
                out=1;
            }
            else if(b==2||b==5){
                out=2;
            }
            else if(b==3||b==4){
                out=3;
            }
            
        }
        else if(a==2||a==4){
            if(b==1||b==4){
                out=2;
            }
            else if(b==2){
                out=3;
            }
            else if(b==3){
                out=4;
            }
            else if(b==5){
                out=1;
            }
        }
        else if(a==5){
            if(b==1||b==4){
                out=3;
            }
            else if(b==2||b==3){
                out=4;
            }
            else if(b==5){
                out=2;
            }
        }
    }
    if(gender == 'M'){
        if(a==1||a==3){
            if(b==1||b==4){
                out=2;
            }
            else if(b==2||b==3){
                out=3;
            }
            else if(b==5){
                out=1;
            }
        }
        else if(a==2||a==4){
            if(b==2||b==5){
                out=2;
            }
            else if(b==3||b==4){
                out=3;
            }
            else if(b==1){
                out=1;
            }
        }
        else if(a==5){
            if(b==2||b==5){
                out=3;
            }
            else if(b==3||b==4){
                out=4;
            }
            else if(b==1){
                out=2;
            }
        }
    }
	

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B==_B||_D1i_B==_D1i_A_C_D1i
B==_D1i_B==_B||_D1i_A_C_D1i_B
=_D1i_B==_B||_D1i_A_C_L1_L1_L
_C_D1i_B==_D1i_B==_B||_D1i_B=
_D1i_B==_B||_D1i_A_C_D1i_B==_
1i_A_C_D1i_B==_D1i_A_C_D1i_B=
_D1i_A_C_L1_L1_L1_L1_C_D1i_B=
_D1i_B==_D1i_B==_B||_D1i_A_C_
1i_B==_D1i_B==_B||_D1i_A_C_D1
_B==_D1i_A_C_L1_L1_L1_C_L1_L1
L1_C_L1_D1c_B==_D1i_B==_D1i_B
=_B||_D1i_B==_D1i_B==_B||_D1i
A_C_D1i_B==_D1i_B==_B||_D1i_A
C_D1i_B==_D1i_A_C_L1_L1_L1_C_
1i_B==_D1i_B==_B||_D1i_B==_D1
_B==_B||_D1i_A_C_D1i_B==_D1i_
==_B||_D1i_A_C_D1i_B==_D1i_A_
_L1_L1_L1_C_D1i_B==_D1i_B==_D
i_B==_B||_D1i_A_C_D1i_B==_D1i
B==_B||_D1i_A_C_D1i_B==_D1i_A
C_L1_L1_L1_C_L1_L1_L1_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
