//이성규(lsg9706)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out=0;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender-'M'==0){
        if(l>3){
            out=out+6-l;
            if(f==5||f==4){
                out=out+f-3;
            }
            else if(f==2){
                out=out+1;
            }
            else
                ;        
        }
        else if(l<3){
            out=out+l;
            if(f==3||f==5||f==1){
                out=out+1;
            }
            else
                ;
        }
        else
            out=out+3;
            if(f==5){
                out=out+1;
            }
            else
                ;
    }

    if (gender-'W'==0){
        if(l<3){
            out=out+l;
            if(f==5||f==4){
                out=out+f-3;
            }
            else if(f==2){
                out=out+1;
            }
            else
                ;        
        }
        else if(l>3){
            out=out+6-l;
            if(f==3||f==5||f==1){
                out=out+1;
            }
            else
                ;
        }
        else
            out=out+3;
            if(f==5){
                out=out+1;
            }
            else
                ;
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D1i_D2_D1s_E_F3_D1c_B-_D1i_B=
_D1i_B>_D1i_B+_B-_A_D1i_B==_D
i_B==_B||_B+_D1i_B-_A_C_D1i_B
=_D1i_B+_A_C_L1_L1_C_D1i_B<_B
_A_D1i_B==_D1i_B==_B||_D1i_B=
_B||_D1i_B+_A_C_L1_C_D1i_B+_A
L1_L1_D1i_B==_D1i_B+_A_C_L1_C
L1_D1c_B-_D1i_B==_D1i_B<_B+_A
D1i_B==_D1i_B==_B||_B+_D1i_B-
A_C_D1i_B==_D1i_B+_A_C_L1_L1_
_D1i_B>_D1i_B+_B-_A_D1i_B==_D
i_B==_B||_D1i_B==_B||_D1i_B+_
_C_L1_C_D1i_B+_A_L1_L1_D1i_B=
_D1i_B+_A_C_L1_C_L1_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
