//주호세(hose123)_point_90
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M'){
        if(f==5){
            if(l<=3)
                out=1+l;
            else
                out=2+(6-l);
        }
        else if(f%2==0){
            if(l<=3)
                out=l;
            else
                out=1+(6-l);
        }
        else if((f==4||f==2)&&l==0)
            out=0;
        else if((f==3||f==1)&&l==6)
            out=0;
        else{
            if(l<=3)
                out=1+l;
            else
                out=6-l;
        }

        
    }
    else if(gender=='W'){
        if(f==5){
            if(l<=3){
                out=2+l;
            }
            else
                out=1+(6-l);
        }
        else if(f%2==0){
            if(l<=3)
                out=1+l;
            else
                out=6-l;
        }
        else if((f==3||f==1)&&l==0)
            out=0;
        else if((f==4||f==2)&&l==6)
            out=0;
        else{
            if(l<=3)
                out=l;
            else
                out=1+(6-l);
        }

    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B<=_D1i_B+_A_D1i_D1i_B-_B+_
_L1_C_D1i_B%_D1i_B==_D1i_B<=_
_D1i_D1i_B-_B+_A_L1_C_D1i_B==
D1i_B==_B||_D1i_B==_B&&_D1i_A
D1i_B==_D1i_B==_B||_D1i_B==_B
&_D1i_A_D1i_B<=_D1i_B+_A_D1i_
-_A_L1_C_L1_L1_L1_L1_C_D1c_B=
_D1i_B==_D1i_B<=_D1i_B+_A_C_D
i_D1i_B-_B+_A_L1_C_D1i_B%_D1i
B==_D1i_B<=_D1i_B+_A_D1i_B-_A
L1_C_D1i_B==_D1i_B==_B||_D1i_
==_B&&_D1i_A_D1i_B==_D1i_B==_
||_D1i_B==_B&&_D1i_A_D1i_B<=_
_D1i_D1i_B-_B+_A_L1_C_L1_L1_L
_L1_C_L1_L1_D1s_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
