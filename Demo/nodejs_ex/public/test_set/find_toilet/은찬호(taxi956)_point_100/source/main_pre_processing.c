//은찬호(taxi956)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	if(gender == 'M'){
        if(f==1 || f==3 )
        {
            if(l==0){
                out = 1;
            }
            if(l == 1){
                out = 2;
            }
            if(l==2){
                out = 3;
            }
            if(l == 3){
                out = 3;
            }

            if(l == 4){
                out = 2;
            }
            if(l==5){
                out = 1;
            }
            if(l == 6){
                out = 0;
            }
        }
        if(f==4 || f== 2){
             if(l==0){
                out = 0;
            }
            if(l == 1){
                out = 1;
            }
            if(l == 2){
                out = 2;
            }
            if(l == 3){
                out =3;
            }
            if(l == 4){
                out = 3;
            }
            if(l==5){
                out = 2;
            }
            if(l == 6){
                out = 1;
            }
        }
        if(f==5)
        {
             if(l==0){
                out = 1;
            }
            if(l == 1){
                out = 2;
            }
            if(l == 2){
                out = 3;
            }
            if(l == 3){
                out =4;
            }
            if(l == 4){
                out = 4;
            }
            if(l==5){
                out = 3;
            }
            if(l == 6){
                out = 2;
            }
        }
    }
if(gender == 'W'){
        if(f==1 || f==3 )
        { if(l==0){
                out = 0;
            }
            if(l == 1){
                out = 1;
            }
            if(l == 2){
                out = 2;
            }
            if(l == 3){
                out =3;
            }
            if(l == 4){
                out = 3;
            }
            if(l==5){
                out = 2;
            }
            if(l == 6){
                out = 1;
            }
            
        }
        if(f==4 || f== 2){
            if(l==0){
                out = 1;
            }
            if(l == 1){
                out = 2;
            }
            if(l==2){
                out = 3;
            }
            if(l == 3){
                out = 3;
            }

            if(l == 4){
                out = 2;
            }
            if(l==5){
                out = 1;
            }
            if(l == 6){
                out = 0;
            }
        }
        if(f==5)
        {
             if(l==0){
                out = 1;
            }
            if(l == 1){
                out = 2;
            }
            if(l == 2){
                out = 3;
            }
            if(l == 3){
                out =4;
            }
            if(l == 4){
                out = 4;
            }
            if(l==5){
                out = 3;
            }
            if(l == 6){
                out = 2;
            }
        }



    }

printf("%d\n", out);
	
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B==_B||_D1i_B==_D1i_A_C_L1_
1i_B==_D1i_A_C_L1_D1i_B==_D1i
A_C_L1_D1i_B==_D1i_A_C_L1_D1i
B==_D1i_A_C_L1_D1i_B==_D1i_A_
_L1_D1i_B==_D1i_A_C_L1_C_L1_D
i_B==_D1i_B==_B||_D1i_B==_D1i
A_C_L1_D1i_B==_D1i_A_C_L1_D1i
B==_D1i_A_C_L1_D1i_B==_D1i_A_
_L1_D1i_B==_D1i_A_C_L1_D1i_B=
_D1i_A_C_L1_D1i_B==_D1i_A_C_L
_C_L1_D1i_B==_D1i_B==_D1i_A_C
L1_D1i_B==_D1i_A_C_L1_D1i_B==
D1i_A_C_L1_D1i_B==_D1i_A_C_L1
D1i_B==_D1i_A_C_L1_D1i_B==_D1
_A_C_L1_D1i_B==_D1i_A_C_L1_C_
1_C_L1_D1c_B==_D1i_B==_D1i_B=
_B||_D1i_B==_D1i_A_C_L1_D1i_B
=_D1i_A_C_L1_D1i_B==_D1i_A_C_
1_D1i_B==_D1i_A_C_L1_D1i_B==_
1i_A_C_L1_D1i_B==_D1i_A_C_L1_
1i_B==_D1i_A_C_L1_C_L1_D1i_B=
_D1i_B==_B||_D1i_B==_D1i_A_C_
1_D1i_B==_D1i_A_C_L1_D1i_B==_
1i_A_C_L1_D1i_B==_D1i_A_C_L1_
1i_B==_D1i_A_C_L1_D1i_B==_D1i
A_C_L1_D1i_B==_D1i_A_C_L1_C_L
_D1i_B==_D1i_B==_D1i_A_C_L1_D
i_B==_D1i_A_C_L1_D1i_B==_D1i_
_C_L1_D1i_B==_D1i_A_C_L1_D1i_
==_D1i_A_C_L1_D1i_B==_D1i_A_C
L1_D1i_B==_D1i_A_C_L1_C_L1_C_
1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
