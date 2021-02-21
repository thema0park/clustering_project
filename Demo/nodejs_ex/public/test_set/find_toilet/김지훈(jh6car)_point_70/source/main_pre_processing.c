//김지훈(jh6car)_point_70
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        if(f%2==0){
            if(l<3){
                out=l;
            }
            if(l==3){
                out =3;
            }
            if(l==4){
                out =3;
            }
            if(l==5){
                out=2;
            }

        }
        else {
            if(f==5){
                if(l==1) out=2;
                if(l==2) out=3;
                if(l==3) out=4;
                if(l==4) out=4;
                if(l==5) out=3;

            }
            if(l>3){
                out=6-l;

            }
            if(l==3){
                out=l;
            }
            if(l==2){
                out=3;

            }
            if(l==1){

                out=2;
            }


        }

    }
    else{
        if(f%2==0){
            if(l>=3) out=6-l;
            if(l==2) out=3;
            if(l==1) out=2;
        }
        else{
            if(f==5){
                if(l==1) out=3;
                if(l==2) out=4;
                if(l==3) out=4;
                if(l==4) out=3;
                if(l==5) out=2;

            }
            if(l<=3)   out=l;
            if(l==4)   out=3;
            if(l==5)   out=2;


        }
    


    }

    

	////////////////////////////////////////


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B%_D1
_B==_D1i_B<_A_C_L1_D1i_B==_D1
_A_C_L1_D1i_B==_D1i_A_C_L1_D1
_B==_D1i_A_C_L1_C_D1i_B==_D1i
B==_D1i_A_L1_D1i_B==_D1i_A_L1
D1i_B==_D1i_A_L1_D1i_B==_D1i_
_L1_D1i_B==_D1i_A_L1_C_L1_D1i
B>_D1i_B-_A_C_L1_D1i_B==_A_C_
1_D1i_B==_D1i_A_C_L1_D1i_B==_
1i_A_C_L1_C_L1_C_D1i_B%_D1i_B
=_D1i_B>=_D1i_B-_A_L1_D1i_B==
D1i_A_L1_D1i_B==_D1i_A_L1_C_D
i_B==_D1i_B==_D1i_A_L1_D1i_B=
_D1i_A_L1_D1i_B==_D1i_A_L1_D1
_B==_D1i_A_L1_D1i_B==_D1i_A_L
_C_L1_D1i_B<=_A_L1_D1i_B==_D1
_A_L1_D1i_B==_D1i_A_L1_C_L1_C
L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
